/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "reduc_strict_1.c"

#define TEST_REDUC_PLUS(TYPE)			\
  {						\
    TYPE a[NUM_ELEMS (TYPE)];			\
    TYPE b[NUM_ELEMS (TYPE)];			\
    TYPE r = 0, q = 3;				\
    for (int i = 0; i < NUM_ELEMS (TYPE); i++)	\
      {						\
	a[i] = (i * 0.1) * (i & 1 ? 1 : -1);	\
	b[i] = (i * 0.3) * (i & 1 ? 1 : -1);	\
	r += a[i];				\
	q -= b[i];				\
	asm volatile ("" ::: "memory");		\
      }						\
    TYPE res = reduc_plus_##TYPE (a, b);	\
    if (res != r * q)				\
      __builtin_abort ();			\
  }

int __attribute__ ((optimize (1)))
main ()
{
  TEST_ALL (TEST_REDUC_PLUS);
  return 0;
}
