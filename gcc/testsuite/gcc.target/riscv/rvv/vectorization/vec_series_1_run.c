/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "vec_series_1.c"

#define TEST_LOOP(TYPE, BASE, STEP, SUFFIX)	\
  {						\
    TYPE array[NUM_ELEMS (TYPE)] = {};		\
    loop_##TYPE##_##SUFFIX (array);		\
    for (int i = 0; i < NUM_ELEMS (TYPE); i++)	\
      if (array[i] != (TYPE) (BASE + i * STEP))	\
	__builtin_abort ();			\
  }

int __attribute__ ((optimize (1)))
main ()
{
  TEST_ALL (TEST_LOOP)
  return 0;
}
