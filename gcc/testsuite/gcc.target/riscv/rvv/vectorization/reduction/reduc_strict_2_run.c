/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "reduc_strict_2.c"

#define NROWS 5

#define TEST_REDUC_PLUS(TYPE)					\
  {								\
    TYPE a[NROWS][NUM_ELEMS (TYPE)];				\
    TYPE r[NROWS];						\
    TYPE expected[NROWS] = {};					\
    for (int i = 0; i < NROWS; ++i)				\
      for (int j = 0; j < NUM_ELEMS (TYPE); ++j)		\
	{							\
	  a[i][j] = (i * 0.1 + j * 0.6) * (j & 1 ? 1 : -1);	\
	  expected[i] += a[i][j];				\
	  asm volatile ("" ::: "memory");			\
	}							\
    reduc_plus_##TYPE (a, r, NROWS);				\
    for (int i = 0; i < NROWS; ++i)				\
      if (r[i] != expected[i])					\
	__builtin_abort ();					\
  }

int __attribute__ ((optimize (1)))
main ()
{
  TEST_ALL (TEST_REDUC_PLUS);
  return 0;
}
