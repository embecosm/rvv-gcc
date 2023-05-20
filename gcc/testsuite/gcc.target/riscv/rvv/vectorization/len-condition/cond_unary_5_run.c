/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "cond_unary_5.c"

#define TEST_LOOP(TYPE1, TYPE2, N, OP)				\
  {								\
    TYPE1 pred[N];						\
    TYPE2 r[N], a[N];						\
    for (int i = 0; i < N; ++i)					\
      {								\
	a[i] = (i & 1 ? i : 3 * i) * (i % 3 == 0 ? 1 : -1);	\
	pred[i] = (i % 4 < 2);					\
	asm volatile ("" ::: "memory");				\
      }								\
    test_##TYPE1##_##TYPE2##_##OP (r, a, pred);			\
    for (int i = 0; i < N; ++i)					\
      if (r[i] != (pred[i] ? OP (a[i]) : a[i]))			\
	__builtin_abort ();					\
  }

int main ()
{
  TEST_ALL (TEST_LOOP)
  return 0;
}
