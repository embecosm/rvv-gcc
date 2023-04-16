/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

double
f (double *restrict a, double *restrict b, int *lookup)
{
  double res = 0.0;
  for (int i = 0; i < 512; ++i)
    res += a[lookup[i]] * b[i];
  return res;
}

/* { dg-final { scan-assembler-times {\tvfredusum\.vs} 1 } } */
