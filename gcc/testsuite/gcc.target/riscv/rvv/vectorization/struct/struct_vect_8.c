/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#define TYPE uint16_t
#define ITYPE int16_t
#include "struct_vect_7.c"

/* { dg-final { scan-tree-dump-times "\.LEN_LOAD_LANES" 7 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.LEN_STORE_LANES" 7 "optimized" } } */
/* { dg-final { scan-assembler-not {\tvmv1r.v} } } */
/* { dg-final { scan-assembler-not {\tvmv2r.v} } } */
/* { dg-final { scan-assembler-not {\tvmv4r.v} } } */
