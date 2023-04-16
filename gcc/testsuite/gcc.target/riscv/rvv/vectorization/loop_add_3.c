/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "loop_add_2.c"
