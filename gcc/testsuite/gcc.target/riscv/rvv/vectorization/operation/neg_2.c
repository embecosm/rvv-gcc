/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fdump-tree-optimized-details --save-temps" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

#define DO_OPS(TYPE)					\
void vneg_##TYPE (TYPE *dst, TYPE *src)	\
{							\
  for (int i = 0; i < 32; ++i)			\
    dst[i] = -src[i];					\
}

DO_OPS (int8_t)
DO_OPS (int16_t)
DO_OPS (int32_t)
DO_OPS (int64_t)

/* { dg-final { scan-tree-dump-not "\.WHILE_LEN" "optimized" } } */
/* { dg-final { scan-assembler-times "\tvneg\.v" 5 } } */
