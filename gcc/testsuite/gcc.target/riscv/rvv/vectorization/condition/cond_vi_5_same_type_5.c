/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized -ffast-math" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */


#include <stdint.h>

#define TEST_LOOP(TYPE1, TYPE2)			                                \
  void __attribute__ ((noinline, noclone))			                                            \
  f_##TYPE1##_##TYPE2 (TYPE1  a,TYPE1 *restrict b,		\
    			   TYPE2 *restrict c, TYPE2 *restrict d, TYPE2 *restrict e,int n)	     \
  {								                                                                \
     for (int i = 0; i < 64; ++i)					                                \
              e[i] = 94 < b[i] ? c[i] : d[i];				                                            \
  }

#define TEST_TYPE_1(T, TYPE1)			        \
  T (TYPE1, int8_t)				\
  T (TYPE1, uint8_t)				\
  T (TYPE1, int16_t)				\
  T (TYPE1, uint16_t)				\
  T (TYPE1, int32_t)				\
  T (TYPE1, uint32_t)				\
  T (TYPE1, int64_t)			    \
  T (TYPE1, uint64_t)			    \
  T (TYPE1, __fp16)		        \
  T (TYPE1, float)			        \
  T (TYPE1, double)

#define TEST_ALL(T)				    \
  TEST_TYPE_1 (T, int8_t)				\
  TEST_TYPE_1 (T, uint8_t)				\
  TEST_TYPE_1 (T, int16_t)				\
  TEST_TYPE_1 (T, uint16_t)				\
  TEST_TYPE_1 (T, int32_t)				\
  TEST_TYPE_1 (T, uint32_t)				\
  TEST_TYPE_1 (T, int64_t)			    \
  TEST_TYPE_1 (T, uint64_t)			    \
  TEST_TYPE_1 (T, __fp16)		        \
  TEST_TYPE_1 (T, float)			        \
  TEST_TYPE_1 (T, double)

TEST_ALL (TEST_LOOP)

/* { dg-final { scan-assembler-times "\tvmsgt\.vx" 33 {target { rv32 }} } } */
/* { dg-final { scan-assembler-times "\tvmsle\.vx" 33 {target { rv32 }} } } */
/* { dg-final { scan-assembler-not "\tvmerge\.vvm" {target { rv32 }} } } */
/* { dg-final { scan-assembler-times {\tvle(?:8|16|32|64)\.v\s+v[0-9]*\,\([at][0-9]*\),\s*v0\.t} 242 {target { rv32 }} } } */
/* { dg-final { scan-assembler-times "\tvmsgtu\.vx" 33 {target { rv32 }} } } */
/* { dg-final { scan-assembler-times "\tvmsleu\.vx" 33 {target { rv32 }} } } */
/* { dg-final { scan-assembler-times "\tvmfgt\.vf" 33 {target { rv32 }} } } */
/* { dg-final { scan-assembler-times "\tvmfle\.vf" 33 {target { rv32 }} } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 121 "optimized" {target { rv32 }} } } */
/* { dg-final { scan-assembler-times "\tvmsgt\.vx" 44 {target { rv64 }} } } */
/* { dg-final { scan-assembler-times "\tvmsle\.vx" 44 {target { rv64 }} } } */
/* { dg-final { scan-assembler-not "\tvmerge\.vvm" {target { rv64 }} } } */
/* { dg-final { scan-assembler-times {\tvle(?:8|16|32|64)\.v\s+v[0-9]*\,\([at][0-9]*\),\s*v0\.t} 242 {target { rv64 }} } } */
/* { dg-final { scan-assembler-times "\tvmsgtu\.vx" 44 {target { rv64 }} } } */
/* { dg-final { scan-assembler-times "\tvmsleu\.vx" 44 {target { rv64 }} } } */
/* { dg-final { scan-assembler-times "\tvmfgt\.vf" 33 {target { rv64 }} } } */
/* { dg-final { scan-assembler-times "\tvmfle\.vf" 33 {target { rv64 }} } } */
/* { dg-final { scan-tree-dump-times "\.WHILE_LEN" 121 "optimized" {target { rv64 }} } } */
