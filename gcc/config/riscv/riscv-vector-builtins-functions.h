/* Intrinsic definitions for RISC-V 'V' Extension for GNU compiler.
   Copyright (C) 2022-2022 Free Software Foundation, Inc.
   Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GCC is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#ifndef GCC_RISCV_VECTOR_BUILTINS_FUNCTIONS_H
#define GCC_RISCV_VECTOR_BUILTINS_FUNCTIONS_H

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "tree.h"
#include "rtl.h"
#include "tm_p.h"
#include "memmodel.h"
#include "insn-codes.h"
#include "optabs.h"
#include "recog.h"
#include "cgraph.h"
#include "diagnostic.h"
#include "expr.h"
#include "basic-block.h"
#include "function.h"
#include "fold-const.h"
#include "varasm.h"
#include "gimple.h"
#include "gimple-iterator.h"
#include "gimplify.h"
#include "explow.h"
#include "emit-rtl.h"
#include "tree-vector-builder.h"
#include "stor-layout.h"
#include "regs.h"
#include "alias.h"
#include "gimple-fold.h"
#include "langhooks.h"
#include "stringpool.h"
#include "attribs.h"
#include "tree-pass.h"
#include "tree-vrp.h"
#include "tree-ssanames.h"
#include "tree-ssa-operands.h"
#include "tree-phinodes.h"
#include "targhooks.h"
#include "langhooks-def.h"

namespace riscv_vector
{

enum data_type_index
{
  DT_signed,
  DT_unsigned,
  DT_ptr,
  DT_uptr,
  DT_c_ptr,
  DT_c_uptr,
};

enum intrinsic_type_index
{
  IT_none,
  IT_mask_tail,
  IT_tail_only,
  IT_tail_only_mask_first,
  IT_mask_only,
  IT_mask_only_no_vd,
  IT_mask_tail_vd,
  IT_segment,
};

/* Enumerates the VECTOR (data) vector types, together called
   "vector types" for brevity.  */
enum vector_type_index
{
#define DEF_RVV_TYPE(ELEM_TYPE, NODE) VECTOR_TYPE_##ELEM_TYPE,
#include "riscv-vector-builtins.def"
  NUM_VECTOR_TYPES
#undef DEF_RVV_TYPE
};

struct vector_vlmul_info
{
  enum vlmul_field_enum vlmul;
  const char *suffix;
  const char *boolnum;
};

struct vector_type_info
{
  vector_type_index type;
  const char *elem_name;
};

// for function arg mode infomation, include return type
struct vector_mode_attr
{
  machine_mode mode;
  machine_mode attr;
  // the extension like TARGET_VECTOR
  uint64_t extension;
};

// the total variable pack for function arg mode infomation, include return
// type
struct vector_mode_attr_list
{
  unsigned int attr_len;
  vector_mode_attr *attr_list;
};

// for VATTR(OP, MODE_ATTR)
struct vector_arg_attr_info
{
  int target_op;
  data_type_index dt;
  vector_mode_attr_list *mode_attr_list;
};

struct vector_arg_all_modes
{
  unsigned int arg_len;
  data_type_index *dt_list;
  int *target_op_list;
  // arg_list[0] is always return type
  vector_mode_attr_list **arg_list;
};

struct vector_arg_modes
{
  uint64_t arg_extensions;
  unsigned int arg_len;
  // arg_list[0] is always return type
  machine_mode *arg_list;
};

struct vector_intrinsic_info
{
  enum intrinsic_type_index intrinsic_type;
  int predicate;
};

/* Describes the various uses of a governing predicate.  */
enum predication_index
{
  /* No governing predicate is present.  */
  PRED_none = 1 << 0,
  /* tail agnostic, ignore mask policy */
  PRED_ta = 1 << 3,
  /* tail undisturbed, ignore mask policy */
  PRED_tu = 1 << 4,
  /* mask agnostic, ignore tail policy */
  PRED_ma = 1 << 5,
  /* mask undisturbed, ignore tail policy */
  PRED_mu = 1 << 6,
  /* mask and tail both agnostic */
  PRED_tama = 1 << 7,
  /* mask undisturbed and tail agnostic */
  PRED_tamu = 1 << 8,
  /* mask agnostic and tail undisturbed */
  PRED_tuma = 1 << 9,
  /* mask and tail both undisturbed */
  PRED_tumu = 1 << 10,

