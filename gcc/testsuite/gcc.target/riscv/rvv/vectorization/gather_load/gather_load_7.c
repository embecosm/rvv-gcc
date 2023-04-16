/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#define INDEX16 uint16_t
#define INDEX32 uint32_t

#include "gather_load_6.c"

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 9 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 9 "optimized" } } */
