/* Schedule GIMPLE vector statements.
   Copyright (C) 2020-2022 Free Software Foundation, Inc.

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

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "rtl.h"
#include "tree.h"
#include "gimple.h"
#include "tree-pass.h"
#include "ssa.h"
#include "expmed.h"
#include "optabs-tree.h"
#include "tree-eh.h"
#include "gimple-iterator.h"
#include "gimplify-me.h"
#include "gimplify.h"
#include "tree-cfg.h"
#include "bitmap.h"
#include "tree-ssa-dce.h"
#include "memmodel.h"
#include "optabs.h"
#include "gimple-fold.h"
#include "internal-fn.h"
#include "fold-const.h"

/* Expand all ARRAY_REF(VIEW_CONVERT_EXPR) gimple assignments into calls to
   internal function based on vector type of selected expansion.
   i.e.:
     VIEW_CONVERT_EXPR<int[4]>(u)[_1] = i_4(D);
   =>
     _7 = u;
     _8 = .VEC_SET (_7, i_4(D), _1);
     u = _8;  */

static bool
gimple_expand_vec_set_expr (struct function *fun, gimple_stmt_iterator *gsi)
{
  enum tree_code code;
  gcall *new_stmt = NULL;
  gassign *ass_stmt = NULL;
  bool cfg_changed = false;

  /* Only consider code == GIMPLE_ASSIGN.  */
  gassign *stmt = dyn_cast<gassign *> (gsi_stmt (*gsi));
  if (!stmt)
    return false;

  tree lhs = gimple_assign_lhs (stmt);
  code = TREE_CODE (lhs);
  if (code != ARRAY_REF)
    return false;

  tree val = gimple_assign_rhs1 (stmt);
  tree op0 = TREE_OPERAND (lhs, 0);
  if (TREE_CODE (op0) == VIEW_CONVERT_EXPR && DECL_P (TREE_OPERAND (op0, 0))
      && VECTOR_TYPE_P (TREE_TYPE (TREE_OPERAND (op0, 0)))
      && TYPE_MODE (TREE_TYPE (lhs))
	   == TYPE_MODE (TREE_TYPE (TREE_TYPE (TREE_OPERAND (op0, 0)))))
    {
      tree pos = TREE_OPERAND (lhs, 1);
      tree view_op0 = TREE_OPERAND (op0, 0);
      machine_mode outermode = TYPE_MODE (TREE_TYPE (view_op0));
      if (auto_var_in_fn_p (view_op0, fun->decl)
	  && !TREE_ADDRESSABLE (view_op0) && can_vec_set_var_idx_p (outermode))
	{
	  location_t loc = gimple_location (stmt);
	  tree var_src = make_ssa_name (TREE_TYPE (view_op0));
	  tree var_dst = make_ssa_name (TREE_TYPE (view_op0));

	  ass_stmt = gimple_build_assign (var_src, view_op0);
	  gimple_set_vuse (ass_stmt, gimple_vuse (stmt));
	  gimple_set_location (ass_stmt, loc);
	  gsi_insert_before (gsi, ass_stmt, GSI_SAME_STMT);

	  new_stmt
	    = gimple_build_call_internal (IFN_VEC_SET, 3, var_src, val, pos);
	  gimple_call_set_lhs (new_stmt, var_dst);
	  gimple_set_location (new_stmt, loc);
	  gsi_insert_before (gsi, new_stmt, GSI_SAME_STMT);

	  ass_stmt = gimple_build_assign (view_op0, var_dst);
	  gimple_set_location (ass_stmt, loc);
	  gsi_insert_before (gsi, ass_stmt, GSI_SAME_STMT);

	  basic_block bb = gimple_bb (stmt);
	  gimple_move_vops (ass_stmt, stmt);
	  if (gsi_remove (gsi, true)
	      && gimple_purge_dead_eh_edges (bb))
	    cfg_changed = true;
	  *gsi = gsi_for_stmt (ass_stmt);
	}
    }

  return cfg_changed;
}

/* Subroutine of gimple_gen_vcond_mask, it generates invert mask for op0.  */

