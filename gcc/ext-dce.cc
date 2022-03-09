/* RTL dead zero/sign extension (code) elimination.
   Copyright (C) 2000-2022 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "rtl.h"
#include "tree.h"
#include "memmodel.h"
#include "insn-config.h"
#include "emit-rtl.h"
#include "recog.h"
#include "cfganal.h"
#include "tree-pass.h"
#include "rtl-iter.h"
#include "df.h"

/* We consider four bit groups for liveness:
   bit 0..7   (least significant byte)
   bit 8..15  (second least significant byte)
   bit 16..31
   bit 32..BITS_PER_WORD-1  */

bitmap
ext_dce_process_bb (basic_block bb, bitmap livenow, bool modify)
{
  rtx_insn *insn;

  FOR_BB_INSNS_REVERSE (bb, insn)
    {
      subrtx_iterator::array_type array;

      if (!INSN_P (insn))
	continue;

      bitmap live_tmp = BITMAP_ALLOC (NULL);

      /* First, process the sets.  */
      FOR_EACH_SUBRTX (iter, array, PATTERN (insn), NONCONST)
	{
	  const_rtx x = *iter;
	  if (GET_CODE (x) == SET || GET_CODE (x) == CLOBBER)
	    {
	      unsigned bit = 0;
	      x = SET_DEST (x);
	      unsigned HOST_WIDE_INT mask = GET_MODE_MASK (GET_MODE (x));
	      if (GET_CODE (x) == SUBREG)
		{
		  bit = SUBREG_BYTE (x).to_constant () * BITS_PER_UNIT;
		  if (WORDS_BIG_ENDIAN)
		    bit = (GET_MODE_BITSIZE (GET_MODE (x)).to_constant ()
			   - BITS_PER_WORD - bit);
		  mask = GET_MODE_MASK (GET_MODE (SUBREG_REG (x))) << bit;
		  if (!mask)
		    mask = -0x100000000ULL;
		  x = SUBREG_REG (x);
		}
	      else if (GET_CODE (x) == STRICT_LOW_PART)
		{
		  x = XEXP (x, 0);
		}
	      if (REG_P (x))
		{
		  HOST_WIDE_INT rn = REGNO (x);
		  for (HOST_WIDE_INT i = 4 * rn; i < 4 * rn + 4; i++)
		    if (bitmap_bit_p (livenow, i))
		      bitmap_set_bit (live_tmp, i);
		  int start = (bit == 0 ? 0 : bit == 8 ? 1
			       : bit == 16 ? 2 : 3);
		  int end = ((mask & ~0xffffffffULL) ? 4
			     : (mask & 0xffff0000ULL) ? 3
			     : (mask & 0xff00) ? 2 : 1);
		  bitmap_clear_range (livenow, 4 * rn + start, end - start);
		}
	      else
		gcc_assert (MEM_P (x) || x == pc_rtx
			    || GET_CODE (x) == SCRATCH);
	      iter.skip_subrtxes ();
	    }
	}
      /* Now, process the uses.  */
      subrtx_var_iterator::array_type array_var;
      FOR_EACH_SUBRTX_VAR (iter, array_var, PATTERN (insn), NONCONST)
	{
	  rtx x = *iter;
	  enum rtx_code xcode = GET_CODE (x);

	  if (GET_CODE (x) == SET)
	    {
	      const_rtx dst = SET_DEST (x);
	      rtx src = SET_SRC (x);
	      const_rtx y;
	      unsigned HOST_WIDE_INT bit = 0;
	      enum rtx_code code = GET_CODE (src);
	      if (GET_CODE (dst) == SUBREG)
		{
		  bit = SUBREG_BYTE (dst).to_constant () * BITS_PER_UNIT;
		  if (WORDS_BIG_ENDIAN)
		    bit = (GET_MODE_BITSIZE (GET_MODE (dst)).to_constant ()
			   - BITS_PER_WORD - bit);
		  if (bit >= HOST_BITS_PER_WIDE_INT)
		    bit = HOST_BITS_PER_WIDE_INT - 1;
		  dst = SUBREG_REG (dst);
		}
	      else if (GET_CODE (dst) == ZERO_EXTRACT
		       || GET_CODE (dst) == STRICT_LOW_PART)
		dst = XEXP (dst, 0);
	      if (REG_P (dst)
		  && (code == PLUS || code == MINUS || code == MULT
		      || code == ASHIFT
		      || code == ZERO_EXTEND || code == SIGN_EXTEND
		      || code == AND || code == IOR || code == XOR
		      || code == REG
		      || (code == SUBREG && REG_P (SUBREG_REG (src)))))
		{
		  unsigned HOST_WIDE_INT mask_array[]
		    = { 0xff, 0xff00, 0xffff0000ULL, -0x100000000ULL };
		  HOST_WIDE_INT mask = 0;
		  HOST_WIDE_INT rn = REGNO (dst);
		  for (int i = 0; i < 4; i++)
		    if (bitmap_bit_p (live_tmp, 4 * rn + i))
		      mask |= mask_array[i];
		  mask >>= bit;
		  if (code == SIGN_EXTEND || code == ZERO_EXTEND)
		    {
		      rtx inner = XEXP (src, 0);
		      HOST_WIDE_INT mask2 = GET_MODE_MASK (GET_MODE (inner));

		      /* Delete dead sign / zero extensions.  */
  if (0 && modify)
{
debug_rtx(insn);
debug_bitmap (live_tmp);
    fprintf (stderr, "m " HOST_WIDE_INT_PRINT_HEX " m2 " HOST_WIDE_INT_PRINT_HEX "\n", mask, mask2);
}
		      if (modify && (mask & ~mask2) == 0)
			validate_change
			  (insn, &SET_SRC (x),
			   simplify_gen_subreg
			     (GET_MODE (src), inner, GET_MODE (inner), 0),
			   false);

		      mask &= mask2;
		      src = XEXP (src, 0);
		      code = GET_CODE (src);
		    }
		  if (code == PLUS || code == MINUS || code == MULT
		      || code == ASHIFT)
		    mask = mask ? ((2ULL << floor_log2 (mask)) - 1) : 0;
		  if (BINARY_P (src))
		    y = XEXP (src, 0);
		  else
		    y = src;
		  for (;;)
		    {
		      if (GET_CODE (y) == SUBREG)
			{
			  bit = SUBREG_BYTE (y).to_constant () * BITS_PER_UNIT;
			  if (WORDS_BIG_ENDIAN)
			    bit = (GET_MODE_BITSIZE
				    (GET_MODE (y)).to_constant ()
				     - BITS_PER_WORD - bit);
			  if (mask)
			    {
			      mask <<= bit;
			      if (!mask)
				mask = -0x100000000ULL;
			    }
			  y = SUBREG_REG (y);
			}
		      if (REG_P (y))
			{
			  rn = 4 * REGNO (y);
			  if (mask & 0xff)
			    bitmap_set_bit (livenow, rn);
			  if (mask & 0xff00)
			    bitmap_set_bit (livenow, rn+1);
			  if (mask & 0xffff0000ULL)
			    bitmap_set_bit (livenow, rn+2);
			  if (mask & -0x100000000ULL)
			    bitmap_set_bit (livenow, rn+3);
			}
		      else if (!CONSTANT_P (y))
			break;
		      if (!BINARY_P (src))
			break;
		      y = XEXP (src, 1), src = pc_rtx;
		    }
		  if (REG_P (y) || CONSTANT_P (y))
		    iter.skip_subrtxes ();
		}
	      else if (REG_P (dst))
		iter.substitute (src);
	    }
	  else if (xcode == SUBREG
		   && GET_MODE_BITSIZE (GET_MODE  (x)).to_constant () <= 32
		   && SUBREG_BYTE (x).to_constant () == 0
		   && REG_P (SUBREG_REG (x)))
	    {
	      HOST_WIDE_INT size
		= GET_MODE_BITSIZE (GET_MODE  (x)).to_constant ();
	      HOST_WIDE_INT rn = 4 * REGNO (SUBREG_REG (x));
	      bitmap_set_bit (livenow, rn);
	      if (size > 8)
		bitmap_set_bit (livenow, rn+1);
	      if (size > 16)
		bitmap_set_bit (livenow, rn+2);
	      iter.skip_subrtxes ();
	    }
	  else if (REG_P (x))
	    bitmap_set_range (livenow, REGNO (x) * 4, 4);
	}
      //BITMAP_FREE (live_tmp);
    }
  return livenow;
}

