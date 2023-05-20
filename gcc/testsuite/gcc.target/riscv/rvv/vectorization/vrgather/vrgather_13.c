/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=256 --save-temps" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */


typedef __UINT32_TYPE__ vnx4si __attribute__((vector_size (32)));
typedef float vnx4sf __attribute__((vector_size (32)));

#define MASK_2(X, Y) (X) ^ (Y), (X + 1) ^ (Y)
#define MASK_4(X, Y) MASK_2 (X, Y), MASK_2 (X + 2, Y)
#define MASK_8(X, Y) MASK_4 (X, Y), MASK_4 (X + 4, Y)

#define INDEX_8 vnx4si

#define PERMUTE(TYPE, NUNITS, REV_NUNITS)				\
  TYPE permute_##TYPE##_##REV_NUNITS (TYPE values1, TYPE values2)	\
  {									\
    return __builtin_shuffle						\
      (values1, values2,						\
       ((INDEX_##NUNITS) { MASK_##NUNITS (0, REV_NUNITS - 1) }));	\
  }

#define TEST_ALL(T)				\
  T (vnx4si, 8, 2)				\
  T (vnx4sf, 8, 2)

TEST_ALL (PERMUTE)

/* { dg-final { scan-assembler-times {\tvrgather.vv} 2 } } */
