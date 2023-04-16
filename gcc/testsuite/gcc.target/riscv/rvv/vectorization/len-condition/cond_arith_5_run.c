/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "cond_arith_5.c"

#define N 80

#undef TEST
#define TEST(DATA_TYPE, OTHER_TYPE, NAME, OP)				\
  {									\
    DATA_TYPE x[N], y[N], pred[N], z[2] = { 5, 7 };			\
    OTHER_TYPE foo[N];							\
    for (int i = 0; i < N; ++i)						\
      {									\
	y[i] = i * i;							\
	pred[i] = i % 3;						\
	foo[i] = i * 5;							\
      }									\
    test_##DATA_TYPE##_##OTHER_TYPE##_##NAME (x, y, z[0], z[1],		\
					      pred, foo);		\
    for (int i = 0; i < N; ++i)						\
      {									\
	DATA_TYPE expected = i % 3 != 1 ? y[i] OP z[i & 1] : y[i];	\
	if (x[i] != expected)						\
	  __builtin_abort ();						\
	asm volatile ("" ::: "memory");					\
      }									\
  }

int
main (void)
{
  TEST_ALL
  return 0;
}
