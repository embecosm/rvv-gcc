/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize --save-temps" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

void
f1 (uint32_t *dst, uint16_t *src1, uint8_t *src2)
{
  for (int i = 0; i < 7; ++i)
    dst[i] += (uint16_t) (src1[i] + src2[i]);
}
