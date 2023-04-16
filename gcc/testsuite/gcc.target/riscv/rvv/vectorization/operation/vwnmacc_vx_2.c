/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "vwnmacc_vx_1.c"

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 4 "optimized" } } */
/* { dg-final { scan-assembler-times {\tvfwnmacc\.vf} 4 } } */
