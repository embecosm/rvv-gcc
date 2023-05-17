/* Builtins definitions for RISC-V 'V' Extension for GNU compiler.
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

#ifndef GCC_RISCV_VECTOR_BUILTINS_H
#define GCC_RISCV_VECTOR_BUILTINS_H

#include <vector>
#include "riscv-vector-builtins-functions.h"

namespace riscv_vector
{

/* global share variables */

static const unsigned int RISCV_TARGET_ANY = 0;
static const unsigned int RISCV_TARGET_VECTOR = 1;
static const unsigned int RISCV_TARGET_FP16 = 1 << 3;
static const unsigned int RISCV_TARGET_HARD_FLOAT = 1 << 4;
static const unsigned int RISCV_TARGET_DOUBLE_FLOAT = 1 << 5;

enum vector_arg_mode_category {
#define VVAR(NAME) vector_mode_attr_##NAME
#define DEF_RISCV_ARG_MODE_ATTR_VARIABLE(VARIABLE_NAME, ELEM_CNT) \
  VVAR(VARIABLE_NAME),
#include "riscv-vector-builtins-iterators.def"
#undef DEF_RISCV_ARG_MODE_ATTR_VARIABLE
#undef VVAR
  /* the number of arg mode category */
  vector_arg_mode_category_num
};

void init_builtins ();
void handle_pragma_vector ();
tree builtin_decl (unsigned, bool);
gimple *gimple_fold_builtin (unsigned int, gimple_stmt_iterator *, gcall *);
rtx expand_builtin (unsigned int, tree, rtx);
bool check_builtin_call (location_t, vec<location_t>, unsigned int,
			 tree, unsigned int, tree *);
bool builtin_type_p (const_tree);
const char * mangle_builtin_type (const_tree);
machine_mode vector_builtin_mode (scalar_mode, enum vlmul_field_enum);
bool verify_type_context (location_t, type_context_kind, const_tree, bool);

} // end namespace riscv_vector

#endif