static tree
gimple_gen_inverse_mask (gimple_seq *stmts, location_t loc, tree op0)
{
  bool use_swap_comparison_p = false;
  gimple *def_stmt = SSA_NAME_DEF_STMT (op0);
  enum tree_code tcode;
  internal_fn fn = IFN_LAST;
  tree op0a = NULL_TREE, op0b = NULL_TREE, op1 = NULL_TREE;
  tree tem = NULL_TREE;

  if (def_stmt && is_gimple_assign (def_stmt))
    {
      tcode = gimple_assign_rhs_code (def_stmt);
      if (TREE_CODE_CLASS (tcode) == tcc_comparison)
	{
	  use_swap_comparison_p = true;
	  op0a = gimple_assign_rhs1 (def_stmt);
	  op0b = gimple_assign_rhs2 (def_stmt);
	}
    }

  if (def_stmt && is_gimple_call (def_stmt)
      && gimple_call_internal_p (def_stmt))
    {
      fn = gimple_call_internal_fn (def_stmt);
      if (fn == IFN_VEC_CMP_VS || fn == IFN_VEC_CMPU_VS)
	{
	  use_swap_comparison_p = true;
	  op0a = gimple_call_arg (def_stmt, 0);
	  op0b = gimple_call_arg (def_stmt, 1);
	  tcode
	    = (enum tree_code) int_cst_value (gimple_call_arg (def_stmt, 2));
	}

      if (fn == IFN_LEN_VEC_CMP_VS || fn == IFN_LEN_VEC_CMPU_VS
	  || fn == IFN_LEN_VEC_CMP || fn == IFN_LEN_VEC_CMPU)
	{
	  use_swap_comparison_p = true;
	  op0a = gimple_call_arg (def_stmt, 0);
	  op0b = gimple_call_arg (def_stmt, 1);
	  op1 = gimple_call_arg (def_stmt, 2);
	  tcode
	    = (enum tree_code) int_cst_value (gimple_call_arg (def_stmt, 3));
	}
    }

  enum tree_code new_code
    = (use_swap_comparison_p
       ? invert_tree_comparison (tcode, HONOR_NANS (TREE_TYPE (op0a)))
       : ERROR_MARK);
  if (new_code == ERROR_MARK)
    use_swap_comparison_p = false;

  if (!use_swap_comparison_p)
    {
      if (op1 && direct_internal_fn_supported_p (IFN_LEN_NOT, TREE_TYPE (op0),
						 OPTIMIZE_FOR_BOTH))
	tem = gimple_build (stmts, loc, as_combined_fn (IFN_LEN_NOT),
			    TREE_TYPE (op0), op0, op1);
      else
	tem = gimple_build (stmts, loc, BIT_NOT_EXPR, TREE_TYPE (op0), op0);
    }
  else
    {
      if (is_gimple_assign (def_stmt))
	tem = gimple_build (stmts, loc, new_code, TREE_TYPE (op0), op0a, op0b);
      else
	{
	  if (op1)
	    {
	      tem = create_tmp_reg_or_ssa_name (TREE_TYPE (op0));
	      gcall *call
		= gimple_build_call_internal (fn, 4, op0a, op0b, op1,
					      build_int_cst (integer_type_node,
							     new_code));
	      gimple_set_lhs (call, tem);
	      gimple_set_location (call, loc);
	      gimple_seq_add_stmt_without_update (stmts, call);
	    }
	  else
	    tem = gimple_build (stmts, loc, as_combined_fn (fn),
				TREE_TYPE (op0), op0a, op0b,
				build_int_cst (integer_type_node, new_code));
	}
    }

  gcc_assert (tem != NULL_TREE);
  return tem;
}

/* Subroutine of gimple_expand_vec_cond_expr and gimple_expand_len_vcond_fn,
   it generates vcond_mask for vec_cond expression and len_vcond fn.  */

static gimple *
gimple_gen_vcond_mask (gimple_stmt_iterator *gsi, location_t loc, tree op0,
		       tree op1, tree op2, tree op3)
{
  enum insn_code code
    = (op3
       ? get_len_vcond_mask_vs_icode (TYPE_MODE (TREE_TYPE (op1)),
				      TYPE_MODE (TREE_TYPE (op0)))
       : get_vcond_mask_vs_icode (TYPE_MODE (TREE_TYPE (op1)),
				  TYPE_MODE (TREE_TYPE (op0))));

  if (code != CODE_FOR_nothing)
    {
      if (splat_vector_p (op1))
	{
	  if (op3)
	    return gimple_build_call_internal (IFN_LEN_VCOND_MASK_VS, 4, op0,
					       splat_vector_p (op1), op2, op3);
	  else
	    return gimple_build_call_internal (IFN_VCOND_MASK_VS, 3, op0,
					       splat_vector_p (op1), op2);
	}

      if (splat_vector_p (op2))
	{
	  gimple_seq stmts = NULL;
	  tree tem = gimple_gen_inverse_mask (&stmts, loc, op0);
	  gsi_insert_seq_before (gsi, stmts, GSI_SAME_STMT);
	  if (op3)
	    return gimple_build_call_internal (IFN_LEN_VCOND_MASK_VS, 4, tem,
					       splat_vector_p (op2), op1, op3);
	  else
	    return gimple_build_call_internal (IFN_VCOND_MASK_VS, 3, tem,
					       splat_vector_p (op2), op1);
	}
    }

  if (op3)
    return gimple_build_call_internal (IFN_LEN_VCOND_MASK, 4, op0, op1, op2,
				       op3);
  else
    return gimple_build_call_internal (IFN_VCOND_MASK, 3, op0, op1, op2);
}

