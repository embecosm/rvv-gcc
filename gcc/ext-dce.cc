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
#include "memmodel.h"
#include "emit-rtl.h"
#include "cfganal.h"
#include "rtl-iter.h"

/* We consider four bit groups for liveness:
   bit 0..7   (least significant byte)
   bit 8..15  (second least significant byte)
   bit 16..31
   bit 32..BITS_PER_WORD-1  */

void
ext_dce (void)
{
  basic_block bb, *worklist, *qin, *qout, *qend;
  unsigned int qlen;
  rtx_insn *insn;
  sbitmap *livein, livenow; /* Probably should be bitmap.  */

  livein = sbitmap_vector_alloc (last_basic_block_for_fn (cfun),
				 4 * max_reg_num ());
  livenow = sbitmap_alloc (4 * max_reg_num ());

  qin = worklist
    = XNEWVEC (basic_block, n_basic_blocks_for_fn (cfun) - NUM_FIXED_BLOCKS);
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

      bitmap_clear (livenow);
      /* FIXME: make everything live that's live in the successors.  */

      bool changed = false;

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
		  unsigned HOST_WIDE_INT mask = GET_MODE_MASK (GET_MODE (x));
		  x = SET_DEST (x);
		  if (GET_CODE (x) == SUBREG)
		    {
		      bit = SUBREG_BYTE (x).to_constant () * BITS_PER_UNIT;
/* FIXME: BIG ENDIAN */
		      mask = GET_MODE_MASK (GET_MODE (SUBREG_REG (x))) << bit;
		      if (!mask)
			mask = -100000000ULL;
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
				 : (mask & 0xffff0000) ? 3
				 : (mask & 0xff00) ? 2 : 1);
		      bitmap_clear_range (livenow, 4 * rn + start, end - start);
		    }
		  else
		    gcc_assert (MEM_P (x));
		  iter.skip_subrtxes ();
		}
	    }
	  /* Now, process the uses.  */
	  FOR_EACH_SUBRTX (iter, array, PATTERN (insn), NONCONST)
	    {
	      const_rtx x = *iter;
	      enum rtx_code xcode = GET_CODE (x);

	      if (GET_CODE (x) == SET)
		{
		  const_rtx dst = SET_DEST (x);
		  const_rtx src = SET_SRC (x);
		  unsigned HOST_WIDE_INT bit = 0;
		  enum rtx_code code = GET_CODE (src);
		  if (GET_CODE (dst) == SUBREG)
		    {
		      bit = SUBREG_BYTE (dst).to_constant () * BITS_PER_UNIT;
/* FIXME: BIG ENDIAN */
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
			= { 0xff, 0xff00, 0xffff0000, -0x100000000 };
		      HOST_WIDE_INT mask = 0;
		      HOST_WIDE_INT rn = REGNO (x);
		      for (int i = 0; i < 4; i++)
			if (bitmap_bit_p (live_tmp, 4 * rn + i))
			  mask |= mask_array[i];
		      mask >>= bit;
		      if (code == PLUS || code == MINUS || code == MULT
			  || code == ASHIFT)
			mask = (2ULL << floor_log2 (mask)) - 1;
		      else if (code == SIGN_EXTEND || code == ZERO_EXTEND)
			mask &= GET_MODE_MASK (GET_MODE (XEXP (src, 0)));
		      if (code == REG)
			x = src;
		      else
			x = XEXP (src, 0);
		      for (;;)
			{
			  if (!REG_P (x))
			    break;
			  rn = REGNO (x);
			  if (mask & 0xff)
			    bitmap_set_bit (livenow, rn);
			  if (mask & 0xff00)
			    bitmap_set_bit (livenow, rn+1);
			  if (mask & 0xffff0000)
			    bitmap_set_bit (livenow, rn+2);
			  if (mask & -0x100000000ULL)
			    bitmap_set_bit (livenow, rn+3);
			  if (GET_RTX_LENGTH (code) < 2
			      || GET_RTX_FORMAT (code)[1] != 'e')
			    break;
			  x = XEXP (src, 1), code = REG;
			}
		      if (REG_P (x))
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
	  BITMAP_FREE (live_tmp);
	}

      if (!bitmap_equal_p (livein[bb->index], livenow))
	{
	  changed = true;
	  bitmap_copy (livein[bb->index], livenow);
	}

      edge_iterator ei;
      edge e;

      if (changed)
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

  /* FIXME: Delete dead sign / zero extensions.  */

  /* Clean up.  */
  sbitmap_vector_free (livein);
  clear_aux_for_blocks ();
  free (worklist);
}
