/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math -fdump-tree-optimized" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

#define TEST_LOOP(NAME, OUTTYPE, INTYPE, MASKTYPE)		\
  void __attribute__ ((noinline, noclone))			\
  NAME##_5 (OUTTYPE *__restrict dest, INTYPE *__restrict src,	\
	    MASKTYPE *__restrict cond, INTYPE bias, intptr_t n)	\
  {								\
    for (intptr_t i = 0; i < n; ++i)				\
      {								\
	INTYPE value = src[i] + bias;				\
	if (cond[i])						\
	  {							\
	    dest[i * 5] = value;				\
	    dest[i * 5 + 1] = value;				\
	    dest[i * 5 + 2] = value;				\
	    dest[i * 5 + 3] = value;				\
      dest[i * 5 + 4] = value;				\
	  }							\
      }								\
  }

#define TEST2(NAME, OUTTYPE, INTYPE) \
  TEST_LOOP (NAME##_i8, OUTTYPE, INTYPE, int8_t) \
  TEST_LOOP (NAME##_i16, OUTTYPE, INTYPE, uint16_t) \
  TEST_LOOP (NAME##_f32, OUTTYPE, INTYPE, float) \
  TEST_LOOP (NAME##_f64, OUTTYPE, INTYPE, double)

#define TEST1(NAME, OUTTYPE) \
  TEST2 (NAME##_i8, OUTTYPE, int8_t) \
  TEST2 (NAME##_i16, OUTTYPE, uint16_t) \
  TEST2 (NAME##_i32, OUTTYPE, int32_t) \
  TEST2 (NAME##_i64, OUTTYPE, uint64_t)

#define TEST(NAME) \
  TEST1 (NAME##_i8, int8_t) \
  TEST1 (NAME##_i16, uint16_t) \
  TEST1 (NAME##_i32, int32_t) \
  TEST1 (NAME##_i64, uint64_t) \
  TEST2 (NAME##_f16_f16, _Float16, _Float16) \
  TEST2 (NAME##_f32_f32, float, float) \
  TEST2 (NAME##_f64_f64, double, double)

TEST (test)

/* { dg-final { scan-tree-dump-times "\.LEN_MASK_STORE_LANES" 76 "optimized" } } */