/* Expand all VEC_COND_EXPR gimple assignments into calls to internal
   function based on type of selected expansion.  */

static gimple *
gimple_expand_vec_cond_expr (struct function *fun, gimple_stmt_iterator *gsi,
			     hash_map<tree, unsigned int> *vec_cond_ssa_name_uses)
{
  tree lhs, op0a = NULL_TREE, op0b = NULL_TREE;
  enum tree_code code;
  enum tree_code tcode;
  machine_mode cmp_op_mode;
  bool unsignedp;
  enum insn_code icode;
  imm_use_iterator imm_iter;

  /* Only consider code == GIMPLE_ASSIGN.  */
  gassign *stmt = dyn_cast<gassign *> (gsi_stmt (*gsi));
  if (!stmt)
    return NULL;

  code = gimple_assign_rhs_code (stmt);
  if (code != VEC_COND_EXPR)
    return NULL;

  tree op0 = gimple_assign_rhs1 (stmt);
  tree op1 = gimple_assign_rhs2 (stmt);
  tree op2 = gimple_assign_rhs3 (stmt);
  lhs = gimple_assign_lhs (stmt);
  machine_mode mode = TYPE_MODE (TREE_TYPE (lhs));

  /* Lower mask typed, non-vector mode VEC_COND_EXPRs to bitwise operations.
     Those can end up generated by folding and at least for integer mode masks
     we cannot expect vcond expanders to exist.  We lower a ? b : c
     to (b & a) | (c & ~a).  */
  if (VECTOR_BOOLEAN_TYPE_P (TREE_TYPE (lhs))
      && !VECTOR_MODE_P (mode))
    {
      gcc_assert (types_compatible_p (TREE_TYPE (op0), TREE_TYPE (op1)));
      gimple_seq stmts = NULL;
      tree type = TREE_TYPE (lhs);
      location_t loc = gimple_location (stmt);
      tree tem0 = gimple_build (&stmts, loc, BIT_AND_EXPR, type, op1, op0);
      tree tem1 = gimple_build (&stmts, loc, BIT_NOT_EXPR, type, op0);
      tree tem2 = gimple_build (&stmts, loc, BIT_AND_EXPR, type, op2, tem1);
      tree tem3 = gimple_build (&stmts, loc, BIT_IOR_EXPR, type, tem0, tem2);
      gsi_insert_seq_before (gsi, stmts, GSI_SAME_STMT);
      return gimple_build_assign (lhs, tem3);
    }

  bool can_compute_op0 = true;
  gcc_assert (!COMPARISON_CLASS_P (op0));
  if (TREE_CODE (op0) == SSA_NAME)
    {
      unsigned int used_vec_cond_exprs = 0;
      unsigned int *slot = vec_cond_ssa_name_uses->get (op0);
      if (slot)
	used_vec_cond_exprs = *slot;
      else
	{
	  gimple *use_stmt;
	  FOR_EACH_IMM_USE_STMT (use_stmt, imm_iter, op0)
	    {
	      gassign *assign = dyn_cast<gassign *> (use_stmt);
	      if (assign != NULL
		  && gimple_assign_rhs_code (assign) == VEC_COND_EXPR
		  && gimple_assign_rhs1 (assign) == op0)
		used_vec_cond_exprs++;
	    }
	  vec_cond_ssa_name_uses->put (op0, used_vec_cond_exprs);
	}

      gimple *def_stmt = SSA_NAME_DEF_STMT (op0);
      if (def_stmt)
	{
	  if (is_gimple_assign (def_stmt))
	    {
	      tcode = gimple_assign_rhs_code (def_stmt);
	      op0a = gimple_assign_rhs1 (def_stmt);
	      op0b = gimple_assign_rhs2 (def_stmt);
	    }

	  if (is_gimple_call (def_stmt) && gimple_call_internal_p (def_stmt)
	      && (gimple_call_internal_fn (def_stmt) == IFN_VEC_CMP_VS
		  || gimple_call_internal_fn (def_stmt) == IFN_VEC_CMPU_VS))
	    {
	      op0a = gimple_call_arg (def_stmt, 0);
	      op0b = gimple_call_arg (def_stmt, 1);
	      tcode
		= (enum tree_code) int_cst_value (gimple_call_arg (def_stmt,
								   2));
	    }

	  tree op0_type = TREE_TYPE (op0);
	  if (!op0a)
	    tcode = ERROR_MARK;

	  if (TREE_CODE_CLASS (tcode) == tcc_comparison)
	    can_compute_op0 = expand_vec_cmp_expr_p (TREE_TYPE (op0a),
						     op0_type, tcode);

	  /* Try to fold x CMP y ? -1 : 0 to x CMP y.  */
	  if (can_compute_op0
	      && integer_minus_onep (op1)
	      && integer_zerop (op2)
	      && TYPE_MODE (TREE_TYPE (lhs)) == TYPE_MODE (TREE_TYPE (op0)))
	    {
	      tree conv_op = build1 (VIEW_CONVERT_EXPR, TREE_TYPE (lhs), op0);
	      gassign *new_stmt = gimple_build_assign (lhs, conv_op);
	      gsi_replace (gsi, new_stmt, true);
	      return new_stmt;
	    }

	  /* When the compare has EH we do not want to forward it when
	     it has multiple uses and in general because of the complication
	     with EH redirection.  */
	  if (stmt_can_throw_internal (fun, def_stmt))
	    tcode = TREE_CODE (op0);

	  /* If we can compute op0 and have multiple uses, keep the SSA
	     name and use vcond_mask.  */
	  else if (can_compute_op0
		   && used_vec_cond_exprs >= 2
		   && (get_vcond_mask_icode (mode, TYPE_MODE (op0_type))
		       != CODE_FOR_nothing))
	    tcode = TREE_CODE (op0);
	}
      else
	tcode = TREE_CODE (op0);
    }
  else
    tcode = TREE_CODE (op0);

  if (TREE_CODE_CLASS (tcode) != tcc_comparison)
    {
      gcc_assert (VECTOR_BOOLEAN_TYPE_P (TREE_TYPE (op0)));
      if (get_vcond_mask_icode (mode, TYPE_MODE (TREE_TYPE (op0)))
	  != CODE_FOR_nothing)
	return gimple_gen_vcond_mask (gsi, gimple_location (stmt), op0, op1,
				      op2, NULL_TREE);
      /* Fake op0 < 0.  */
      else
	{
	  gcc_assert (GET_MODE_CLASS (TYPE_MODE (TREE_TYPE (op0)))
		      == MODE_VECTOR_INT);
	  op0a = op0;
	  op0b = build_zero_cst (TREE_TYPE (op0));
	  tcode = LT_EXPR;
	}
    }
  cmp_op_mode = TYPE_MODE (TREE_TYPE (op0a));
  unsignedp = TYPE_UNSIGNED (TREE_TYPE (op0a));

  gcc_assert (known_eq (GET_MODE_NUNITS (mode),
			GET_MODE_NUNITS (cmp_op_mode)));

  /* If the selector can use vcond_mask_vs, we prefer vcond_mask_vs
     instead of vcond.  */
  if (splat_vector_p (op1) || splat_vector_p (op2))
    {
      if (get_vcond_mask_vs_icode (mode, TYPE_MODE (TREE_TYPE (op0)))
	  != CODE_FOR_nothing)
	return gimple_gen_vcond_mask (gsi, gimple_location (stmt), op0, op1,
				      op2, NULL_TREE);
    }

  if (!VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (op0b))))
    icode = get_vcond_vs_icode (mode, cmp_op_mode, unsignedp);
  else
    icode = get_vcond_icode (mode, cmp_op_mode, unsignedp);
  /* Some targets do not have vcondeq and only vcond with NE/EQ
     but not vcondu, so make sure to also try vcond here as
     vcond_icode_p would canonicalize the optab query to.  */
  if (icode == CODE_FOR_nothing
      && (tcode == NE_EXPR || tcode == EQ_EXPR)
      && ((icode = get_vcond_icode (mode, cmp_op_mode, !unsignedp))
	  != CODE_FOR_nothing))
    unsignedp = !unsignedp;
  if (icode == CODE_FOR_nothing)
    {
      if (tcode == LT_EXPR
	  && op0a == op0
	  && !VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (op0b))))
	{
	  /* A VEC_COND_EXPR condition could be folded from EQ_EXPR/NE_EXPR
	     into a constant when only get_vcond_eq_icode is supported.
	     Try changing it to NE_EXPR.  */
	  tcode = NE_EXPR;
	}
      if ((tcode == EQ_EXPR || tcode == NE_EXPR)
	  && direct_internal_fn_supported_p (IFN_VCONDEQ, TREE_TYPE (lhs),
					     TREE_TYPE (op0a),
					     OPTIMIZE_FOR_BOTH)
	  && !VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (op0b))))
	{
	  tree tcode_tree = build_int_cst (integer_type_node, tcode);
	  return gimple_build_call_internal (IFN_VCONDEQ, 5, op0a, op0b, op1,
					     op2, tcode_tree);
	}

      gcc_assert (VECTOR_BOOLEAN_TYPE_P (TREE_TYPE (op0))
		  && can_compute_op0
		  && (get_vcond_mask_icode (mode, TYPE_MODE (TREE_TYPE (op0)))
		      != CODE_FOR_nothing));
      return gimple_gen_vcond_mask (gsi, gimple_location (stmt),
				    op0, op1, op2,
				    NULL_TREE);
    }

  tree tcode_tree = build_int_cst (integer_type_node, tcode);
  if (!VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (op0b))))
    return gimple_build_call_internal (unsignedp ? IFN_VCONDU_VS : IFN_VCOND_VS,
				       5, op0a, op0b, op1, op2, tcode_tree);
  else
    return gimple_build_call_internal (unsignedp ? IFN_VCONDU : IFN_VCOND,
				       5, op0a, op0b, op1, op2, tcode_tree);
}

