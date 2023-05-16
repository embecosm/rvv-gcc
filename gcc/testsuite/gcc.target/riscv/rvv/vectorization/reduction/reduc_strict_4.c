/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

double mat[100][8];

double
slp_reduc_plus (int n)
{
  double tmp = 0.0;
  for (int i = 0; i < n; i++)
    {
      tmp = tmp + mat[i][0];
      tmp = tmp + mat[i][1];
      tmp = tmp + mat[i][2];
      tmp = tmp + mat[i][3];
      tmp = tmp + mat[i][4];
      tmp = tmp + mat[i][5];
      tmp = tmp + mat[i][6];
      tmp = tmp + mat[i][7];
    }
  return tmp;
}

/* { dg-final { scan-assembler-times {\tvfredosum\.vs} 4 } } */
