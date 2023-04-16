/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 --save-temps" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include <stdint.h>

typedef int8_t vnx16qi __attribute__((vector_size (16)));
typedef __fp16 vnx8hf __attribute__((vector_size (16)));

__attribute__((noipa))
vnx16qi foo(int8_t a, int8_t b)
{
  return (vnx16qi) { a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b };
}

__attribute__((noipa))
vnx8hf foo2(__fp16 a, __fp16 b)
{
  return (vnx8hf) { a, b, a, b, a, b, a, b };
}
