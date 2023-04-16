/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "gather_load_29.c"

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 45 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 45 "optimized" } } */
