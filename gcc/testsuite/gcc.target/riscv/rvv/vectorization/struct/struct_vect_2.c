/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#define TYPE uint16_t
#include "struct_vect_1.c"

/* { dg-final { scan-tree-dump-times "\.LOAD_LANES" 21 "optimized" } } */
/* { dg-final { scan-tree-dump-times "\.STORE_LANES" 21 "optimized" } } */
/* { dg-final { scan-assembler-not {\tvmv1r.v} } } */
/* { dg-final { scan-assembler-not {\tvmv2r.v} } } */
/* { dg-final { scan-assembler-not {\tvmv4r.v} } } */
