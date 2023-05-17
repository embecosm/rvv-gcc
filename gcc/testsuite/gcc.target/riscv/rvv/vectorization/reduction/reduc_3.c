/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>

#define NUM_ELEMS(TYPE) (32 / sizeof (TYPE))

#define REDUC_PTR(DSTTYPE, SRCTYPE)				\
void reduc_ptr_##DSTTYPE##_##SRCTYPE (DSTTYPE *restrict sum,	\
				      SRCTYPE *restrict array,	\
				      int count)		\
{								\
  *sum = 0;							\
  for (int i = 0; i < count; ++i)				\
    *sum += array[i];						\
}

REDUC_PTR (int8_t, int8_t)
REDUC_PTR (int16_t, int16_t)
REDUC_PTR (int32_t, int32_t)
REDUC_PTR (int64_t, int64_t)

REDUC_PTR (_Float16, _Float16)
REDUC_PTR (float, float)
REDUC_PTR (double, double)

/* Float<>Int conversions */
REDUC_PTR (_Float16, int16_t)
REDUC_PTR (float, int32_t)
REDUC_PTR (double, int64_t)

REDUC_PTR (int16_t, _Float16)
REDUC_PTR (int32_t, float)
REDUC_PTR (int64_t, double)

/* { dg-final { scan-assembler-times {\tvredsum\.vs} 4 } } */
/* { dg-final { scan-assembler-times {\tvfredusum\.vs} 6 } } */
