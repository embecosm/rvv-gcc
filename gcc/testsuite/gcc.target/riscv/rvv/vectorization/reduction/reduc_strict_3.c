/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

double mat[100][2];

double
slp_reduc_plus (int n)
{
  double tmp = 0.0;
  for (int i = 0; i < n; i++)
    {
      tmp = tmp + mat[i][0];
      tmp = tmp + mat[i][1];
    }
  return tmp;
}

/* { dg-final { scan-assembler-times {\tvfredosum\.vs} 1 } } */