/* Expand all LEN_VCOND/LEN_VCONDU gimple call into calls to internal
   function based on type of selected expansion.  */

static gimple *
gimple_expand_len_vcond_fn (
    struct function *fun, gimple_stmt_iterator *gsi,
    hash_map<tree, unsigned int> *vec_cond_ssa_name_uses)
{
  tree lhs, op0a = NULL_TREE, op0b = NULL_TREE;
  internal_fn fn;
  enum tree_code tcode;
  machine_mode cmp_op_mode;
  bool unsignedp;
  enum insn_code icode;
  imm_use_iterator imm_iter;

  /* Only consider code == GIMPLE_CALL.  */
  gcall *stmt = dyn_cast<gcall *> (gsi_stmt (*gsi));
  if (!stmt)
    return NULL;

  if (!gimple_call_internal_p (stmt))
    return NULL;

  fn = gimple_call_internal_fn (stmt);
  if (fn != IFN_LEN_VCOND)
    return NULL;

  tree op0 = gimple_call_arg (stmt, 0);
  tree op1 = gimple_call_arg (stmt, 1);
  tree op2 = gimple_call_arg (stmt, 2);
  tree op3 = gimple_call_arg (stmt, 3);
  lhs = gimple_call_lhs (stmt);
  machine_mode mode = TYPE_MODE (TREE_TYPE (lhs));

  /* Lower mask typed, non-vector mode VEC_COND_EXPRs to bitwise operations.
     Those can end up generated by folding and at least for integer mode masks
     we cannot expect vcond expanders to exist.  We lower a ? b : c
     to (b & a) | (c & ~a).  */
  if (VECTOR_BOOLEAN_TYPE_P (TREE_TYPE (lhs)) && !VECTOR_MODE_P (mode))
    {
      gcc_assert (types_compatible_p (TREE_TYPE (op0), TREE_TYPE (op1)));
      gimple_seq stmts = NULL;
      tree type = TREE_TYPE (lhs);
      location_t loc = gimple_location (stmt);
      tree tem0 = gimple_build (&stmts, loc, BIT_AND_EXPR, type, op1, op0);
      tree tem1 = gimple_build (&stmts, loc, BIT_NOT_EXPR, type, op0);
      tree tem2 = gimple_build (&stmts, loc, BIT_AND_EXPR, type, op2, tem1);
      tree tem3 = gimple_build (&stmts, loc, BIT_IOR_EXPR, type, tem0, tem2);
      gsi_insert_seq_before (gsi, stmts, GSI_SAME_STMT);
      return gimple_build_assign (lhs, tem3);
    }

  gcc_assert (!COMPARISON_CLASS_P (op0));
  if (TREE_CODE (op0) == SSA_NAME)
    {
      unsigned int used_vec_cond_exprs = 0;
      unsigned int *slot = vec_cond_ssa_name_uses->get (op0);
      if (slot)
	used_vec_cond_exprs = *slot;
      else
	{
	  gimple *use_stmt;
	  FOR_EACH_IMM_USE_STMT (use_stmt, imm_iter, op0)
	    {
	      gcall *call = dyn_cast<gcall *> (use_stmt);
	      if (call != NULL && gimple_call_internal_p (call)
		  && (fn == IFN_LEN_VCOND || fn == IFN_LEN_VCONDU)
		  && gimple_call_arg (call, 0) == op0)
		used_vec_cond_exprs++;
	    }
	  vec_cond_ssa_name_uses->put (op0, used_vec_cond_exprs);
	}

      gcall *def_stmt = dyn_cast<gcall *> (SSA_NAME_DEF_STMT (op0));
      internal_fn def_fn = (gimple_call_internal_p (def_stmt)
			    ? gimple_call_internal_fn (def_stmt)
			    : IFN_LAST);
      if (def_stmt && def_fn != IFN_LAST
	  && (def_fn == IFN_LEN_VEC_CMP_VS || def_fn == IFN_LEN_VEC_CMPU_VS
	      || def_fn == IFN_LEN_VEC_CMP || def_fn == IFN_LEN_VEC_CMPU))
	{
	  op0a = gimple_call_arg (def_stmt, 0);
	  op0b = gimple_call_arg (def_stmt, 1);
	  tcode
	    = (enum tree_code) int_cst_value (gimple_call_arg (def_stmt, 3));
	  gcc_assert (gimple_call_arg (def_stmt, 2) == op3);

	  tree op0_type = TREE_TYPE (op0);

	  /* Try to fold x CMP y ? -1 : 0 to x CMP y.  */

	  if (integer_minus_onep (op1) && integer_zerop (op2)
	      && TYPE_MODE (TREE_TYPE (lhs)) == TYPE_MODE (TREE_TYPE (op0)))
	    {
	      tree conv_op = build1 (VIEW_CONVERT_EXPR, TREE_TYPE (lhs), op0);
	      gassign *new_stmt = gimple_build_assign (lhs, conv_op);
	      gsi_replace (gsi, new_stmt, true);
	      return new_stmt;
	    }

	  /* When the compare has EH we do not want to forward it when
	     it has multiple uses and in general because of the complication
	     with EH redirection.  */
	  if (stmt_can_throw_internal (fun, def_stmt))
	    tcode = TREE_CODE (op0);

	  /* If we can compute op0 and have multiple uses, keep the SSA
	     name and use len_vcond_mask.  */
	  else if (used_vec_cond_exprs >= 2
		   && (get_len_vcond_mask_icode (mode, TYPE_MODE (op0_type))
		       != CODE_FOR_nothing))
	    tcode = TREE_CODE (op0);
	}
      else
	tcode = TREE_CODE (op0);
    }
  else
    tcode = TREE_CODE (op0);

  if (TREE_CODE_CLASS (tcode) != tcc_comparison)
    {
      gcc_assert (VECTOR_BOOLEAN_TYPE_P (TREE_TYPE (op0)));
      if (get_len_vcond_mask_icode (mode, TYPE_MODE (TREE_TYPE (op0)))
	  != CODE_FOR_nothing)
	return gimple_gen_vcond_mask (gsi, gimple_location (stmt), op0, op1,
				      op2, op3);
      /* Fake op0 < 0.  */
      else
	{
	  gcc_assert (GET_MODE_CLASS (TYPE_MODE (TREE_TYPE (op0)))
		      == MODE_VECTOR_INT);
	  op0a = op0;
	  op0b = build_zero_cst (TREE_TYPE (op0));
	  tcode = LT_EXPR;
	}
    }
  cmp_op_mode = TYPE_MODE (TREE_TYPE (op0a));
  unsignedp = TYPE_UNSIGNED (TREE_TYPE (op0a));

  gcc_assert (known_eq (GET_MODE_NUNITS (mode),
			GET_MODE_NUNITS (cmp_op_mode)));

  /* If the selector can use len_vcond_mask_vs, we prefer len_vcond_mask_vs
     instead of len_vcond.  */
  if (splat_vector_p (op1) || splat_vector_p (op2))
    {
      if (get_len_vcond_mask_vs_icode (mode, TYPE_MODE (TREE_TYPE (op0)))
	  != CODE_FOR_nothing)
	return gimple_gen_vcond_mask (gsi, gimple_location (stmt), op0, op1,
				      op2, op3);
    }

  if (!VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (op0b))))
    icode = get_len_vcond_vs_icode (mode, cmp_op_mode, unsignedp);
  else
    icode = get_len_vcond_icode (mode, cmp_op_mode, unsignedp);

  if (icode == CODE_FOR_nothing)
    {
      gcc_assert (VECTOR_BOOLEAN_TYPE_P (TREE_TYPE (op0))
		  && (get_len_vcond_mask_icode (mode,
						TYPE_MODE (TREE_TYPE (op0)))
		      != CODE_FOR_nothing));
      return gimple_gen_vcond_mask (gsi, gimple_location (stmt), op0, op1,
				    op2, op3);
    }

  tree tcode_tree = build_int_cst (integer_type_node, tcode);
  if (!VECTOR_MODE_P (TYPE_MODE (TREE_TYPE (op0b))))
    return gimple_build_call_internal ((unsignedp
					? IFN_LEN_VCONDU_VS
					: IFN_LEN_VCOND_VS),
				       6, op0a, op0b, op1, op2, op3,
				       tcode_tree);
  else
    return gimple_build_call_internal ((unsignedp
					? IFN_LEN_VCONDU
					: IFN_LEN_VCOND),
				       6, op0a, op0b, op1, op2, op3,
				       tcode_tree);
}

