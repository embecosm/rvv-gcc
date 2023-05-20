/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O3 -fno-trapping-math" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

#define N 80

#define DEF_LOOP(FLOAT_TYPE, INT_TYPE)				\
  void __attribute__ ((noipa))					\
  test_##FLOAT_TYPE##INT_TYPE (FLOAT_TYPE *__restrict r,			\
		   INT_TYPE *__restrict a,			\
		   FLOAT_TYPE *__restrict b,			\
		   INT_TYPE *__restrict pred, int n)		\
  {								\
    for (int i = 0; i < N; ++i)					\
      {								\
	r[i] = pred[i] ? r[i] : (FLOAT_TYPE) a[i];		\
      }								\
  }

#define TEST_ALL(T) \
  T (_Float16, int32_t) \
  T (_Float16, int64_t) \
  T (float, int64_t) \
  T (_Float16, uint32_t) \
  T (_Float16, uint64_t) \
  T (float, uint64_t)


TEST_ALL (DEF_LOOP)

/* { dg-final { scan-assembler-not {\tvmerge} } } */
/* { dg-final { scan-assembler-not {\tvfmerge} } } */