  PRED_void = 1 << 11,

  PRED_m = 1 << 12,

  PRED_m_ta = 1 << 13,
  PRED_m_tu = 1 << 14,

  NUM_PREDS
};

enum intrinsic_pattern
{
  /* other intrinsic */
  PAT_none = 1 << 0,
  PAT_mask = 1 << 1,
  PAT_tail = 1 << 2,
  PAT_dest = 1 << 3,
  PAT_void_dest = 1 << 4,
  PAT_ignore_mask_policy = 1 << 5,
  PAT_ignore_tail_policy = 1 << 6,
  PAT_ignore_policy = 1 << 7,
  PAT_merge = 1 << 8,
};

enum vector_policy {
  undisturbed = 0,
  agnostic = 1,
  any = 2,
};

constexpr unsigned int
get_vma_vta (vector_policy vma, vector_policy vta)
{
  return (vma << 2) | vta;
}

constexpr vector_policy
get_vma (unsigned int vma_vta)
{
  return (vector_policy)((vma_vta >> 2) & 0b11);
}

constexpr vector_policy
get_vta (unsigned int vma_vta)
{
  return (vector_policy)(vma_vta & 0b11);
}

const unsigned int tama_policy = get_vma_vta(vector_policy::agnostic, vector_policy::agnostic);
const unsigned int tamu_policy = get_vma_vta(vector_policy::undisturbed, vector_policy::agnostic);
const unsigned int tuma_policy = get_vma_vta(vector_policy::agnostic, vector_policy::undisturbed);
const unsigned int tumu_policy = get_vma_vta(vector_policy::undisturbed, vector_policy::undisturbed);
const unsigned int ta_policy = get_vma_vta(vector_policy::any, vector_policy::agnostic);
const unsigned int tu_policy = get_vma_vta(vector_policy::any, vector_policy::undisturbed);
const unsigned int ma_policy = get_vma_vta(vector_policy::agnostic, vector_policy::any);
const unsigned int mu_policy = get_vma_vta(vector_policy::undisturbed, vector_policy::any);
const unsigned int any_policy = get_vma_vta(vector_policy::any, vector_policy::any);

inline rtx
gen_tama_policy ()
{
  return gen_rtx_CONST_INT (Pmode, tama_policy);
}

inline rtx
gen_tamu_policy ()
{
  return gen_rtx_CONST_INT (Pmode, tamu_policy);
}

inline rtx
gen_tuma_policy ()
{
  return gen_rtx_CONST_INT (Pmode, tuma_policy);
}

inline rtx
gen_tumu_policy ()
{
  return gen_rtx_CONST_INT (Pmode, tumu_policy);
}

inline rtx
gen_ta_policy ()
{
  return gen_rtx_CONST_INT (Pmode, ta_policy);
}

inline rtx
gen_tu_policy ()
{
  return gen_rtx_CONST_INT (Pmode, tu_policy);
}

inline rtx
gen_ma_policy ()
{
  return gen_rtx_CONST_INT (Pmode, ma_policy);
}

inline rtx
gen_mu_policy ()
{
  return gen_rtx_CONST_INT (Pmode, mu_policy);
}

inline rtx
gen_any_policy ()
{
  return gen_rtx_CONST_INT (Pmode, any_policy);
}

