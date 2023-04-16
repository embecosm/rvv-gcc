/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "strcmp_1.c"

int main ()
{
  char str1[15];
  char str2[15];
  int ret;

  strcpy(str1, "abcdef");
  strcpy(str2, "ABCDEF");

  ret = do_strcmp(str1, str2);
  if(ret <= 0)
   __builtin_abort ();
  ret = do_strcmp(str2, str1);
  if(ret >= 0)
   __builtin_abort ();
  ret = do_strcmp(str1, str1);
  if(ret != 0)
   __builtin_abort ();

   return(0);
}
