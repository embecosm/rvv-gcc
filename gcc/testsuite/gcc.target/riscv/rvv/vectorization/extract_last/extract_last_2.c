/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-vect-details --save-temps" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

#if !defined(TYPE)
#define TYPE uint32_t
#endif

#define N 254

/* Non-simple condition reduction.  */

TYPE __attribute__ ((noinline, noclone))
condition_reduction (TYPE *a, TYPE min_v)
{
  TYPE last = 65;

  for (TYPE i = 0; i < N; i++)
    if (a[i] < min_v)
      last = a[i];

  return last;
}

/* { dg-final { scan-assembler {\tvcpop.m} } } */
/* { dg-final { scan-assembler {\tvcompress.vm} } } */
