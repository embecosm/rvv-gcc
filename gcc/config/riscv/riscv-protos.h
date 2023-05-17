/* Definition of RISC-V target for GNU compiler.
   Copyright (C) 2011-2022 Free Software Foundation, Inc.
   Contributed by Andrew Waterman (andrew@sifive.com).
   Based on MIPS target for GNU compiler.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#ifndef GCC_RISCV_PROTOS_H
#define GCC_RISCV_PROTOS_H

/* Symbol types we understand.  The order of this list must match that of
   the unspec enum in riscv.md, subsequent to UNSPEC_ADDRESS_FIRST.  */
enum riscv_symbol_type {
  SYMBOL_ABSOLUTE,
  SYMBOL_PCREL,
  SYMBOL_GOT_DISP,
  SYMBOL_TLS,
  SYMBOL_TLS_LE,
  SYMBOL_TLS_IE,
  SYMBOL_TLS_GD
};
#define NUM_SYMBOL_TYPES (SYMBOL_TLS_GD + 1)

/* Routines implemented in riscv.cc.  */
extern enum riscv_symbol_type riscv_classify_symbolic_expression (rtx);
extern bool riscv_symbolic_constant_p (rtx, enum riscv_symbol_type *);
extern int riscv_regno_mode_ok_for_base_p (int, machine_mode, bool);
extern int riscv_address_insns (rtx, machine_mode, bool);
extern int riscv_const_insns (rtx);
extern int riscv_split_const_insns (rtx);
extern int riscv_load_store_insns (rtx, rtx_insn *);
extern rtx riscv_emit_move (rtx, rtx);
extern bool riscv_split_symbol (rtx, rtx, machine_mode, rtx *, bool);
extern bool riscv_split_symbol_type (enum riscv_symbol_type);
extern rtx riscv_unspec_address (rtx, enum riscv_symbol_type);
extern void riscv_move_integer (rtx, rtx, HOST_WIDE_INT, machine_mode, bool);
extern bool riscv_legitimize_move (machine_mode, rtx, rtx);
extern rtx riscv_subword (rtx, bool);
extern bool riscv_split_64bit_move_p (rtx, rtx);
extern void riscv_split_doubleword_move (rtx, rtx);
extern const char *riscv_output_move (rtx, rtx);
extern const char *riscv_output_return ();
#ifdef RTX_CODE
extern void riscv_expand_int_scc (rtx, enum rtx_code, rtx, rtx);
extern void riscv_expand_float_scc (rtx, enum rtx_code, rtx, rtx);
extern void riscv_expand_conditional_branch (rtx, enum rtx_code, rtx, rtx);
extern void riscv_expand_conditional_move (rtx, rtx, rtx, rtx_code, rtx, rtx);
#endif
extern rtx riscv_legitimize_call_address (rtx);
extern void riscv_set_return_address (rtx, rtx);
extern bool riscv_expand_block_move (rtx, rtx, rtx);
extern rtx riscv_return_addr (int, rtx);
extern poly_int64 riscv_initial_elimination_offset (int, int);
extern void riscv_expand_prologue (void);
extern void riscv_expand_epilogue (int);
extern bool riscv_epilogue_uses (unsigned int);
extern bool riscv_can_use_return_insn (void);
extern rtx riscv_function_value (const_tree, const_tree, enum machine_mode);
extern bool riscv_expand_block_move (rtx, rtx, rtx);
extern bool riscv_store_data_bypass_p (rtx_insn *, rtx_insn *);
extern rtx riscv_gen_gpr_save_insn (struct riscv_frame_info *);
extern bool riscv_gpr_save_operation_p (rtx);
extern rtx riscv_add_offset (rtx, rtx, HOST_WIDE_INT);

/* Routines implemented for RVV support */
extern poly_uint64 riscv_regmode_natural_size (machine_mode);
extern bool riscv_vector_mask_mode_p (machine_mode);
extern bool riscv_vector_data_mode_p (machine_mode);
extern bool riscv_vector_mode_p (machine_mode);
extern opt_machine_mode riscv_vector_data_mode (scalar_mode, poly_uint64);
extern bool riscv_tuple_mode_p (machine_mode);
extern unsigned int riscv_parse_vlmul_field (unsigned int);
extern unsigned int riscv_parse_vsew_field (unsigned int);
extern bool riscv_parse_vta_field (unsigned int);
extern bool riscv_parse_vma_field (unsigned int);
extern unsigned int riscv_classify_vlmul_field (machine_mode);
extern unsigned int riscv_classify_vsew_field (machine_mode);
extern machine_mode riscv_translate_attr_mode (rtx_insn *);
extern int riscv_classify_nf (machine_mode);
extern int riscv_vlmul_regsize(machine_mode);
extern opt_machine_mode riscv_vector_tuple_mode (machine_mode,
						 unsigned HOST_WIDE_INT);
extern bool riscv_const_vec_all_same_in_range_p (rtx, HOST_WIDE_INT,
						 HOST_WIDE_INT);
extern unsigned riscv_dbx_register_number (unsigned);
extern bool riscv_const_poly_int_p (rtx);
extern bool imm32_p (rtx);
extern rtx riscv_vector_gen_policy (unsigned int rvv_policy = 0);
extern unsigned int get_vtype_for_mode (machine_mode);
extern void emit_op5 (unsigned int unspec, machine_mode Vmode,
		      machine_mode VSImode, machine_mode VMSImode,
		      machine_mode VSUBmode, rtx *operands,
		      rtx (*gen_vx) (rtx, rtx, rtx, rtx, rtx, rtx),
		      rtx (*gen_vx_32bit) (rtx, rtx, rtx, rtx, rtx, rtx),
		      rtx (*gen_vv) (rtx, rtx, rtx, rtx, rtx, rtx),
		      bool (*imm_p) (rtx), int i, bool reverse);
