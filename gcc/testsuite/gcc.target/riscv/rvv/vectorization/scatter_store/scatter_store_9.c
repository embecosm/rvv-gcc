/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#define INDEX16 uint16_t
#define INDEX32 uint32_t

#include "scatter_store_8.c"

/* { dg-final { scan-tree-dump-times "\.LEN_SCATTER_STORE" 11 "optimized" } } */
