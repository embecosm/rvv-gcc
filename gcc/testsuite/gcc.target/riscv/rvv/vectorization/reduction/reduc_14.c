/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

void __attribute__((noipa))
add_loop (unsigned int *x, int n, unsigned int *res)
{
  unsigned int res0 = res[0];
  unsigned int res1 = res[1];
  for (int i = 0; i < n; ++i)
    {
      res0 += x[i * 2];
      res1 += x[i * 2 + 1];
    }
  res[0] = res0;
  res[1] = res1;
}

void __attribute__((noipa))
min_loop (unsigned int *x, int n, unsigned int *res)
{
  unsigned int res0 = res[0];
  unsigned int res1 = res[1];
  for (int i = 0; i < n; ++i)
    {
      res0 = res0 < x[i * 2] ? res0 : x[i * 2];
      res1 = res1 < x[i * 2 + 1] ? res1 : x[i * 2 + 1];
    }
  res[0] = res0;
  res[1] = res1;
}

void __attribute__((noipa))
max_loop (unsigned int *x, int n, unsigned int *res)
{
  unsigned int res0 = res[0];
  unsigned int res1 = res[1];
  for (int i = 0; i < n; ++i)
    {
      res0 = res0 > x[i * 2] ? res0 : x[i * 2];
      res1 = res1 > x[i * 2 + 1] ? res1 : x[i * 2 + 1];
    }
  res[0] = res0;
  res[1] = res1;
}

void __attribute__((noipa))
and_loop (unsigned int *x, int n, unsigned int *res)
{
  unsigned int res0 = res[0];
  unsigned int res1 = res[1];
  for (int i = 0; i < n; ++i)
    {
      res0 &= x[i * 2];
      res1 &= x[i * 2 + 1];
    }
  res[0] = res0;
  res[1] = res1;
}

void __attribute__((noipa))
or_loop (unsigned int *x, int n, unsigned int *res)
{
  unsigned int res0 = res[0];
  unsigned int res1 = res[1];
  for (int i = 0; i < n; ++i)
    {
      res0 |= x[i * 2];
      res1 |= x[i * 2 + 1];
    }
  res[0] = res0;
  res[1] = res1;
}

void __attribute__((noipa))
eor_loop (unsigned int *x, int n, unsigned int *res)
{
  unsigned int res0 = res[0];
  unsigned int res1 = res[1];
  for (int i = 0; i < n; ++i)
    {
      res0 ^= x[i * 2];
      res1 ^= x[i * 2 + 1];
    }
  res[0] = res0;
  res[1] = res1;
}

/* { dg-final { scan-assembler-times {\tvredsum\.vs} 2 } } */
/* { dg-final { scan-assembler-times {\tvredmaxu\.vs} 2 } } */
/* { dg-final { scan-assembler-times {\tvredminu\.vs} 2 } } */
/* { dg-final { scan-assembler-times {\tvredand\.vs} 2 } } */
/* { dg-final { scan-assembler-times {\tvredor\.vs} 2 } } */
/* { dg-final { scan-assembler-times {\tvredxor\.vs} 2 } } */
