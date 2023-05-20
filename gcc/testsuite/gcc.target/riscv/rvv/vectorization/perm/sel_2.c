/* { dg-do compile } */
/* { dg-additional-options "-O2 -mriscv-vector-bits=256  --save-temps" } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>
#include <riscv_vector.h>

typedef int8_t vnx16qi __attribute__((vector_size (32)));
typedef int16_t vnx8hi __attribute__((vector_size (32)));

typedef _Float16 vnx8hf __attribute__((vector_size (32)));

/* Predicate vector: 1 0 0 0 ... */

#define MASK_32		{ 0, 33, 34, 35, 4, 37, 38, 39, 8, 41, 42, 43, 12,		\
			  45, 46, 47, 16, 49, 50, 51, 20, 53, 54, 55, 24,		\
			  57, 58, 59, 28, 61, 62, 63 } 

/* Predicate vector: 1 0 1 0 ... */

#define MASK_16		{0, 17, 2, 19, 4, 21, 6, 23, 8, 25, 10, 27, 12, 29, 14, 31}

/*
** permute_vnx16qi:
*/
__rvv_int8m1_t
permute_vnx16qi (__rvv_int8m1_t x, __rvv_int8m1_t y)
{
  return __builtin_shuffle ((vnx16qi) x, (vnx16qi) y, (vnx16qi) MASK_32);
}

/*
** permute_vnx8hi:
*/
__rvv_int16m1_t
permute_vnx8hi (__rvv_int16m1_t x, __rvv_int16m1_t y)
{
  return __builtin_shuffle ((vnx8hi) x, (vnx8hi) y, (vnx8hi) MASK_16);
}

/*
** permute_vnx8hf:
*/
__rvv_float16m1_t
permute_vnx8hf (__rvv_float16m1_t x, __rvv_float16m1_t y)
{
  return (__rvv_float16m1_t) __builtin_shuffle ((vnx8hf) x, (vnx8hf) y,
					    (vnx8hi) MASK_16);
}

/* { dg-final { scan-assembler-times {\tvmerge.vvm} 3 } } */
