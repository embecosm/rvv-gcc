/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O3 -fno-trapping-math" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

#define N 80

#define DEF_LOOP(INT_TYPE, FLOAT_TYPE)				\
  void __attribute__ ((noipa))					\
  test_##INT_TYPE##FLOAT_TYPE (INT_TYPE *__restrict r,			\
		   FLOAT_TYPE *__restrict a,			\
		   INT_TYPE *__restrict b,			\
		   FLOAT_TYPE *__restrict pred, int n)		\
  {								\
    for (int i = 0; i < N; ++i)					\
      {								\
	r[i] = pred[i] ? r[i] : (INT_TYPE) a[i];		\
      }								\
  }

#define TEST_ALL(T) \
  T (int8_t, _Float16) \
  T (int8_t, float) \
  T (int8_t, double) \
  T (int16_t, float) \
  T (int16_t, double) \
  T (int32_t, double) \
  T (uint8_t, _Float16) \
  T (uint8_t, float) \
  T (uint8_t, double) \
  T (uint16_t, float) \
  T (uint16_t, double) \
  T (uint32_t, double)


TEST_ALL (DEF_LOOP)

/* { dg-final { scan-assembler-not {\tvmerge} } } */
/* { dg-final { scan-assembler-not {\tvfmerge} } } */
