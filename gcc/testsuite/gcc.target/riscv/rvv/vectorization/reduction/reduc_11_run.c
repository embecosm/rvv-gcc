/* { dg-do run } */
/* { dg-additional-options "-O3 -mriscv-vector-bits=128" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#define N 0x1100

#include "reduc_11.c"

int
main (void)
{
  unsigned short x[N];
  for (int i = 0; i < N; ++i)
    x[i] = (i + 1) * (i + 2);

  if (add_loop (x, 42) != 20522
      || max_loop (x, 65503) != 65504
      || max_loop (x, 65505) != 65505
      || or_loop (x, 0) != 0xfffe
      || or_loop (x, 1) != 0xffff
      || eor_loop (x, 0) != 0xa000
      || eor_loop (x, 0xbfff) != 0x1fff)
    __builtin_abort ();

  for (int i = 0; i < N; ++i)
    x[i] = ~x[i];

  if (min_loop (x, 32) != 31
      || min_loop (x, 30) != 30
      || and_loop (x, 0xff) != 1
      || and_loop (x, 0) != 0)
    __builtin_abort ();

  return 0;
}
