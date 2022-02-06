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
  tree crc_state;
  tree crc_data;
  unsigned HOST_WIDE_INT xor_mask;

  bool tree_is_int_const (const_tree expr, int val)
    {
      return (TREE_CODE (expr) == INTEGER_CST) && wi::eq_p (wi::to_widest (expr), val);
    }

  bool match_bb4 (basic_block bb)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN) && (gimple_assign_rhs_code(t) == BIT_XOR_EXPR))
		{
		  tree op2 = gimple_assign_rhs2 (t);
		  if (TREE_CODE (op2) != INTEGER_CST)
		    return false;
		  xor_mask = TREE_INT_CST_LOW (op2);
		  stmt_match++;
		}
	      else
		return false;
	    }
	  else if (stmt_match == 1)
	    {
	      if (gimple_code (t) == GIMPLE_ASSIGN)
		stmt_match++;
	      else
		return false;
	    }
	  else
	    return false;
	}

      edge e;
      edge_iterator ei;
      FOR_EACH_EDGE (e, ei, bb->succs)
	{
	  if (!match_bb6 (e->dest))
	    return false;
	}

      return true;
    }

  bool match_bb5 (basic_block bb)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN)
		  && (gimple_assign_rhs_code(t) == BIT_XOR_EXPR))
		stmt_match++;
	      else
		return false;
	    }
	  else
	    return false;
	}

      edge e;
      edge_iterator ei;
      FOR_EACH_EDGE (e, ei, bb->succs)
	{
	  if (!match_bb6 (e->dest))
	    return false;
	}

      return true;
    }

  bool match_bb6 (basic_block bb)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN)
		  && (gimple_assign_rhs_code(t) == RSHIFT_EXPR)
		  && integer_onep (gimple_op (t, 2)))
		stmt_match++;
	      else
		return false;
	    }
	  else if (stmt_match == 1)
	    {
	      if ((gimple_code (t) == GIMPLE_COND)
		  && (gimple_cond_code(t) == NE_EXPR)
		  && (tree_is_int_const (gimple_cond_rhs (t), 0)))
		stmt_match++;
	      else
		return false;
	    }
	  else
	    return false;
	}

      edge true_edge;
      edge false_edge;
      extract_true_false_edges_from_block (bb, &true_edge, &false_edge);

      if (match_bb7 (true_edge->dest) && match_bb8 (false_edge->dest))
	return true;
      else
	return false;
    }

  bool match_bb7 (basic_block bb)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN) && (gimple_assign_rhs_code(t) == BIT_IOR_EXPR))
		{
		  tree op2 = gimple_assign_rhs2 (t);
		  int prec
		    = TYPE_PRECISION (TREE_TYPE (gimple_assign_rhs1 (t)));
		  if (TREE_CODE (op2) != INTEGER_CST
		      || (TREE_INT_CST_LOW (op2)
			  & ((1 << (prec - 1)) - 1)))
		    return false;
		  xor_mask = TREE_INT_CST_LOW (op2) | (xor_mask >> 1);
		  stmt_match++;
		}
	      else
		return false;
	    }
	  else
	    return false;
	}

      edge e;
      edge_iterator ei;
      FOR_EACH_EDGE (e, ei, bb->succs)
	{
	  if (!match_bb9 (e->dest))
	    return false;
	}


      return true;
    }

  bool match_bb8 (basic_block bb)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi); gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN) && (gimple_assign_rhs_code(t) == BIT_AND_EXPR))
		stmt_match++;
	      else
		return false;
	    }
	  else
	    return false;
	}

      edge e;
      edge_iterator ei;
      FOR_EACH_EDGE (e, ei, bb->succs)
	{
	  if (!match_bb9 (e->dest))
	    return false;
	}


      return true;
    }

  bool match_bb9 (basic_block bb)
    {
      int stmt_match = 0;
      gimple_stmt_iterator gsi;

      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  gimple *t = gsi_stmt (gsi);

	  if (stmt_match == 0)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN))
		stmt_match++;
	      else
		return false;
	    }
	  else if (stmt_match == 1)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN)
		  && (gimple_assign_rhs_code(t) == PLUS_EXPR))
		stmt_match++;
	      else
		return false;
	    }
	  else
	    return false;
	}

      edge e;
      edge_iterator ei;
      FOR_EACH_EDGE (e, ei, bb->succs)
	{
	  if (!match_bb10 (e->dest))
	    return false;
	}

      return true;
    }


  bool match_bb10 (basic_block bb)
    {
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
		  && (tree_is_int_const (gimple_cond_rhs (t), 7)))
		stmt_match++;
	      else
		return false;
	    }
	  else
	    return false;
	}

      // Find tree's of incoming data and CRC
      // We choose the PHI arg who's src insn't the bb at the end of the loop
      gphi_iterator pi;
      for (pi = gsi_start_phis (bb); !gsi_end_p (pi); gsi_next (&pi))
	{
	  gphi *phi = pi.phi ();
	  if (!virtual_operand_p (gimple_phi_result (phi)) && (gimple_phi_num_args (phi) == 2))
	    {
	      unsigned i;
	      for (i = 0; i < gimple_phi_num_args (phi); i++)
		{
		   tree pa = gimple_phi_arg_def (phi, i);
#if 0
		   edge pe = gimple_phi_arg_edge (phi, i);
#endif
		   if (TREE_CODE (pa) != SSA_NAME)
		     break;
		   else if (SSA_NAME_IS_DEFAULT_DEF (pa))
		     {
		       // These should be the names of the variables coming in to the loop
		       if (GET_MODE_SIZE (TYPE_MODE (TREE_TYPE (pa))) == 1)
			 crc_data = pa;
		       else if (GET_MODE_SIZE (TYPE_MODE (TREE_TYPE (pa))) == 2)
			 crc_state = pa;
		       else
			 gcc_unreachable();
		     }
		}
	    }
	}

      edge true_edge;
      edge false_edge;
      extract_true_false_edges_from_block (bb, &true_edge, &false_edge);

	// Don't loop back to 3
      if (/*match_bb3 (true_edge->dest) &&*/ match_bb11 (false_edge->dest))
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
	      if (gimple_code (t) == GIMPLE_ASSIGN)
		{
		stmt_match++;

		// Save temp assigned to
		crc_result = gimple_assign_lhs(t);
		crc_result_bb = bb;

		// Ignore rest
		break;
		}
	      else
		return false;
	    }
	  else
	    return false;
	}

      return true;
    }

  bool insert_crc (int bits, unsigned HOST_WIDE_INT polynom)
    {
      gimple_stmt_iterator rsi = gsi_start_bb(crc_result_bb);

      tree fn = riscv_builtin_crc_fn (bits, polynom, false);
      gimple *fn_call;
      tree fn_result;
      if (fn == NULL_TREE)
	{
	  if (dump_file)
	    fprintf (dump_file, "No built-in function for crc polynom "
		     HOST_WIDE_INT_PRINT_HEX "for %d bits data\n",
		     polynom, bits);
	  return false;
	}

      fn = build_fold_addr_expr (fn);

      tree crc_arg = make_ssa_name (unsigned_intHI_type_node);
      gimple *cast0 = gimple_build_assign (crc_arg, convert_to_integer(unsigned_type_node, crc_state));

      tree data_arg = make_ssa_name (unsigned_intQI_type_node);
      gimple *cast1 = gimple_build_assign (data_arg, convert_to_integer(unsigned_type_node, crc_data));

      tree polynom_arg = build_int_cst (unsigned_intHI_type_node, polynom);

      fn_call = gimple_build_call (fn, 3, crc_arg, data_arg, polynom_arg);
      fn_result = make_ssa_name (unsigned_intHI_type_node);
      gimple_call_set_lhs (fn_call, fn_result);

      gimple_set_location(fn_call, gimple_location (gsi_stmt(rsi)));
      //update_stmt(fn_call);

      gsi_insert_after (&rsi, fn_call, GSI_SAME_STMT);
      gsi_insert_after (&rsi, cast0, GSI_SAME_STMT);
      gsi_insert_after (&rsi, cast1, GSI_SAME_STMT);

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

      stmt_match = 0;
      crc_result = NULL_TREE;
      crc_state = NULL_TREE;
      crc_data = NULL_TREE;
      crc_result_bb = NULL;

      /* FIXME: need to check that all the operands match.  */
      for (gsi = gsi_start_nondebug_bb (bb); !gsi_end_p (gsi);
	   gsi_next_nondebug (&gsi))
	{
	  //debug_gimple_stmt(gsi_stmt (gsi));

	  gimple *t = gsi_stmt (gsi);

	  //fprintf(stderr, "%d %d  %s   %s\n", bb_match, stmt_match, gimple_code_name[gimple_code (t)],  gimple_code (t) == GIMPLE_ASSIGN ? get_tree_code_name(gimple_assign_rhs_code(t)) : "" );

	  if (stmt_match == 0)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN)
		  && (gimple_assign_rhs_code(t) == NOP_EXPR))
		stmt_match++;
	      else
		break;
	    }
	  else if (stmt_match == 1)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN)
		  && (gimple_assign_rhs_code(t) == NOP_EXPR))
		stmt_match++;
	      else
		break;
	    }
	  else if (stmt_match == 2)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN)
		  && (gimple_assign_rhs_code(t) == BIT_XOR_EXPR))
		stmt_match++;
	      else
		break;
	    }
	  else if (stmt_match == 3)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN)
		  && (gimple_assign_rhs_code(t) == NOP_EXPR))
		stmt_match++;
	      else
		break;
	    }
	  else if (stmt_match == 4)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN)
		  && (gimple_assign_rhs_code(t) == BIT_AND_EXPR))
		stmt_match++;
	      else
		break;
	    }
	  else if (stmt_match == 5)
	    {
	      if ((gimple_code (t) == GIMPLE_ASSIGN)
		  && (gimple_assign_rhs_code(t) == RSHIFT_EXPR))
		stmt_match++;
	      else
		break;
	    }
	  else if (stmt_match == 6)
	    {
	      if ((gimple_code (t) == GIMPLE_COND)
		  && (gimple_cond_code(t) == EQ_EXPR)
		  && (integer_onep (gimple_cond_rhs (t))))
		{
		  stmt_match++;
		  bb_match++;
		  // Now compare basic-blocks that follow this, as they need to match as well
		  edge true_edge;
		  edge false_edge;
		  extract_true_false_edges_from_block (bb, &true_edge, &false_edge);
		  if (match_bb4 (true_edge->dest)
		      && match_bb5 (false_edge->dest))
		    {
		      //debug_tree(crc_result);

			   /*
		      // Find tree's of incoming data and CRC
		      // We choose the PHI arg who's src insn't the bb at the end of the loop
		      gphi_iterator pi;
		      for (pi = gsi_start_phis (bb); !gsi_end_p (pi); gsi_next (&pi))
			{
			  gphi *phi = pi.phi ();
			  if (!virtual_operand_p (gimple_phi_result (phi))
			      && (gimple_phi_num_args (phi) == 2))
			    {
			      unsigned i;
			      for (i = 0; i < gimple_phi_num_args (phi); i++)
				{
				   tree pa = gimple_phi_arg_def (phi, i);
				   edge pe = gimple_phi_arg_edge (phi, i);
				   if (TREE_CODE (pa) != SSA_NAME)
				     {
				       // loop index
				       break;
				     }
				   else if (!pe->src
					    || (pe->src->index == loop_end_idx))
				     {
				       // value of variable after loop
				     }
				   else
				     {
				       // These should be the names of the variables coming in to the loop
				       if (GET_MODE_SIZE (TYPE_MODE (TREE_TYPE (pa))) == 1)
					 crc_data = pa;
				       else if (GET_MODE_SIZE (TYPE_MODE (TREE_TYPE (pa))) == 2)
					 crc_state = pa;
				       else
					 gcc_unreachable();
				     }
				}
			    }
			}*/
		    }

		    /*
		    fprintf(stderr, "DATA TREE %p\n", crc_data);
		    debug_tree(crc_data);
		    fprintf(stderr, "STATE TREE %p\n", crc_state);
		    debug_tree(crc_state);
		    */

		    /* FIXME: find out number of bits from number of loop
		       iterations, use instead of "8" below.  */
		    if (crc_data && crc_state && crc_result_bb
			&& insert_crc (8, xor_mask))
		      changed = true;
		}
	      else
		break;
	    }
	  else
	    break;

	}

      if (0 && changed)
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
