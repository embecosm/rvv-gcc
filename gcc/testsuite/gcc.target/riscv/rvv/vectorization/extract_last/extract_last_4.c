/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-vect-details --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#define TYPE int16_t

#include "extract_last_2.c"


/* { dg-final { scan-assembler {\tvcpop.m} } } */
/* { dg-final { scan-assembler {\tvcompress.vm} } } */