/* Expand all comparison gimple assignments into calls to internal
   function based on type of selected expansion.  */

static gimple *
gimple_expand_vec_cmp_expr (gimple_stmt_iterator *gsi)
{
  enum tree_code code;

  /* Only consider code == GIMPLE_ASSIGN.  */
  gassign *stmt = dyn_cast<gassign *> (gsi_stmt (*gsi));
  if (!stmt)
    return NULL;

  code = gimple_assign_rhs_code (stmt);
  if (TREE_CODE_CLASS (code) != tcc_comparison)
    return NULL;

  tree op0 = gimple_assign_rhs1 (stmt);
  tree op1 = gimple_assign_rhs2 (stmt);
  tree lhs = gimple_assign_lhs (stmt);
  machine_mode mode = TYPE_MODE (TREE_TYPE (lhs));
  machine_mode cmp_op_mode = TYPE_MODE (TREE_TYPE (op0));
  bool unsignedp = TYPE_UNSIGNED (TREE_TYPE (op0));

  if (!get_vec_cmp_vs_icode (cmp_op_mode, mode, unsignedp))
    return NULL;

  if (splat_vector_p (op1))
    return gimple_build_call_internal ((unsignedp
					? IFN_VEC_CMPU_VS
					: IFN_VEC_CMP_VS),
				       3, op0, splat_vector_p (op1),
				       build_int_cst (integer_type_node,
						      code));

  enum tree_code new_code = swap_tree_comparison (code);
  if (splat_vector_p (op0))
    return gimple_build_call_internal ((unsignedp
					? IFN_VEC_CMPU_VS
					: IFN_VEC_CMP_VS),
				       3, op1, splat_vector_p (op0),
				       build_int_cst (integer_type_node,
						      new_code));

  return NULL;
}

