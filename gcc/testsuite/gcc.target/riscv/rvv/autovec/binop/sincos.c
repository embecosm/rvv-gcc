/* { dg-do compile } */
/* { dg-additional-options "-O2 -funsafe-math-optimizations" } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_d } */

#include <math.h>

void f (double *a)
{
  for (int i = 0; i < 1000; i++)
    a[i] = sin (a[i]);
}