enum operation_index
{
  OP_none = 1 << 0,
  OP_vv = 1 << 1,
  OP_vx = 1 << 2,
  OP_v = 1 << 3,
  OP_wv = 1 << 4,
  OP_wx = 1 << 5,
  OP_x_x_v = 1 << 6,
  OP_vf2 = 1 << 7,
  OP_vf4 = 1 << 8,
  OP_vf8 = 1 << 9,
  OP_vvm = 1 << 10,
  OP_vxm = 1 << 11,
  OP_x_x_w = 1 << 12,
  OP_v_v = 1 << 13,
  OP_v_x = 1 << 14,
  OP_vs = 1 << 15,
  OP_mm = 1 << 16,
  OP_m = 1 << 17,
  OP_vf = 1 << 18,
  OP_vm = 1 << 19,
  OP_wf = 1 << 20,
  OP_vfm = 1 << 21,
  OP_v_f = 1 << 22,
  NUM_OP
};

class function_builder;

class GTY ((user)) function_instance
{
public:
  function_instance (function_builder *, const char *, vector_arg_modes &,
		     predication_index, operation_index);

  function_instance ();

  ~function_instance ();

  bool
  operator== (const function_instance &) const;
  bool
  operator!= (const function_instance &) const;

  hashval_t
  hash () const;
  bool
  check (location_t, tree, tree, unsigned int, tree *) const;
  unsigned int
  call_properties () const;
  bool
  reads_global_state_p () const;
  bool
  modifies_global_state_p () const;
  bool
  could_trap_p () const;

  const char *
  get_base_name () const;
  vector_arg_modes
  get_arg_pattern () const;
  predication_index
  get_pred () const;
  unsigned int
  get_vma_vta () const;
  operation_index
  get_operation () const;
  data_type_index *
  get_data_type_list () const;
  function_builder *
  builder () const;
  char *
  get_func_name () const;
  void
  clear_func_name () const;

private:
  function_builder *m_builder;
  const char *m_base_name;
  vector_arg_modes m_target_arg_pattern;
  predication_index m_target_pred;
  operation_index m_target_operation;
  char *m_function_name;
  hashval_t *m_hashval;
  bool m_need_free = false;
};

/* Describes a function decl.  */
class GTY (()) registered_function
{
public:
  function_instance GTY ((skip)) instance;

  /* The decl itself.  */
  tree GTY ((skip)) decl;

  /* The architecture extensions that the function requires, as a set of
     RVV_FL_* flags.  */
  uint64_t required_extensions;
};

/* A class for building and registering function decls.  */
class function_builder
{
public:
  function_builder (const char *, vector_arg_all_modes &, uint64_t, uint64_t,
		    uint64_t, const unsigned int);

  ~function_builder ();

  void
  register_function ();

  /* Try to fold the given gimple call.  Return the new gimple statement
     on success, otherwise return null.  */
  virtual gimple *
  fold (const function_instance &, gimple_stmt_iterator *, gcall *) const;

  /* Expand the given call into rtl.  Return the result of the function,
     or an arbitrary value if the function doesn't return a result.  */
  virtual rtx
  expand (const function_instance &, tree, rtx) const = 0;

  rtx
  expand_builtin_insn (enum insn_code, tree, rtx,
		       const function_instance &) const;

  virtual tree
  get_return_type (const function_instance &) const;

  virtual tree
  get_dest_type (const tree &, const vec<tree> &, unsigned int) const;

  virtual tree
  get_mask_type (const tree &, const tree &, const vec<tree> &,
		 unsigned int) const;

  virtual void
  get_argument_types (const function_instance &, vec<tree> &) const;

  virtual size_t
  get_dest_arguments_length () const;

  virtual void
  get_name (char *, const function_instance &) const;

  uint64_t
  get_pattern () const;
  /* check if need add mask operand for corresponding rtl */
  bool
  need_mask_operand_p () const;
  /* check if need add dest operand for corresponding rtl */
  bool
  need_dest_operand_p () const;
  /* check if has mask arg for corresponding function decl */
  bool has_mask_arg_p (predication_index) const;
  /* check if has dest arg for corresponding function decl */
  virtual bool has_dest_arg_p (predication_index) const;
  unsigned int get_policy (predication_index) const;
  /* get parameter position of mask arg */
  virtual size_t get_position_of_mask_arg (predication_index) const;
  /* get parameter position of dest arg */
  virtual size_t get_position_of_dest_arg (predication_index) const;

