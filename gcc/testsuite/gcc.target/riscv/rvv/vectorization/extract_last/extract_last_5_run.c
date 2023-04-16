/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "extract_last_5.c"

int __attribute__ ((optimize (1)))
main (void)
{
  TYPE a[N] = {
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
    31, 32
  };
  __builtin_memset (a + 32, 43, (N - 32) * sizeof (TYPE));

  TYPE ret = condition_reduction (a, 16);

  if (ret != 10)
    __builtin_abort ();

  return 0;
}
