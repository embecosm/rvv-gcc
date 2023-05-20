/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

#ifndef INDEX32
#define INDEX32 int32_t
#define INDEX64 int64_t
#endif

#define TEST_LOOP(DATA_TYPE, BITS)					\
  void __attribute__ ((noinline, noclone))				\
  f_##DATA_TYPE (DATA_TYPE *restrict dest, DATA_TYPE *restrict src,	\
		 INDEX##BITS *indices, int n)				\
  {									\
    for (int i = 0; i < n; ++i)						\
      *(DATA_TYPE *) ((char *) (dest + indices[i])) = src[i] + 1;		\
  }

#define TEST_ALL(T)				\
  T (int8_t, 32)				\
  T (uint8_t, 32)				\
  T (int16_t, 32)				\
  T (uint16_t, 32)				\
  T (_Float16, 32)					\
  T (int32_t, 32)				\
  T (uint32_t, 32)				\
  T (float, 32)					\
  T (int64_t, 64)				\
  T (uint64_t, 64)				\
  T (double, 64)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-tree-dump-times "\.LEN_SCATTER_STORE" 11 "optimized" } } */
