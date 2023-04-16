/* { dg-do run } */
/* { dg-additional-options "-O3 -fno-tree-loop-distribute-patterns" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "vec_duplicate_imm_1.c"

#define TEST_SET_IMM(TYPE, IMM, SUFFIX)		\
  {						\
    TYPE v[NUM_ELEMS (TYPE)];			\
    set_##TYPE##_##SUFFIX (v);			\
    for (int i = 0; i < NUM_ELEMS (TYPE); i++)	\
      if (v[i] != (TYPE) IMM)			\
        __builtin_abort ();			\
  }

int __attribute__ ((optimize (1)))
main (int argc, char **argv)
{
  TEST_SET_IMM (int8_t, 0, imm_0)
  TEST_SET_IMM (int16_t, 0, imm_0)
  TEST_SET_IMM (int32_t, 0, imm_0)
  TEST_SET_IMM (int64_t, 0, imm_0)

  TEST_SET_IMM (int8_t, -1, imm_m1)
  TEST_SET_IMM (int16_t, -1, imm_m1)
  TEST_SET_IMM (int32_t, -1, imm_m1)
  TEST_SET_IMM (int64_t, -1, imm_m1)

  TEST_SET_IMM (int8_t, 1, imm_1)
  TEST_SET_IMM (int16_t, 1, imm_1)
  TEST_SET_IMM (int32_t, 1, imm_1)
  TEST_SET_IMM (int64_t, 1, imm_1)

  TEST_SET_IMM (int8_t, -16, imm_m16)
  TEST_SET_IMM (int16_t, -16, imm_m16)
  TEST_SET_IMM (int32_t, -16, imm_m16)
  TEST_SET_IMM (int64_t, -16, imm_m16)

  TEST_SET_IMM (int8_t, 15, imm_15)
  TEST_SET_IMM (int16_t, 15, imm_15)
  TEST_SET_IMM (int32_t, 15, imm_15)
  TEST_SET_IMM (int64_t, 15, imm_15)

  return 0;
}
