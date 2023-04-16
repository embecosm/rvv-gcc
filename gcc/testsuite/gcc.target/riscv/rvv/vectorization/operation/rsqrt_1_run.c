/* { dg-do run } */
/* { dg-additional-options "-Ofast -ffast-math" } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "rsqrt_1.c"

#define N 77

#define TEST_LOOP(TYPE, FN)					\
  {								\
    TYPE a[N];							\
    for (int i = 0; i < N; ++i)					\
      a[i] = i + 1;						\
    test_##TYPE (a, N);						\
    for (int i = 0; i < N; ++i)					\
      {								\
	double diff = a[i] - 1.0 / __builtin_sqrt (i + 1);	\
	if (__builtin_fabs (diff) > 0x1.0p-8)			\
	  __builtin_abort ();					\
      }								\
  }

#pragma GCC push_options
#pragma GCC optimize ("O0")
int
main (void)
{
  TEST_ALL (TEST_LOOP);
  return 0;
}
#pragma GCC pop_options