extern void emit_op6 (unsigned int unspec, machine_mode Vmode,
		      machine_mode VSImode, machine_mode VMSImode,
		      machine_mode VSUBmode, rtx *operands,
		      rtx (*gen_vx) (rtx, rtx, rtx, rtx, rtx, rtx, rtx),
		      rtx (*gen_vx_32bit) (rtx, rtx, rtx, rtx, rtx, rtx, rtx),
		      rtx (*gen_vv) (rtx, rtx, rtx, rtx, rtx, rtx, rtx),
		      bool (*imm_p) (rtx), int i, bool reverse);
extern void emit_op7 (unsigned int unspec, machine_mode Vmode,
		      machine_mode VSImode, machine_mode VMSImode,
		      machine_mode VSUBmode, rtx *operands,
		      rtx (*gen_vx) (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx),
		      rtx (*gen_vx_32bit) (rtx, rtx, rtx, rtx, rtx, rtx, rtx,
					   rtx),
		      rtx (*gen_vv) (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx),
		      bool (*imm_p) (rtx), int i, bool reverse);
extern void riscv_vector_expand_vector_init (rtx, rtx);
extern bool riscv_vector_strided_const_vector_p (rtx);
extern void riscv_vector_expand_vec_perm (rtx, rtx, rtx, rtx);
extern void riscv_init_expanders (void);
extern void riscv_vector_expand_gather_scatter (rtx *, unsigned int);
extern bool riscv_vector_expand_block_move (rtx *);
extern bool riscv_vector_expand_strlen (rtx *);
extern bool riscv_vector_expand_strcpy (rtx *);
extern bool riscv_vector_expand_strcmp (rtx *);
extern void riscv_vector_expand_while_len (rtx *);
extern void riscv_expand_vcond (machine_mode, machine_mode, machine_mode,
				rtx *, bool);
#ifdef RTX_CODE
extern void riscv_expand_vec_cmp_int (rtx, enum rtx_code, rtx, rtx, rtx);
extern void riscv_expand_vec_cmp_float (rtx, enum rtx_code, rtx, rtx, rtx);
#endif
extern bool riscv_vector_check_supported_mode_p (machine_mode);
extern bool riscv_vector_expand_const_vector (rtx, rtx);
extern bool riscv_vector_expand_const_mask (rtx, rtx);
extern void riscv_vector_expand_tuple (machine_mode, rtx *);
extern void riscv_vector_expand_splat_vector (rtx *);
extern rtx riscv_vector_gen_clobber_vl (rtx);

/* Routines implemented in riscv-c.cc.  */
void riscv_cpu_cpp_builtins (cpp_reader *);

/* Routines implemented in riscv-builtins.cc.  */
extern void riscv_atomic_assign_expand_fenv (tree *, tree *, tree *);
extern rtx riscv_expand_builtin (tree, rtx, rtx, machine_mode, int);
extern tree riscv_builtin_decl (unsigned int, bool);
extern void riscv_init_builtins (void);
extern bool riscv_gimple_fold_builtin (gimple_stmt_iterator *);

/* Routines implemented in riscv-common.cc.  */
extern std::string riscv_arch_str (bool version_p = true);

extern bool riscv_hard_regno_rename_ok (unsigned, unsigned);

rtl_opt_pass * make_pass_shorten_memrefs (gcc::context *ctxt);
rtl_opt_pass * make_pass_insert_vsetvli (gcc::context *ctxt);
rtl_opt_pass * make_pass_insert_vsetvli2 (gcc::context *ctxt);

/* Information about one CPU we know about.  */
struct riscv_cpu_info {
  /* This CPU's canonical name.  */
  const char *name;

  /* Default arch for this CPU, could be NULL if no default arch.  */
  const char *arch;

  /* Which automaton to use for tuning.  */
  const char *tune;
};

extern const riscv_cpu_info *riscv_find_cpu (const char *);

#ifndef IN_LIBGCC2
class gimple_opt_pass;
extern gimple_opt_pass *make_pass_crc (gcc::context *ctxt);
#endif

extern tree riscv_builtin_crc_fn (int, unsigned HOST_WIDE_INT, bool);
extern void expand_crc_lookup (rtx *operands, machine_mode);
extern rtx print_crc_table (int, int, unsigned HOST_WIDE_INT);

void riscv_register_pragmas (void);

/* We classify builtin types into two classes:
   1. General builtin class which is using the
      original builtin architecture built in
      RISCV.
   2. Vector builtin class which is a special
      builtin architecture that implement
      intrinsic short into "pragam".  */
enum riscv_builtin_class
{
  RISCV_BUILTIN_GENERAL,
  RISCV_BUILTIN_VECTOR
};

const unsigned int RISCV_BUILTIN_SHIFT = 1;

/* Mask that selects the vector_builtin_class part of a function code.  */
const unsigned int RISCV_BUILTIN_CLASS = (1 << RISCV_BUILTIN_SHIFT) - 1;

#endif /* ! GCC_RISCV_PROTOS_H */
