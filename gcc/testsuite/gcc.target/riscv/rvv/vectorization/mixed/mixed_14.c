/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "mixed_13.c"

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 2 "optimized" } } */
/* { dg-final { scan-assembler-times {\tvwadd\.vx} 1 } } */
/* { dg-final { scan-assembler-times {\tvwmul\.vx} 1 } } */
