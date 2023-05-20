/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

#define abd(A, B) (((A) < (B) ? (B) : (A)) - ((A) < (B) ? (A) : (B)))

#define DEF_LOOP(TYPE)					\
  void __attribute__ ((noinline, noclone))		\
  test_##TYPE (TYPE *__restrict r, TYPE *__restrict a,	\
	       TYPE *__restrict b, TYPE *__restrict c,	\
	       int n)					\
  {							\
    for (int i = 0; i < 80; ++i)				\
      r[i] = a[i] < 20 ? abd (b[i], c[i]) : 79;		\
  }

#define TEST_ALL(T) \
  T (int8_t) \
  T (uint8_t) \
  T (int16_t) \
  T (uint16_t) \
  T (int32_t) \
  T (uint32_t) \
  T (int64_t) \
  T (uint64_t)

TEST_ALL (DEF_LOOP)

/* { dg-final { scan-assembler-times {vsub\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t} 8 } } */
