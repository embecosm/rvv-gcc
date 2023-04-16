/* { dg-do compile } */
/* { dg-additional-options "-O3 -fno-vect-cost-model -fdump-tree-optimized" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

void __attribute__ ((noinline, noclone))
f1 (int32_t *restrict y, int32_t *restrict x, int32_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = x[index[i * 2]] + 1;
      y[i * 2 + 1] = x[index[i * 2 + 1]] + 2;
    }
}

void __attribute__ ((noinline, noclone))
f2 (int32_t *restrict y, int32_t *restrict x, uint32_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = x[index[i * 2]] + 1;
      y[i * 2 + 1] = x[index[i * 2 + 1]] + 2;
    }
}

void __attribute__ ((noinline, noclone))
f3 (int32_t *restrict y, int32_t *restrict x, uint64_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = x[index[i * 2]] + 1;
      y[i * 2 + 1] = x[index[i * 2 + 1]] + 2;
    }
}

void __attribute__ ((noinline, noclone))
f4 (int64_t *restrict y, int64_t *restrict x, uint64_t *restrict index)
{
  for (int i = 0; i < 100; ++i)
    {
      y[i * 2] = x[index[i * 2]] + 1;
      y[i * 2 + 1] = x[index[i * 2 + 1]] + 2;
    }
}

void __attribute__ ((noinline, noclone))
f5 (int64_t *restrict y, int64_t *restrict x, uint64_t *restrict index)
{
  for (uint64_t i = 0; i < 100; ++i)
    {
      y[i * 2] = x[index[i * 2]] + 1;
      y[i * 2 + 1] = x[index[i * 2 + 1]] + 2;
    }
}