  void
  apply_predication (tree &, tree &, vec<tree> &, unsigned int,
		     predication_index) const;

  virtual unsigned int
  call_properties (const function_instance &) const;

  vector_arg_modes &
  get_arg_modes_by_iter_idx (unsigned int) const;

  data_type_index *
  get_data_type_list () const;

  bool check_required_extensions (location_t, tree, uint64_t);
  void
  append_name (const char *);
  char *
  finish_name ();

private:
  void
  add_unique_function (const function_instance &, tree, vec<tree> &);
  void
  build_one (const function_instance &);
  tree
  get_attributes (const function_instance &);

  registered_function &
  add_function (const function_instance &, const char *, tree, tree, bool);

  /* The base name, as a string.  */
  const char *m_base_name;
  vector_arg_all_modes m_target_arg_patterns;
  uint64_t m_target_pattern;
  uint64_t m_target_preds;
  uint64_t m_target_op_types;
  uint64_t m_required_extensions;

  unsigned int m_iter_idx_cnt;
  unsigned int m_iter_arg_cnt;
  unsigned int *m_iter_arg_idx_list;

  /* True if we should create a separate decl for each instance of an
     overloaded function, instead of using function_builder.  */
  bool m_direct_overloads;

  /* Used for building up function names.  */
  obstack m_string_obstack;
};

/* Hash traits for registered_function.  */
struct registered_function_hasher : nofree_ptr_hash<registered_function>
{
  typedef function_instance compare_type;

  static hashval_t hash (value_type);
  static bool
  equal (value_type, const compare_type &);
};

enum indexed_mode
{
  INDEXED_u,
  INDEXED_o,
};

/* A function_base for config functions.  */
class config : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  // use the same construction function as the function_builder
  unsigned int
  call_properties (const function_instance &) const OVERRIDE;
  void
  get_name (char *, const function_instance &) const OVERRIDE;
  tree
  get_return_type (const function_instance &) const OVERRIDE;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for readvl functions.  */
class readvl : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_name (char *, const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for Miscellaneous functions.  */
class misc : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  void
  get_name (char *, const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for loadstore functions.  */
class loadstore : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *, const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;
};

/* A function_base for indexed loadstore functions.  */
class indexedloadstore : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *name, const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;
};

/* A function_base for segment functions.  */
class segment : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *, const function_instance &) const OVERRIDE;
};

/* A function_base for single-width unary functions.  */
class unop : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *, const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;
};

/* A function_base for single-width binary functions.  */
class binop : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  void
  get_name (char *, const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;
};

/* A function_base for single-width ternary functions.  */
class ternop : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *, const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;
};

/* A function_base for single-width binary functions.  */
class reduceop : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *, const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  tree
  get_mask_type (const tree &, const tree &, const vec<tree> &,
		 unsigned int) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;
};

