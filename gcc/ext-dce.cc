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
		      mask = GET_MODE_MASK (GET_MODE (SUBREG_REG (x))) << bit;
		      if (!mask)
			mask = 0xffffffff00000000ULL;
		      x = SUBREG_REG (x);
		    }
		  else if (GET_CODE (x) == STRICT_LOW_PART)
		    {
		      x = XEXP (x, 0);
		    }
		  if (REG_P (x))
		    {
		      int start = (bit == 0 ? 0 : bit == 8 ? 1
				   : bit == 16 ? 2 : 3);
		      int end = ((mask & ~0xffffffffULL) ? 4
				 : (mask & 0xffff0000) ? 3
				 : (mask & 0xff00) ? 2 : 1);
		      bitmap_clear_range (livenow,
					  REGNO (x) + start, end - start);
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
		  enum rtx_code code = GET_CODE (src);
		  if (GET_CODE (dst) == SUBREG || GET_CODE (dst) == ZERO_EXTRACT
		      || GET_CODE (dst) == STRICT_LOW_PART)
		    dst = XEXP (dst, 0);
		  if (REG_P (dst)
		      && (code == PLUS || code == MINUS || code == MULT
			  || code == ASHIFT
			  || code == ZERO_EXTEND || code == SIGN_EXTEND))
		    {
		      /* FIXME.  */
		      iter.skip_subrtxes ();
		    }
		  else if (REG_P (dst))
		    iter.substitute (src);
		}
	      else if (xcode == SUBREG
		       && GET_MODE_BITSIZE (GET_MODE  (x)).to_constant () < 32)
		{
		  /* FIXME.  */
		  iter.skip_subrtxes ();
		}
	      else if (REG_P (x))
		bitmap_set_range (livenow, REGNO (x) * 4, 4);
	    }
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
