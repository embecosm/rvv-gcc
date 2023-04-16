/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-vect-details --save-temps" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#define TYPE int16_t

#include "extract_last_2.c"


/* { dg-final { scan-assembler {\tvcpop.m} } } */
/* { dg-final { scan-assembler {\tvcompress.vm} } } */