/* A function_base for vle functions.  */
class vle : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vse functions.  */
class vse : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlse functions.  */
class vlse : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsse functions.  */
class vsse : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlm functions.  */
class vlm : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsm functions.  */
class vsm : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlxei functions.  */
class vlxei : public indexedloadstore
{
public:
  // use the same construction function as the indexedloadstore
  using indexedloadstore::indexedloadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsxei functions.  */
class vsxei : public indexedloadstore
{
public:
  // use the same construction function as the indexedloadstore
  using indexedloadstore::indexedloadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vleff functions.  */
class vleff : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_name (char *, const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  gimple *
  fold (const function_instance &, gimple_stmt_iterator *,
	gcall *) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlseg functions.  */
class vlseg : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlsegff functions.  */
class vlsegff : public vlseg
{
public:
  // use the same construction function as the function_builder
  using vlseg::vlseg;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  gimple *
  fold (const function_instance &, gimple_stmt_iterator *,
	gcall *) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsseg functions.  */
class vsseg : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlsseg functions.  */
class vlsseg : public vlseg
{
public:
  // use the same construction function as the vlseg
  using vlseg::vlseg;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vssseg functions.  */
class vssseg : public vsseg
{
public:
  // use the same construction function as the vlseg
  using vsseg::vsseg;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlxseg functions.  */
class vlxseg : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsxseg functions.  */
class vsxseg : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vadd functions.  */
class vadd : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsub functions.  */
class vsub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vrsub functions.  */
class vrsub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vneg functions.  */
class vneg : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwadd and vwsub functions.  */
class vwadd_vwsub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwcvt functions.  */
class vwcvt : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsext/vzext functions.  */
class vext : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vadc functions.  */
class vadc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsbc functions.  */
class vsbc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmadc functions.  */
class vmadc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_name (char *, const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsbc functions.  */
class vmsbc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_name (char *, const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlogic functions.  */
class vlogic : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnot functions.  */
class vnot : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vshift functions.  */
class vshift : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnshift functions.  */
class vnshift : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vncvt functions.  */
class vncvt : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vcmp functions.  */
class vcmp : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_name (char *, const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmin/vmax functions.  */
class vmin_vmax : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmul functions.  */
class vmul : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmulh functions.  */
class vmulh : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmulhsu functions.  */
class vmulhsu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vdiv functions.  */
class vdiv : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmul functions.  */
class vwmul : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmulsusu functions.  */
class vwmulsu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vimac functions.  */
class vimac : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmacc functions.  */
class vwmacc : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmaccsu functions.  */
class vwmaccsu : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmaccus functions.  */
class vwmaccus : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmerge functions.  */
class vmerge : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  size_t get_position_of_dest_arg (predication_index) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmv functions.  */
class vmv : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vred functions.  */
class vred : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwredsum functions.  */
class vwredsum : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfred functions.  */
class vfred : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwredosum functions.  */
class vfwredosum : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwredusum functions.  */
class vfwredusum : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmlogic functions.  */
class vmlogic : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmnlogic functions.  */
class vmnlogic : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmlogicn functions.  */
class vmlogicn : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmmv functions.  */
class vmmv : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmnot functions.  */
class vmnot : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmclr functions.  */
class vmclr : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmset functions.  */
class vmset : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vcpop functions.  */
class vcpop : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  tree
  get_return_type (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfirst functions.  */
class vfirst : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  tree
  get_return_type (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsetbit functions.  */
class vmsetbit : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for viota functions.  */
class viota : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vid functions.  */
class vid : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmv_x_s functions.  */
class vmv_x_s : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  void
  get_name (char *, const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmv_s_x functions.  */
class vmv_s_x : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmv_f_s functions.  */
class vfmv_f_s : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  void
  get_name (char *, const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmv_s_f functions.  */
class vfmv_s_f : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vslide functions.  */
class vslide : public binop
{
public:
  // use the same construction function as the ternop
  using binop::binop;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vslide1 functions.  */
class vslide1 : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vslide1 functions.  */
class vfslide1 : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vrgather functions.  */
class vrgather : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vrgather functions.  */
class vrgatherei16 : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

class vcompress : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  size_t get_position_of_dest_arg (predication_index) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsadd functions.  */
class vsadd : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsaddu functions.  */
class vsaddu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vaadd functions.  */
class vaadd : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vaaddu functions.  */
class vaaddu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vssub functions.  */
class vssub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vssubu functions.  */
class vssubu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vasub functions.  */
class vasub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vasubu functions.  */
class vasubu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsshift functions.  */
class vsshift : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsmul functions.  */
class vsmul : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnclip functions.  */
class vnclip : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnclipu functions.  */
class vnclipu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfadd,vfsub,vfmul,vfdiv... functions.  */
class vfoptab : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfrsub and vfrdiv functions.  */
class vfrsub_div : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfneg functions.  */
class vfneg : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwadd and vfwsub functions.  */
class vfwadd_vwsub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwmul functions.  */
class vfwmul : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmac functions.  */
class vfmac : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwmacc functions.  */
class vfwmacc : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwnmacc functions.  */
class vfwnmacc : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwmsac functions.  */
class vfwmsac : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwnmsac functions.  */
class vfwnmsac : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfsqrt functions.  */
class vfsqrt : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfsqrt7 and vfrec7 functions.  */
class vfsqrt7_rec7 : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfsgnj, vfsgnjn and vfsgnjx functions.  */
class vfsgnj_all : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfabs functions.  */
class vfabs : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcmp functions.  */
class vfcmp : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_name (char *, const function_instance &) const OVERRIDE;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfclass functions.  */
class vfclass : public unop
{
public:
  // use the same construction function as the binop
  using unop::unop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmerge functions.  */
class vfmerge : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  size_t get_position_of_dest_arg (predication_index) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmv functions.  */
class vfmv : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_x_f_v functions.  */
class vfcvt_f2i : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_xu_f_v functions.  */
class vfcvt_f2u : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_rtz_x_f_v functions.  */
class vfcvt_rtz_f2i : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_rtz_xu_f_v functions.  */
class vfcvt_rtz_f2u : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_f_x_v functions.  */
class vfcvt_i2f : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_f_xu_v functions.  */
class vfcvt_u2f : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_x_f_v functions.  */
class vfwcvt_f2i : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_xu_f_v functions.  */
class vfwcvt_f2u : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_rtz_x_f_v functions.  */
class vfwcvt_rtz_f2i : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_rtz_xu_f_v functions.  */
class vfwcvt_rtz_f2u : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_f_x_v functions.  */
class vfwcvt_i2f : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_f_xu_v functions.  */
class vfwcvt_u2f : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_f_f_v functions.  */
class vfwcvt_f2f : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_x_f_w functions.  */
class vfncvt_f2i : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_xu_f_w functions.  */
class vfncvt_f2u : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_rtz_x_f_w functions.  */
class vfncvt_rtz_f2i : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_rtz_xu_f_w functions.  */
class vfncvt_rtz_f2u : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_f_x_w functions.  */
class vfncvt_i2f : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_f_xu_w functions.  */
class vfncvt_u2f : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_f_f_w functions.  */
class vfncvt_f2f : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_rod_f_f_w functions.  */
class vfncvt_f2rodf : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* Non-tuple type segement load/store */

/* A function_base for vlseg_template functions.  */
template <unsigned int NF> class vlseg_template : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  bool has_dest_arg_p (predication_index) const OVERRIDE;

  size_t get_position_of_mask_arg (predication_index) const OVERRIDE;

  gimple *
  fold (const function_instance &, gimple_stmt_iterator *,
	gcall *) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vlseg2 = vlseg_template<2>;
using vlseg3 = vlseg_template<3>;
using vlseg4 = vlseg_template<4>;
using vlseg5 = vlseg_template<5>;
using vlseg6 = vlseg_template<6>;
using vlseg7 = vlseg_template<7>;
using vlseg8 = vlseg_template<8>;

/* A function_base for vlsegff_template functions.  */
template <unsigned int NF> class vlsegff_template : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  bool has_dest_arg_p (predication_index) const OVERRIDE;

  size_t get_position_of_mask_arg (predication_index) const OVERRIDE;

  gimple *
  fold (const function_instance &, gimple_stmt_iterator *,
	gcall *) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vlseg2ff = vlsegff_template<2>;
using vlseg3ff = vlsegff_template<3>;
using vlseg4ff = vlsegff_template<4>;
using vlseg5ff = vlsegff_template<5>;
using vlseg6ff = vlsegff_template<6>;
using vlseg7ff = vlsegff_template<7>;
using vlseg8ff = vlsegff_template<8>;

/* A function_base for vsseg_template functions.  */
template <unsigned int NF> class vsseg_template : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  gimple *
  fold (const function_instance &, gimple_stmt_iterator *,
	gcall *) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vsseg2 = vsseg_template<2>;
using vsseg3 = vsseg_template<3>;
using vsseg4 = vsseg_template<4>;
using vsseg5 = vsseg_template<5>;
using vsseg6 = vsseg_template<6>;
using vsseg7 = vsseg_template<7>;
using vsseg8 = vsseg_template<8>;

/* A function_base for vlsseg_template functions.  */
template <unsigned int NF> class vlsseg_template : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;
  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  bool has_dest_arg_p (predication_index) const OVERRIDE;

  size_t get_position_of_mask_arg (predication_index) const OVERRIDE;

  gimple *
  fold (const function_instance &, gimple_stmt_iterator *,
	gcall *) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vlsseg2 = vlsseg_template<2>;
using vlsseg3 = vlsseg_template<3>;
using vlsseg4 = vlsseg_template<4>;
using vlsseg5 = vlsseg_template<5>;
using vlsseg6 = vlsseg_template<6>;
using vlsseg7 = vlsseg_template<7>;
using vlsseg8 = vlsseg_template<8>;

/* A function_base for vssseg_template functions.  */
template <unsigned int NF> class vssseg_template : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  gimple *
  fold (const function_instance &, gimple_stmt_iterator *,
	gcall *) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vssseg2 = vssseg_template<2>;
using vssseg3 = vssseg_template<3>;
using vssseg4 = vssseg_template<4>;
using vssseg5 = vssseg_template<5>;
using vssseg6 = vssseg_template<6>;
using vssseg7 = vssseg_template<7>;
using vssseg8 = vssseg_template<8>;

/* A function_base for vlxseg_template functions.  */
template <unsigned int NF, indexed_mode uo>
class vlxseg_template : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  bool has_dest_arg_p (predication_index) const OVERRIDE;

  size_t get_position_of_mask_arg (predication_index) const OVERRIDE;

  gimple *
  fold (const function_instance &, gimple_stmt_iterator *,
	gcall *) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vluxseg2 = vlxseg_template<2, INDEXED_u>;
using vluxseg3 = vlxseg_template<3, INDEXED_u>;
using vluxseg4 = vlxseg_template<4, INDEXED_u>;
using vluxseg5 = vlxseg_template<5, INDEXED_u>;
using vluxseg6 = vlxseg_template<6, INDEXED_u>;
using vluxseg7 = vlxseg_template<7, INDEXED_u>;
using vluxseg8 = vlxseg_template<8, INDEXED_u>;
using vloxseg2 = vlxseg_template<2, INDEXED_o>;
using vloxseg3 = vlxseg_template<3, INDEXED_o>;
using vloxseg4 = vlxseg_template<4, INDEXED_o>;
using vloxseg5 = vlxseg_template<5, INDEXED_o>;
using vloxseg6 = vlxseg_template<6, INDEXED_o>;
using vloxseg7 = vlxseg_template<7, INDEXED_o>;
using vloxseg8 = vlxseg_template<8, INDEXED_o>;

/* A function_base for vsxseg_template functions.  */
template <unsigned int NF, indexed_mode uo>
class vsxseg_template : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &, vec<tree> &) const OVERRIDE;

  gimple *
  fold (const function_instance &, gimple_stmt_iterator *,
	gcall *) const OVERRIDE;

  rtx
  expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vsuxseg2 = vsxseg_template<2, INDEXED_u>;
using vsuxseg3 = vsxseg_template<3, INDEXED_u>;
using vsuxseg4 = vsxseg_template<4, INDEXED_u>;
using vsuxseg5 = vsxseg_template<5, INDEXED_u>;
using vsuxseg6 = vsxseg_template<6, INDEXED_u>;
using vsuxseg7 = vsxseg_template<7, INDEXED_u>;
using vsuxseg8 = vsxseg_template<8, INDEXED_u>;
using vsoxseg2 = vsxseg_template<2, INDEXED_o>;
using vsoxseg3 = vsxseg_template<3, INDEXED_o>;
using vsoxseg4 = vsxseg_template<4, INDEXED_o>;
using vsoxseg5 = vsxseg_template<5, INDEXED_o>;
using vsoxseg6 = vsxseg_template<6, INDEXED_o>;
using vsoxseg7 = vsxseg_template<7, INDEXED_o>;
using vsoxseg8 = vsxseg_template<8, INDEXED_o>;

} // namespace riscv_vector

#endif // end GCC_RISCV_VECTOR_BUILTINS_FUNCTIONS_H
