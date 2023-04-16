/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

int __attribute__((noipa))
add_loop (int *x, int n, int res)
{
  for (int i = 0; i < n; ++i)
    {
      res += x[i * 2];
      res += x[i * 2 + 1];
    }
  return res;
}

/* { dg-final { scan-assembler-times {\tvredsum\.vs} 1 } } */
