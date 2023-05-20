/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define TEST_LOOP(DATA_TYPE, SCALE)			\
  void __attribute__ ((noinline, noclone))			\
  f_##DATA_TYPE##_##SCALE (DATA_TYPE *restrict dest1,		\
         DATA_TYPE *restrict dest2,		\
         DATA_TYPE *restrict dest3,		\
			   DATA_TYPE *restrict src1, DATA_TYPE src2, int n)	\
  {								\
    for (int i = 0; i < SCALE; ++i)					\
      { \
        dest1[i] += -(src1[i] * src2);				\
        dest2[i] += src1[i] * dest1[i];				\
        dest3[i] += src2 * dest2[i];				\
      } \
  }

#define TEST_TYPE(T, DATA_TYPE)			\
  T (DATA_TYPE, 2)				\
  T (DATA_TYPE, 4)				\
  T (DATA_TYPE, 8)				\
  T (DATA_TYPE, 16)				\
  T (DATA_TYPE, 17)				\
  T (DATA_TYPE, 31)				\
  T (DATA_TYPE, 32)			\
  T (DATA_TYPE, n)

#define TEST_ALL(T)				\
  TEST_TYPE (T, int8_t)			\
  TEST_TYPE (T, uint8_t)			\
  TEST_TYPE (T, int16_t)			\
  TEST_TYPE (T, uint16_t)			\
  TEST_TYPE (T, int32_t)			\
  TEST_TYPE (T, uint32_t)			\
  TEST_TYPE (T, int64_t)			\
  TEST_TYPE (T, uint64_t)     \
  TEST_TYPE (T, __fp16)      \
  TEST_TYPE (T, float)      \
  TEST_TYPE (T, double)      \

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-assembler-times "\tvnmsac\.vx" 64 {target { rv64 }} } } */
/* { dg-final { scan-assembler-not "\tvnmsac\.vv" {target { rv64 }} } } */
/* { dg-final { scan-assembler-times "\tvnmsac\.vx" 48 {target { rv32 }} } } */
/* { dg-final { scan-assembler-times "\tvfnmsac\.vf" 24 } } */
