/* CRC detection.
   Copyright (C) 2015-2017 Free Software Foundation, Inc.
   Contributed by Jon Beniston <jon@beniston.com>.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3, or (at your option) any
later version.

GCC is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This pass detects CRC calculations.

  Compile with:
  -fdump-tree-crc -fdump-tree-crc-details

 */

#define IN_TARGET_CODE 1

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "hash-set.h"
#include "machmode.h"
#include "vec.h"
#include "double-int.h"
#include "input.h"
#include "alias.h"
#include "symtab.h"
#include "options.h"
#include "wide-int.h"
#include "inchash.h"
#include "tree.h"
#include "fold-const.h"
#include "predict.h"
#include "tm.h"
#include "tm_p.h"
#include "hard-reg-set.h"
#include "input.h"
#include "function.h"
#include "dominance.h"
#include "cfg.h"
#include "bitmap.h"
#include "cfganal.h"
#include "basic-block.h"
#include "tree-ssa-alias.h"
#include "internal-fn.h"
#include "gimple-expr.h"
#include "is-a.h"
#include "gimple.h"
#include "gimple-iterator.h"
#include "gimplify-me.h"
#include "stor-layout.h"
#include "gimple-ssa.h"
#include "tree-cfg.h"
#include "tree-phinodes.h"
#include "ssa-iterators.h"
#include "stringpool.h"
#include "tree-vrp.h"
#include "tree-ssanames.h"
#include "tree-ssa-loop-manip.h"
#include "tree-ssa-loop.h"
#include "tree-into-ssa.h"
#include "tree-ssa.h"
#include "cfgloop.h"
#include "tree-chrec.h"
#include "tree-data-ref.h"
#include "tree-scalar-evolution.h"
#include "tree-pass.h"
#include "gimple-pretty-print.h"
#include "gimple-iterator.h"
#include "tree-vectorizer.h"
#include "print-tree.h"
#include "targhooks.h"
#include "convert.h"

namespace {

const pass_data pass_data_crc =
{
  GIMPLE_PASS, /* type */
  "crc", /* name */
  OPTGROUP_LOOP, /* optinfo_flags */
  TV_MACH_DEP, /* tv_id */
  ( PROP_cfg | PROP_ssa ), /* properties_required */
  0, /* properties_provided */
  0, /* properties_destroyed */
  0, /* todo_flags_start */
  TODO_update_ssa, /* todo_flags_finish */
};

/* The optimal way to implement CRC computations depends on the CPU, but
   we need first recognize the computation as such before we can select a
   suitable method.
   For now, we just match the calculation of a 16 bit crc from 8-bit data
   and a previous crc as performed by a trademarked benchmark that is
   promoted as a replacement for Dhrystone.
   You can add other recognizers as desired.
   For new code you want to be optimized, you might also consider to use
   the GCC built-in functions.  */

class pass_crc : public gimple_opt_pass
{
public:
  pass_crc (gcc::context *ctxt)
    : gimple_opt_pass (pass_data_crc, ctxt)
  {}

  /* opt_pass methods: */
  virtual bool gate (function *)
    {
      /* We can at least use an efficient library function.
	 OTOH, we might not want to run this pass when it is
	 irrelevant, so obey that option setting.  */
      return TARGET_CRC_OPT;
    }

  virtual unsigned int execute (function *);

  tree crc_result;
  basic_block crc_result_bb;
  tree crc_state, crc_latch, crc_joined = NULL_TREE, crc_rejoined = NULL_TREE;
  tree crc_data, data_top, data_latch;
  tree bit_joined = NULL_TREE;
  unsigned HOST_WIDE_INT xor_mask;
  HOST_WIDE_INT first_iter_num, last_iter_num;
  basic_block bb3, bb6 = NULL, bb9 = NULL;

  bool match_bb4 (basic_block bb)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;
      tree bit_out, crc_out;

