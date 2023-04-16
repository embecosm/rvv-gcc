/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "strcpy_1.c"

int main ()
{
  char str[] = "This is RISC-V 'V' Extension";
  char new_str[50];
  do_strcpy (new_str, str);
  return 0;
}
