/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

void __attribute__ ((noinline, noclone))
foo (double *x, int m)
{
  for (int i = 0; i < 256; ++i)
    x[i * m] += x[i * m];
}

/* { dg-final { scan-tree-dump-times "\.LEN_GATHER_LOAD" 1 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.LEN_SCATTER_STORE" 1 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 1 "optimized" } } */