      if (!single_pred_p (bb))
	return false;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if (is_gimple_assign (t)
		  && gimple_assign_rhs_code(t) == BIT_XOR_EXPR
		  && gimple_assign_rhs1 (t) == crc_latch)
		{
		  tree op2 = gimple_assign_rhs2 (t);
		  if (!tree_fits_uhwi_p (op2))
		    return false;
		  crc_out = gimple_assign_lhs (t);
		  xor_mask = TREE_INT_CST_LOW (op2);
		  stmt_match++;
		}
	      else
		return false;
	    }
	  else if (stmt_match == 1)
	    {
	      if (!gimple_assign_single_p (t))
		return false;

	      bit_out = gimple_assign_lhs (t);
	      tree rhs = gimple_assign_rhs1 (t);
	      int prec = TYPE_PRECISION (TREE_TYPE (bit_out));

	      if (!expr_not_equal_to (rhs, wi::zero (prec)))
		return false;

	      stmt_match++;
	    }
	  else
	    return false;
	}
      if (stmt_match < 2)
	return false;

      edge e = single_succ_edge (bb);

      if (!e)
	return false;

      return match_bb6 (e, bit_out, crc_out);
    }

  bool match_bb5 (basic_block bb)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;
      tree bit_out;

      if (!single_pred_p (bb))
	return false;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if (!gimple_assign_single_p (t)
		  || !integer_zerop (gimple_assign_rhs1 (t)))
		return false;
	      bit_out = gimple_assign_lhs (t);

	      stmt_match++;
	    }
	  else
	    return false;
	}
      if (stmt_match < 1)
	return false;

      edge e = single_succ_edge (bb);

      if (!e)
	return false;

      return match_bb6 (e, bit_out, crc_latch);
    }

  bool match_bb6 (edge e, tree bit_in, tree crc_in)
    {
      basic_block bb = e->dest;

      if (EDGE_COUNT (bb->preds) != 2)
	return false;

      int phi_match = 0;

      for (gphi_iterator gsi = gsi_start_phis (bb); !gsi_end_p (gsi);
	   gsi_next (&gsi))
	{
	  gphi *phi = gsi.phi ();
	  tree val = PHI_ARG_DEF_FROM_EDGE (phi, e);
	  tree *joinp;

	  if (val == bit_in)
	    joinp = &bit_joined, phi_match++;
	  else if (val == crc_in)
	    joinp = &crc_joined, phi_match++;

	  if (!*joinp)
	    *joinp = PHI_RESULT (phi);
	  else if (*joinp != PHI_RESULT (phi))
	    return false;
	}
      if (phi_match < 2)
	return false;

      if (bb6 != NULL)
	return bb == bb6;
      bb6 = bb;

      int stmt_match = 0;
      tree crc_shifted;

      for (gimple_stmt_iterator gsi = gsi_start_nondebug_bb (bb);
	   !gsi_end_p (gsi); gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if (!is_gimple_assign (t)
		  || gimple_assign_rhs_code(t) != RSHIFT_EXPR
		  || gimple_assign_rhs1 (t) != crc_joined
		  || !TYPE_UNSIGNED (TREE_TYPE (crc_joined))
		  || !integer_onep (gimple_assign_rhs2 (t)))
		return false;
	      stmt_match++;
	      crc_shifted = gimple_assign_lhs (t);
	    }
	  else if (stmt_match == 1)
	    {
	      if ((gimple_code (t) == GIMPLE_COND)
		  && (gimple_cond_code(t) == NE_EXPR)
		  && gimple_cond_lhs (t) == bit_joined
		  && (integer_zerop (gimple_cond_rhs (t))))
		stmt_match++;
	      else
		return false;
	    }
	  else
	    return false;
	}
      if (stmt_match < 2)
	return false;

      edge true_edge;
      edge false_edge;
      extract_true_false_edges_from_block (bb, &true_edge, &false_edge);

      if (match_bb7 (true_edge->dest, crc_shifted)
	  && match_bb8 (false_edge->dest, crc_shifted))
	return true;
      else
	return false;
    }

  bool match_bb7 (basic_block bb, tree crc_in)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;
      tree crc_ored;

      if (!single_pred_p (bb))
	return false;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if (!is_gimple_assign(t)
		  || gimple_assign_rhs_code(t) != BIT_IOR_EXPR
		  || gimple_assign_rhs1 (t) != crc_in)
		return false;

	      tree op2 = gimple_assign_rhs2 (t);
	      int prec = TYPE_PRECISION (TREE_TYPE (gimple_assign_rhs1 (t)));
	      if (TREE_CODE (op2) != INTEGER_CST
		  || prec > HOST_BITS_PER_INT
		  || (TREE_INT_CST_LOW (op2)
		      & ((HOST_WIDE_INT_C (1) << (prec - 1)) - 1)))
		return false;
	      xor_mask = TREE_INT_CST_LOW (op2) | (xor_mask >> 1);
	      crc_ored = gimple_assign_lhs (t);
	      stmt_match++;
	    }
	  else
	    return false;
	}
      if (stmt_match < 1)
	return false;

      edge e = single_succ_edge (bb);

      if (!e)
	return false;

      return match_bb9 (e, crc_ored);
    }

  bool match_bb8 (basic_block bb, tree crc_in)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;
      tree crc_anded;

      if (!single_pred_p (bb))
	return false;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if (! is_gimple_assign (t)
		  || gimple_assign_rhs_code(t) != BIT_AND_EXPR
		  || gimple_assign_rhs1 (t) != crc_in)
		return false;

	      tree op1 = gimple_assign_rhs1 (t);
	      tree op2 = gimple_assign_rhs2 (t);
	      int prec = TYPE_PRECISION (TREE_TYPE (op1));

	      if (op1 != crc_in
		  || TREE_CODE (op2) != INTEGER_CST
		  || prec > HOST_BITS_PER_INT
		  || (~TREE_INT_CST_LOW (op2)
		      & ((HOST_WIDE_INT_C (1) << (prec - 1)) - 1)))
		return false;

	      if (!TYPE_UNSIGNED (TREE_TYPE (op1))
		  && (~TREE_INT_CST_LOW (op2)
		      & (HOST_WIDE_INT_C (1) << (prec - 1))))
		return false;

	      crc_anded = gimple_assign_lhs (t);
	      stmt_match++;
	    }
	  else
	    return false;
	}
      if (stmt_match < 1)
	return false;

      edge e = single_succ_edge (bb);

      if (!e)
	return false;

      return match_bb9 (e, crc_anded);
    }

  bool match_bb9 (edge e, tree crc_in)
    {
      basic_block bb = e->dest;

      if (EDGE_COUNT (bb->preds) != 2)
	return false;

      int phi_match = 0;

      for (gphi_iterator gsi = gsi_start_phis (bb); !gsi_end_p (gsi);
	   gsi_next (&gsi))
	{
	  gphi *phi = gsi.phi ();
	  tree val = PHI_ARG_DEF_FROM_EDGE (phi, e);

	  if (val == crc_in)
	    {
	      if (!crc_rejoined)
		crc_rejoined = PHI_RESULT (phi);
	      else if (PHI_RESULT (phi) != crc_rejoined)
		return false;
	      phi_match++;
	    }
	}
      if (phi_match < 1)
	return false;

      if (bb9 != NULL)
	return bb == bb9;
      bb9 = bb;

      int stmt_match = 0;
      tree iter_var, ix;

      for (gimple_stmt_iterator gsi = gsi_start_nondebug_bb (bb);
	   !gsi_end_p (gsi); gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if (!gimple_assign_single_p (t)
		  || TREE_CODE (gimple_assign_rhs1 (t)) != SSA_NAME)
		return false;
	      iter_var = gimple_assign_rhs1 (t);
	      ix = gimple_assign_lhs (t);
	      stmt_match++;
	    }
	  else if (stmt_match == 1)
	    {
	      if (!is_gimple_assign (t)
		  || gimple_assign_rhs_code(t) != PLUS_EXPR
		  || gimple_assign_rhs1 (t) != ix
		  || !integer_onep (gimple_assign_rhs2 (t)))
		return false;
	      ix = gimple_assign_lhs (t);
	      stmt_match++;
	    }
	  else
	    return false;
	}
      if (stmt_match < 2)
	return false;

      e = single_succ_edge (bb);

      if (!e)
	return false;

      return match_bb10 (e, iter_var, ix);
    }


  bool match_bb10 (edge e, tree iter_var, tree ix)
    {
      basic_block bb = e->dest, inc_bb = e->src;

      if (EDGE_COUNT (bb->preds) != 2)
	return false;

      edge preheader_edge;
      edge_iterator ei;

      FOR_EACH_EDGE (preheader_edge, ei, bb->preds)
	if (preheader_edge->src != inc_bb)
	  break;

      int stmt_match = 0;
      gimple_stmt_iterator gsi;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if ((gimple_code (t) == GIMPLE_COND)
		  && (gimple_cond_code(t) == LE_EXPR)
		  && iter_var == gimple_cond_lhs (t)
		  && tree_fits_shwi_p (gimple_cond_rhs (t)))
		{
		  last_iter_num = tree_to_shwi (gimple_cond_rhs (t));
		  stmt_match++;
		}
	      else
		return false;
	    }
	  else
	    return false;
	}
      if (stmt_match < 1)
	return false;

      tree iter_init;

      // Find tree's of incoming data and CRC
      // We choose the PHI arg who's src insn't the bb at the end of the loop
      int phi_match = 0;
      gphi_iterator pi;
      for (pi = gsi_start_phis (bb); !gsi_end_p (pi); gsi_next (&pi))
	{
	  gphi *phi = pi.phi ();
	  if (virtual_operand_p (gimple_phi_result (phi)))
	    ; /* Ignore.  */
	  else if (PHI_RESULT (phi) == data_latch
		   && PHI_ARG_DEF_FROM_EDGE (phi, e) == data_top)
	    {
	      crc_data = PHI_ARG_DEF_FROM_EDGE (phi, preheader_edge);
	      phi_match++;
	    }
	  else if (PHI_RESULT (phi) == crc_latch
		   && PHI_ARG_DEF_FROM_EDGE (phi, e) == crc_rejoined)
	    {
	      crc_state = PHI_ARG_DEF_FROM_EDGE (phi, preheader_edge);
	      phi_match++;
	    }
	  else if (PHI_RESULT (phi) == iter_var
		   && PHI_ARG_DEF_FROM_EDGE (phi, e) == ix)
	    {
	      iter_init = PHI_ARG_DEF_FROM_EDGE (phi, preheader_edge);
	      phi_match++;
	    }
	}
      if (phi_match < 3)
	return false;

      edge true_edge;
      edge false_edge;
      extract_true_false_edges_from_block (bb, &true_edge, &false_edge);

      /* Find what iter_init is set to.
	 (Presumably in preheader_edge->src, not that it really matters.)  */
      if (TREE_CODE (iter_init) != SSA_NAME)
	return false;
      gimple *def = SSA_NAME_DEF_STMT (iter_init);
      if (!gimple_assign_single_p (def)
	  || !integer_zerop (gimple_assign_rhs1 (def)))
	return false;
      first_iter_num = 0;
      /* Check that the type allows safe a safe loop test in bb10.  */
      if (!INTEGRAL_TYPE_P (TREE_TYPE (iter_init)) || last_iter_num >= 127)
	return false;

      if (true_edge->dest == bb3 && match_bb11 (false_edge->dest))
	return true;
      else
	return false;
    }

  bool match_bb11 (basic_block bb)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if (gimple_assign_single_p (t)
		  && gimple_assign_rhs1 (t) == crc_latch)
		{
		  stmt_match++;

		  // Save temp assigned to
		  crc_result = gimple_assign_lhs(t);
		  crc_result_bb = bb;

		  // Ignore rest
		  return true;
		}
	      else
		return false;
	    }
	  else
	    return false;
	}

      return false;
    }

  bool insert_crc (int bits, unsigned HOST_WIDE_INT polynom)
    {
      gimple_stmt_iterator rsi = gsi_start_bb(crc_result_bb);

      gimple *fn_call;
      tree fn_result;

#if 0
      tree crc_arg = make_ssa_name (unsigned_intHI_type_node);
      gimple *cast0 = gimple_build_assign (crc_arg, convert_to_integer(unsigned_type_node, crc_state));

      tree data_arg = make_ssa_name (unsigned_intQI_type_node);
      gimple *cast1 = gimple_build_assign (data_arg, convert_to_integer(unsigned_type_node, crc_data));

      tree polynom_arg = build_int_cst (unsigned_intHI_type_node, polynom);
#else
      tree crc_arg = crc_state;
      tree data_arg = crc_data;

      tree polynom_arg = build_int_cst (TREE_TYPE (crc_state), polynom);
#endif

      if (GET_MODE_BITSIZE (TYPE_MODE (TREE_TYPE (data_arg))) != bits)
	return false;

      fn_call = gimple_build_call_internal (IFN_CRC, 3,
					    crc_arg, data_arg, polynom_arg);
      fn_result = make_ssa_name (TREE_TYPE (crc_result));
      gimple_call_set_lhs (fn_call, fn_result);

      gimple_set_location(fn_call, gimple_location (gsi_stmt(rsi)));
      //update_stmt(fn_call);

      gsi_insert_after (&rsi, fn_call, GSI_SAME_STMT);
#if 0
      gsi_insert_after (&rsi, cast0, GSI_SAME_STMT);
      gsi_insert_after (&rsi, cast1, GSI_SAME_STMT);
#endif

      use_operand_p imm_use_p;
      imm_use_iterator iterator;
      gimple *stmt;
      FOR_EACH_IMM_USE_STMT (stmt, iterator, crc_result)
	{
	  FOR_EACH_IMM_USE_ON_STMT (imm_use_p, iterator)
	    SET_USE (imm_use_p, fn_result);
	  update_stmt (stmt);
	}
      return true;
    }


}; // class pass_crc


