/* { dg-do compile } */
/* { dg-additional-options "-O2 -mriscv-vector-bits=128 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

#define TEST_LOOP(DATA_TYPE, SCALE)			\
  void __attribute__ ((noinline, noclone))			\
  f_##DATA_TYPE##_##SCALE (DATA_TYPE *restrict dest,		\
			   DATA_TYPE *src, int n)	\
  {								\
    for (int i = 0; i < SCALE; ++i)					\
      dest[i] = dest[i] >> src[i];				\
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
  TEST_TYPE (T, uint64_t)			

TEST_ALL (TEST_LOOP)

