/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>
#include <string.h>
#include <stdio.h>

int __attribute__ ((noinline, noclone))
do_strlen (char *str)
{
  return strlen (str);
}

/* { dg-final { scan-assembler-times {\tvle8ff.v} 1 } } */
