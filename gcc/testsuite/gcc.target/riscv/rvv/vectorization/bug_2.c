/* { dg-do compile } */
/* { dg-additional-options "-O2 -fno-trapping-math -ftree-vectorize -fdump-tree-optimized " } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

void __attribute__ ((noinline, noclone))
foo (__fp16 *restrict a, __fp16 *restrict b, int16_t *restrict c, int16_t *restrict d, int16_t *restrict e, int n)
{
  for (int i = 0; i < n; ++i)
    e[i] = a[i] >= b[i] ? c[i] : d[i];
}
