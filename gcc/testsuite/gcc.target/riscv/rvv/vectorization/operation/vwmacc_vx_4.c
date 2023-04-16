/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "vwmacc_vx_3.c"

/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 3 "optimized" } } */
/* { dg-final { scan-assembler-times {\tvwmaccus\.vx} 3 } } */
