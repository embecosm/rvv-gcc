/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "slp_6.c"

#define N (77 * 3)

#define HARNESS(TYPE)					\
  {							\
    TYPE a[N], b[3] = { 40, 22, 75 };			\
    for (unsigned int i = 0; i < N; ++i)		\
      {							\
	a[i] = i * 2 + i % 5;				\
	asm volatile ("" ::: "memory");			\
      }							\
    vec_slp_##TYPE (a, b, N / 3);			\
    TYPE x0 = 40;					\
    TYPE x1 = 22;					\
    TYPE x2 = 75;					\
    for (unsigned int i = 0; i < N; i += 3)		\
      {							\
	x0 += a[i];					\
	x1 += a[i + 1];					\
	x2 += a[i + 2];					\
	asm volatile ("" ::: "memory");			\
      }							\
    /* _Float16 isn't precise enough for this.  */	\
    if ((TYPE) 0x1000 + 1 != (TYPE) 0x1000		\
	&& (x0 != b[0] || x1 != b[1] || x2 != b[2]))	\
      __builtin_abort ();				\
  }

int __attribute__ ((optimize (1)))
main (void)
{
  TEST_ALL (HARNESS)
}
