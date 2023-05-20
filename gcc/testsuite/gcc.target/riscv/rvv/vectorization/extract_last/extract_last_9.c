/* { dg-do run } */
/* { dg-additional-options "-O1 -ftree-vectorize -fno-vect-cost-model" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
int heating[16][16] = {{0,1,2,3,4,5,6,7,8,9,10,11,12,-1,-1,-1}, {0,1,2,3,4,5,6,7,8,9,10,11,-1,-1,-1,-1}};

void __attribute__ ((noinline, noclone))
foo (int jsav, int ksav)
{
  if (jsav != 11 || ksav != 1)
    __builtin_abort ();
}

void __attribute__ ((noinline, noclone))
map_do()
{
  int jsav, ksav, k, j;

  for(k = 0; k < 16; k++)
    for(j = 0; j < 16; j++)
      if (heating[k][j] > 0)
        {
          jsav = j;
          ksav = k;
        }

  foo (jsav, ksav);
}

int main ()
{
  map_do();
}