/* Expand all length comparison gimple call into calls to internal
   function based on type of selected expansion.  */

static gimple *
gimple_expand_len_vec_cmp_fn (gimple_stmt_iterator *gsi)
{
  /* Only consider code == GIMPLE_CALL.  */
  gcall *stmt = dyn_cast<gcall *> (gsi_stmt (*gsi));
  if (!stmt)
    return NULL;

  if (!gimple_call_internal_p (stmt))
    return NULL;

  if (gimple_call_internal_fn (stmt) != IFN_LEN_VEC_CMP
      && gimple_call_internal_fn (stmt) != IFN_LEN_VEC_CMPU)
    return NULL;

  tree op0 = gimple_call_arg (stmt, 0);
  tree op1 = gimple_call_arg (stmt, 1);
  tree op2 = gimple_call_arg (stmt, 2);
  enum tree_code code
    = (enum tree_code) int_cst_value (gimple_call_arg (stmt, 3));
  tree lhs = gimple_call_lhs (stmt);
  machine_mode mode = TYPE_MODE (TREE_TYPE (lhs));
  machine_mode cmp_op_mode = TYPE_MODE (TREE_TYPE (op0));
  bool unsignedp = TYPE_UNSIGNED (TREE_TYPE (op0));

  if (!get_len_vec_cmp_vs_icode (cmp_op_mode, mode, unsignedp))
    return NULL;

  if (splat_vector_p (op1))
    return gimple_build_call_internal ((unsignedp
					? IFN_LEN_VEC_CMPU_VS
					: IFN_LEN_VEC_CMP_VS),
				       4, op0, splat_vector_p (op1), op2,
				       build_int_cst (integer_type_node,
						      code));

  enum tree_code new_code = swap_tree_comparison (code);
  if (splat_vector_p (op0))
    return gimple_build_call_internal ((unsignedp
					? IFN_LEN_VEC_CMPU_VS
					: IFN_LEN_VEC_CMP_VS),
				       4, op1, splat_vector_p (op0), op2,
				       build_int_cst (integer_type_node,
						      new_code));

  return NULL;
}

