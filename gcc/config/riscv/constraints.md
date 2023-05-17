;; Constraint definitions for RISC-V target.
;; Copyright (C) 2011-2022 Free Software Foundation, Inc.
;; Contributed by Andrew Waterman (andrew@sifive.com).
;; Based on MIPS target for GNU compiler.
;;
;; This file is part of GCC.
;;
;; GCC is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 3, or (at your option)
;; any later version.
;;
;; GCC is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.
;;
;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;; <http://www.gnu.org/licenses/>.

;; Register constraints

(define_register_constraint "f" "TARGET_HARD_FLOAT ? FP_REGS : NO_REGS"
  "A floating-point register (if available).")

(define_register_constraint "j" "SIBCALL_REGS"
  "@internal")

;; Avoid using register t0 for JALR's argument, because for some
;; microarchitectures that is a return-address stack hint.
(define_register_constraint "l" "JALR_REGS"
  "@internal")

;; General constraints

(define_constraint "I"
  "An I-type 12-bit signed immediate."
  (and (match_code "const_int")
       (match_test "SMALL_OPERAND (ival)")))

(define_constraint "J"
  "Integer zero."
  (and (match_code "const_int")
       (match_test "ival == 0")))

(define_constraint "K"
  "A 5-bit unsigned immediate for CSR access instructions."
  (and (match_code "const_int")
       (match_test "IN_RANGE (ival, 0, 31)")))

(define_constraint "L"
  "A U-type 20-bit signed immediate."
  (and (match_code "const_int")
       (match_test "LUI_OPERAND (ival)")))

;; Floating-point constant +0.0, used for FCVT-based moves when FMV is
;; not available in RV32.
(define_constraint "G"
  "@internal"
  (and (match_code "const_double")
       (match_test "op == CONST0_RTX (mode)")))

(define_memory_constraint "A"
  "An address that is held in a general-purpose register."
  (and (match_code "mem")
       (match_test "GET_CODE(XEXP(op,0)) == REG")))

(define_constraint "S"
  "A constraint that matches an absolute symbolic address."
  (match_operand 0 "absolute_symbolic_operand"))

(define_constraint "U"
  "@internal
   A PLT-indirect call address."
  (match_operand 0 "plt_symbolic_operand"))

(define_constraint "T"
  "@internal
   A constant @code{move_operand}."
  (and (match_operand 0 "move_operand")
       (match_test "CONSTANT_P (op)")))

;; Vector constraints.

(define_register_constraint "vr" "TARGET_VECTOR ? V_REGS : NO_REGS"
  "A vector register (if available).")

(define_register_constraint "vd" "TARGET_VECTOR ? VNoV0_REGS : NO_REGS"
  "A vector register except mask register (if available).")

(define_register_constraint "vm" "TARGET_VECTOR ? V0_REGS : NO_REGS"
  "A vector mask register (if available).")

(define_constraint "vi"
  "A vector 5-bit signed immediate."
  (and (match_code "const_vector")
       (match_test "riscv_const_vec_all_same_in_range_p (op, -16, 15)")))

(define_constraint "vj"
  "A vector negated 5-bit signed immediate."
  (and (match_code "const_vector")
       (match_test "riscv_const_vec_all_same_in_range_p (op, -15, 16)")))

(define_constraint "vk"
  "A vector 5-bit unsigned immediate."
  (and (match_code "const_vector")
       (match_test "riscv_const_vec_all_same_in_range_p (op, 0, 31)")))

(define_constraint "vc"
  "Any vector duplicate constant."
  (and (match_code "const_vector")
       (match_test "rtx_equal_p (op, CONST0_RTX (GET_MODE (op)))")))

(define_constraint "vp"
  "POLY_INT"
  (and (match_code "const_poly_int")
       (match_test "CONST_POLY_INT_COEFFS (op)[0] == UNITS_PER_V_REG.coeffs[0]
	&& CONST_POLY_INT_COEFFS (op)[1] == UNITS_PER_V_REG.coeffs[1]")))

(define_constraint "Ws5"
  "Signed immediate 5-bit value"
  (and (match_code "const_int")
       (match_test "IN_RANGE (INTVAL (op), -16, 15)")))

(define_constraint "Wn5"
  "Signed immediate 5-bit value"
  (and (match_code "const_int")
       (match_test "IN_RANGE (INTVAL (op), -15, 16)")))
