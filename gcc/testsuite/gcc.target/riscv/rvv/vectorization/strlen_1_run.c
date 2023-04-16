/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "strlen_1.c"
#include <stdio.h>

int main ()
{
  char str[50] = "This is RISC-V 'V' Extension Test";
  if (do_strlen (str) != 33)
    __builtin_abort ();

  return 0;
}
