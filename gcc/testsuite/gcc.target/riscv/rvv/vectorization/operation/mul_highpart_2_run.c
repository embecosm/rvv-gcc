/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "mul_highpart_2.c"

#define N 79

#define TEST_LOOP(TYPE)				\
  {						\
    TYPE dst[N], src[N];			\
    for (int i = 0; i < N; ++i)			\
      {						\
	src[i] = i * 7 + i % 3;			\
	if (i % 11 > 7)				\
	  src[i] = -src[i];			\
	asm volatile ("" ::: "memory");		\
      }						\
    mod_##TYPE (dst, src, N);			\
    for (int i = 0; i < N; ++i)			\
      if (dst[i] != src[i] / 17)		\
	__builtin_abort ();			\
  }

int
main (void)
{
  TEST_ALL (TEST_LOOP);
  return 0;
}
