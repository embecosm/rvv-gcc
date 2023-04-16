/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize --save-temps" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

void
f1 (uint64_t *dst, uint32_t *src1, int16_t *src2)
{
  for (int i = 0; i < 7; ++i)
    dst[i] += (int32_t) (src1[i] + src2[i]);
}
