/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

void __attribute__((noinline, noclone))
vadd (int *dst, int *op1, int *op2, int count)
{
  for (int i = 0; i < count; ++i)
    dst[i] = op1[i] + op2[i];
}

/* { dg-final { scan-assembler-times {\tvadd\.vv} 1 } } */