/* Expand LEN_NOT gimple call into calls to internal
   function based on type of selected expansion.  */

static gimple *
gimple_expand_len_not_fn (gimple_stmt_iterator *gsi)
{
  /* Only consider code == GIMPLE_CALL.  */
  gcall *stmt = dyn_cast<gcall *> (gsi_stmt (*gsi));
  if (!stmt)
    return NULL;

  if (!gimple_call_internal_p (stmt))
    return NULL;

  if (gimple_call_internal_fn (stmt) != IFN_LEN_NOT)
    return NULL;

  tree op0 = gimple_call_arg (stmt, 0);
  tree op1 = gimple_call_arg (stmt, 1);

  gimple *def_stmt = SSA_NAME_DEF_STMT (op0);

  if (!def_stmt)
    return NULL;

  if (!is_gimple_call (def_stmt))
    return NULL;

  if (!gimple_call_internal_p (def_stmt))
    return NULL;

  if (gimple_call_internal_fn (def_stmt) != IFN_LEN_VEC_CMP
      && gimple_call_internal_fn (def_stmt) != IFN_LEN_VEC_CMPU
      && gimple_call_internal_fn (def_stmt) != IFN_LEN_VEC_CMP_VS
      && gimple_call_internal_fn (def_stmt) != IFN_LEN_VEC_CMPU_VS)
    return NULL;

  tree op0a = gimple_call_arg (def_stmt, 0);
  tree op0b = gimple_call_arg (def_stmt, 1);
  tree op2 = gimple_call_arg (def_stmt, 2);

  if (op2 != op1)
    return NULL;

  enum tree_code code
    = (enum tree_code) int_cst_value (gimple_call_arg (def_stmt, 3));
  enum tree_code reverse_code
    = invert_tree_comparison (code, HONOR_NANS (op0a));

  if (reverse_code == ERROR_MARK)
    return NULL;

  return gimple_build_call_internal (gimple_call_internal_fn (def_stmt), 4,
				     op0a, op0b, op2,
				     build_int_cst (integer_type_node,
						    reverse_code));
}

