/* { dg-do run } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include "cond_asrd_1.c"

#define TEST_LOOP(TYPE1, TYPE2, N)				\
  {								\
    TYPE1 a[N];							\
    TYPE2 r[N], b[N];						\
    for (int i = 0; i < N; ++i)					\
      {								\
	a[i] = i % 3 < 2 ? 0 : i * 13;				\
	b[i] = (i & 1 ? i : -i) * 17;				\
	asm volatile ("" ::: "memory");				\
      }								\
    test_##TYPE1##_##TYPE2 (r, a, b);				\
    for (int i = 0; i < N; ++i)					\
      if (r[i] != (TYPE2) (a[i] == 0 ? b[i] / 16 : b[i]))	\
	__builtin_abort ();					\
  }

int main ()
{
  TEST_ALL (TEST_LOOP)
  return 0;
}