void
ext_dce (void)
{
  /* Proper PRE is hard, so for now just extend return values without
    checking if that'll help.
    (To check if it'd help, we'd have to do a dataflow computation to check
     if a highpart computed from an extension that could be changed into a
     no-op move reaches the return value copy.)
    If a function is inlined, the return value should already be used
    just in the mode needed, so normal ext-dce should work just fine.  */
  if (flag_ext_dce == 2)
    {
      edge_iterator ei;
      edge e;
      rtx_insn *insn;

      FOR_EACH_EDGE (e, ei, EXIT_BLOCK_PTR_FOR_FN (cfun)->preds)
	FOR_BB_INSNS (e->src, insn)
	  {
	    rtx set = single_set (insn);
	    if (!set
		|| !REG_P (SET_SRC (set))
		|| !REG_P (SET_DEST (set)))
	      continue;
	    tree decl = REG_EXPR (SET_SRC (set));
	    if (!decl || TREE_CODE (decl) != RESULT_DECL
		|| TREE_CODE (TREE_TYPE (decl)) != INTEGER_TYPE
		|| maybe_ge (TYPE_PRECISION (TREE_TYPE (decl)),
			     GET_MODE_BITSIZE (GET_MODE (SET_SRC (set)))))
	      continue;
	    rtx ext = gen_rtx_SUBREG (TYPE_MODE (TREE_TYPE (decl)),
				      SET_SRC (set), 0);
	    ext = gen_rtx_fmt_e ((TYPE_UNSIGNED (TREE_TYPE (decl))
				  ? ZERO_EXTEND : SIGN_EXTEND),
				 GET_MODE (SET_DEST (set)), ext);
	    validate_change (insn, &SET_SRC (set), ext, false);
	  }
    }

  basic_block bb, *worklist, *qin, *qout, *qend;
  unsigned int qlen;
  vec<bitmap_head> livein;
  bitmap livenow;

  livein.create (last_basic_block_for_fn (cfun));
  livein.quick_grow (last_basic_block_for_fn (cfun));
  for (int i = 0; i < last_basic_block_for_fn (cfun); i++)
    bitmap_initialize (&livein[i], &bitmap_default_obstack);

  auto_bitmap refs (&bitmap_default_obstack);
  df_get_exit_block_use_set (refs);

  unsigned i;
  bitmap_iterator bi;
  EXECUTE_IF_SET_IN_BITMAP (refs, 0, i, bi)
    {
      for (int j = 0; j < 4; j++)
	bitmap_set_bit (&livein[EXIT_BLOCK], i * 4 + j);
    }

  livenow = BITMAP_ALLOC (NULL);

  worklist
    = XNEWVEC (basic_block, n_basic_blocks_for_fn (cfun) - NUM_FIXED_BLOCKS);

  int modify = 0;

  do
    {
      qin = qout = worklist;

      /* Put every block on the worklist.  */
      auto_vec<int, 20> postorder;
      inverted_post_order_compute (&postorder);
      for (unsigned int i = 0; i < postorder.length (); ++i)
	{
	  bb = BASIC_BLOCK_FOR_FN (cfun, postorder[i]);
	  if (bb == EXIT_BLOCK_PTR_FOR_FN (cfun)
	      || bb == ENTRY_BLOCK_PTR_FOR_FN (cfun))
	    continue;
	  *qin++ = bb;
	  bb->aux = bb;
	}

      qin = worklist;
      qend = &worklist[n_basic_blocks_for_fn (cfun) - NUM_FIXED_BLOCKS];
      qlen = n_basic_blocks_for_fn (cfun) - NUM_FIXED_BLOCKS;

      /* Iterate until the worklist is empty.  */
      while (qlen)
	{
	  /* Take the first entry off the worklist.  */
	  bb = *qout++;
	  qlen--;

	  if (qout >= qend)
	    qout = worklist;

	  /* Clear the aux field of this block so that it can be added to
	     the worklist again if necessary.  */
	  bb->aux = NULL;

	  bitmap_clear (livenow);
	  /* Make everything live that's live in the successors.  */
	  edge_iterator ei;
	  edge e;

	  FOR_EACH_EDGE (e, ei, bb->succs)
	    bitmap_ior_into (livenow, &livein[e->dest->index]);

	  livenow = ext_dce_process_bb (bb, livenow, modify > 0);

	  if (!bitmap_equal_p (&livein[bb->index], livenow))
	    {
	      gcc_assert (!modify);
	      bitmap tmp = BITMAP_ALLOC (NULL);
	      gcc_assert (!bitmap_and_compl (tmp, &livein[bb->index], livenow));

	      bitmap_copy (&livein[bb->index], livenow);

	      edge_iterator ei;
	      edge e;

	      FOR_EACH_EDGE (e, ei, bb->preds)
		if (!e->src->aux && e->src != ENTRY_BLOCK_PTR_FOR_FN (cfun))
		  {
		    *qin++ = e->src;
		    e->src->aux = e;
		    qlen++;
		    if (qin >= qend)
		      qin = worklist;
		  }
	    }
	}
    } while (!modify++);

  /* Clean up.  */
  BITMAP_FREE (livenow);
  unsigned len = livein.length ();
  for (unsigned i = 0; i < len; i++)
    bitmap_clear (&livein[i]);
  livein.release ();
  clear_aux_for_blocks ();
  free (worklist);
}

namespace {

const pass_data pass_data_ext_dce =
{
  RTL_PASS, /* type */
  "ext_dce", /* name */
  OPTGROUP_NONE, /* optinfo_flags */
  TV_NONE, /* tv_id */
  PROP_cfglayout, /* properties_required */
  0, /* properties_provided */
  0, /* properties_destroyed */
  0, /* todo_flags_start */
  TODO_df_finish, /* todo_flags_finish */
};

class pass_ext_dce : public rtl_opt_pass
{
public:
  pass_ext_dce (gcc::context *ctxt)
    : rtl_opt_pass (pass_data_ext_dce, ctxt)
  {}

  /* opt_pass methods: */
  virtual bool gate (function *) { return flag_ext_dce != 0; }
  virtual unsigned int execute (function *)
    {
      ext_dce ();
      return 0;
    }

}; // class pass_combine

} // anon namespace

rtl_opt_pass *
make_pass_ext_dce (gcc::context *ctxt)
{
  return new pass_ext_dce (ctxt);
}
