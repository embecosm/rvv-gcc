/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#define INDEX32 uint32_t
#define INDEX64 uint64_t

#include "gather_load_1.c"

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 11 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 11 "optimized" } } */
