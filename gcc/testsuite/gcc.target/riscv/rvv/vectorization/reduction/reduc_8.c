/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

int
reduc (int *restrict a, int *restrict b, int *restrict c)
{
  for (int i = 0; i < 100; ++i)
    {
      int res = 0;
      for (int j = 0; j < 100; ++j)
	if (b[i + j] != 0)
	  res = c[i + j];
      a[i] = res;
    }
}

/* { dg-final { scan-assembler-times {vmsne.vi} 1 } } */
/* { dg-final { scan-assembler-not {vmseq.vi} } } */