/* Iterate all gimple statements and try to expand
   VEC_COND_EXPR assignments.  */

static unsigned int
gimple_expand_vec_exprs (struct function *fun)
{
  gimple_stmt_iterator gsi;
  basic_block bb;
  hash_map<tree, unsigned int> vec_cond_ssa_name_uses;
  auto_bitmap dce_ssa_names;
  bool cfg_changed = false;

  FOR_EACH_BB_FN (bb, fun)
    {
      for (gsi = gsi_start_bb (bb); !gsi_end_p (gsi); gsi_next (&gsi))
	{
	  bool call_p = false;
	  gimple *g = gimple_expand_vec_cond_expr (fun, &gsi,
						   &vec_cond_ssa_name_uses);

	  if (g == NULL)
	    g = gimple_expand_vec_cmp_expr (&gsi);

	  if (g == NULL)
	    {
	      call_p = true;
	      g = gimple_expand_len_vcond_fn (fun, &gsi,
					      &vec_cond_ssa_name_uses);
	    }

	  if (g == NULL)
	    {
	      call_p = true;
	      g = gimple_expand_len_vec_cmp_fn (&gsi);
	    }

	  if (g == NULL)
	    {
	      call_p = true;
	      g = gimple_expand_len_not_fn (&gsi);
	    }

	  if (g != NULL)
	    {
	      tree lhs = (call_p
			  ? gimple_call_lhs (gsi_stmt (gsi))
			  : gimple_assign_lhs (gsi_stmt (gsi)));
	      gimple_set_lhs (g, lhs);
	      gsi_replace (&gsi, g, false);
	    }

	  cfg_changed |= gimple_expand_vec_set_expr (fun, &gsi);
	  if (gsi_end_p (gsi))
	    break;
	}
    }

  for (hash_map<tree, unsigned int>::iterator it = vec_cond_ssa_name_uses.begin ();
       it != vec_cond_ssa_name_uses.end (); ++it)
    bitmap_set_bit (dce_ssa_names, SSA_NAME_VERSION ((*it).first));

  simple_dce_from_worklist (dce_ssa_names);

  return cfg_changed ? TODO_cleanup_cfg : 0;
}

namespace {

const pass_data pass_data_gimple_isel =
{
  GIMPLE_PASS, /* type */
  "isel", /* name */
  OPTGROUP_VEC, /* optinfo_flags */
  TV_NONE, /* tv_id */
  PROP_cfg, /* properties_required */
  0, /* properties_provided */
  0, /* properties_destroyed */
  0, /* todo_flags_start */
  TODO_update_ssa, /* todo_flags_finish */
};

class pass_gimple_isel : public gimple_opt_pass
{
public:
  pass_gimple_isel (gcc::context *ctxt)
    : gimple_opt_pass (pass_data_gimple_isel, ctxt)
  {}

  /* opt_pass methods: */
  virtual bool gate (function *)
    {
      return true;
    }

  virtual unsigned int execute (function *fun)
    {
      return gimple_expand_vec_exprs (fun);
    }

}; // class pass_gimple_isel

} // anon namespace

gimple_opt_pass *
make_pass_gimple_isel (gcc::context *ctxt)
{
  return new pass_gimple_isel (ctxt);
}

