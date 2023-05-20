/* { dg-do run } */
/* { dg-additional-options "-O3 -mriscv-vector-bits=128" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#define N 0x1100

#include "reduc_9.c"

int
main (void)
{
  unsigned short x[N];
  for (int i = 0; i < N; ++i)
    x[i] = (i + 1) * (i + 2);

  if (add_loop (x) != 20480
      || max_loop (x) != 65504
      || or_loop (x) != 0xfffe
      || eor_loop (x) != 0xa000)
    __builtin_abort ();

  for (int i = 0; i < N; ++i)
    x[i] = ~x[i];

  if (min_loop (x) != 31
      || and_loop (x) != 1)
    __builtin_abort ();

  return 0;
}
