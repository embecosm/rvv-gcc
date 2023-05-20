/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-vect-details --save-temps" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

#define TEST_LOOP(TYPE1, TYPE2)						\
  void __attribute__ ((noinline, noclone))									\
  f_##TYPE1##_##TYPE2 (TYPE1 *restrict dst, TYPE1 *restrict src1,	\
		       TYPE2 *restrict src2, int n)			\
  {									\
    for (int i = 0; i < n; ++i)						\
      dst[i] += src1[i] + src2[i];					\
  }

#define TEST_ALL(T) \
  T (uint16_t, uint8_t) \
  T (uint32_t, uint8_t) \
  T (uint64_t, uint8_t) \
  T (uint32_t, uint16_t) \
  T (uint64_t, uint16_t) \
  T (uint64_t, uint32_t) \
  T (_Float16, uint8_t) \
  T (float, uint8_t) \
  T (double, uint8_t) \
  T (float, uint16_t) \
  T (double, uint16_t) \
  T (double, uint32_t)

TEST_ALL (TEST_LOOP)