unsigned int
pass_crc::execute (function *fun)
{
  bool changed = false;
  basic_block bb;

  int bb_match;
  int stmt_match;

  //fprintf(stderr, "CRC check for function: %s\n", function_name(fun));

  bb_match = 0;
  FOR_ALL_BB_FN (bb, fun)
    {
      gimple_stmt_iterator gsi;
      tree tmp1, tmp2, tmp3, tmp4, tmp5;

      stmt_match = 0;
      crc_result = NULL_TREE;
      crc_state = NULL_TREE;
      crc_data = NULL_TREE;
      crc_result_bb = NULL;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  //debug_gimple_stmt(gsi_stmt (gsi));

	  gimple *t = gsi_stmt (gsi);

	  //fprintf(stderr, "%d %d  %s   %s\n", bb_match, stmt_match, gimple_code_name[gimple_code (t)],  gimple_code (t) == GIMPLE_ASSIGN ? get_tree_code_name(gimple_assign_rhs_code(t)) : "" );

	  if (stmt_match == 0)
	    {
	      if (is_gimple_assign (t)
		  && gimple_assign_rhs_code (t) == NOP_EXPR)
		{
		  crc_latch = gimple_assign_rhs1 (t);
		  tmp1 = gimple_assign_lhs (t);
		  stmt_match++;
		}
	      else
		break;
	    }
	  else if (stmt_match == 1)
	    {
	      if (is_gimple_assign (t)
		  && gimple_assign_rhs_code (t) == NOP_EXPR)
		{
		  data_latch = gimple_assign_rhs1 (t);
		  tmp2 = gimple_assign_lhs (t);
		  stmt_match++;
		}
	      else
		break;
	    }
	  else if (stmt_match == 2)
	    {
	      if (is_gimple_assign (t)
		  && gimple_assign_rhs_code (t) == BIT_XOR_EXPR
		  && gimple_assign_rhs1 (t) == tmp1
		  && gimple_assign_rhs2 (t) == tmp2)
		{
		  tmp3 = gimple_assign_lhs (t);
		  stmt_match++;
		}
	      else
		break;
	    }
	  else if (stmt_match == 3)
	    {
	      if (is_gimple_assign (t)
		  && gimple_assign_rhs_code(t) == NOP_EXPR
		  && gimple_assign_rhs1 (t) == tmp3)
		{
		  tmp4 = gimple_assign_lhs (t);
		  stmt_match++;
		}
	      else
		break;
	    }
	  else if (stmt_match == 4)
	    {
	      if (is_gimple_assign (t)
		  && gimple_assign_rhs_code(t) == BIT_AND_EXPR
		  && gimple_assign_rhs1 (t) == tmp4
		  && integer_onep (gimple_assign_rhs2 (t)))
		{
		  tmp5 = gimple_assign_lhs (t);
		  stmt_match++;
		}
	      else
		break;
	    }
	  else if (stmt_match == 5)
	    {
	      if (is_gimple_assign (t)
		  && gimple_assign_rhs_code(t) == RSHIFT_EXPR
		  && gimple_assign_rhs1 (t) == data_latch
		  && TYPE_UNSIGNED (TREE_TYPE (data_latch))
		  && integer_onep (gimple_assign_rhs2 (t)))
		{
		  data_top = gimple_assign_lhs (t);
		  stmt_match++;
		}
	      else
		break;
	    }
	  else if (stmt_match == 6)
	    {
	      if (gimple_code (t) == GIMPLE_COND
		  && gimple_cond_code(t) == EQ_EXPR
		  && gimple_cond_lhs (t) == tmp5
		  && integer_onep (gimple_cond_rhs (t))
		  && single_pred_p (bb))
		{
		  stmt_match++;
		  bb_match++;
		  // Now compare basic-blocks that follow this, as they need to match as well
		  edge true_edge;
		  edge false_edge;
		  bb3 = bb;
		  extract_true_false_edges_from_block (bb, &true_edge,
						       &false_edge);
		  if (match_bb4 (true_edge->dest)
		      && match_bb5 (false_edge->dest))
		    {
		      //debug_tree(crc_result);

		    }

		    /*
		    fprintf(stderr, "DATA TREE %p\n", crc_data);
		    debug_tree(crc_data);
		    fprintf(stderr, "STATE TREE %p\n", crc_state);
		    debug_tree(crc_state);
		    */

		    if (crc_data && crc_state && crc_result_bb
			&& insert_crc (last_iter_num + 1 - first_iter_num,
				       xor_mask))
		      changed = true;
		}
	      else
		break;
	    }
	  else
	    break;

	}

      if (changed)
	{
	  /* Cached scalar evolutions now may refer to wrong or non-existing
	     loops.  */
	  scev_reset_htab ();
	  mark_virtual_operands_for_renaming (fun);
	  rewrite_into_loop_closed_ssa (NULL, TODO_update_ssa);
	}
    }

  return 0;
}

} // anon namespace

gimple_opt_pass *
make_pass_crc (gcc::context *ctxt)
{
  return new pass_crc (ctxt);
}
