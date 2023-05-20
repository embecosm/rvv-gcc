/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -fdump-tree-optimized" } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */


#include <stddef.h>
#include <stdint.h>


void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t (int8_t * restrict a, int8_t * restrict b, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int16_t)a[i] * (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t (int16_t * restrict a, int16_t * restrict b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] * (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t (int32_t * restrict a, int32_t * restrict b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t (uint8_t * restrict a, uint8_t * restrict b, uint16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint16_t)a[i] * (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t (uint16_t * restrict a, uint16_t * restrict b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] * (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t (uint32_t * restrict a, uint32_t * restrict b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t (uint8_t * restrict a, uint8_t * restrict b, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int16_t)a[i] * (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t (uint16_t * restrict a, uint16_t * restrict b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] * (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t (uint32_t * restrict a, uint32_t * restrict b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t (int8_t * restrict a, int8_t * restrict b, uint16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint16_t)a[i] * (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t (int16_t * restrict a, int16_t * restrict b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] * (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t (int32_t * restrict a, int32_t * restrict b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t2 (int8_t * restrict a, uint8_t * restrict b, uint16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint16_t)a[i] * (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t2 (int16_t * restrict a, uint16_t * restrict b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] * (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t2 (int32_t * restrict a, uint32_t * restrict b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t3 (uint8_t * restrict a, int8_t * restrict b, uint16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint16_t)a[i] * (uint16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t3 (uint16_t * restrict a, int16_t * restrict b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] * (uint32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t3 (uint32_t * restrict a, int32_t * restrict b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t4 (int8_t * restrict a, uint8_t * restrict b, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int16_t)a[i] * (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t4 (int16_t * restrict a, uint16_t * restrict b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] * (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t4 (int32_t * restrict a, uint32_t * restrict b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t5 (uint8_t * restrict a, int8_t * restrict b, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int16_t)a[i] * (int16_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t5 (uint16_t * restrict a, int16_t * restrict b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] * (int32_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t5 (uint32_t * restrict a, int32_t * restrict b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t6 (int8_t * restrict a, int8_t b, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int16_t)a[i] * (int16_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t6 (int16_t * restrict a, int16_t b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] * (int32_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t6 (int32_t * restrict a, int32_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_uint16_t6 (uint8_t * restrict a, uint8_t b, uint16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint16_t)a[i] * (uint16_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_uint32_t6 (uint16_t * restrict a, uint16_t b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] * (uint32_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_uint64_t6 (uint32_t * restrict a, uint32_t b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_uint8_t_int16_t6 (uint8_t * restrict a, uint8_t b, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int16_t)a[i] * (int16_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_uint16_t_int32_t6 (uint16_t * restrict a, uint16_t b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] * (int32_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_uint32_t_int64_t6 (uint32_t * restrict a, uint32_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t6 (int8_t * restrict a, int8_t b, uint16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint16_t)a[i] * (uint16_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t6 (int16_t * restrict a, int16_t b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] * (uint32_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t6 (int32_t * restrict a, int32_t b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_int16_t7 (int8_t * restrict a, uint8_t b, int16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int16_t)a[i] * (int16_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_int32_t7 (int16_t * restrict a, uint16_t b, int32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int32_t)a[i] * (int32_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_int64_t7 (int32_t * restrict a, uint32_t b, int64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (int64_t)a[i] * (int64_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int8_t_uint16_t7 (int8_t * restrict a, uint8_t b, uint16_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint16_t)a[i] * (uint16_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int16_t_uint32_t7 (int16_t * restrict a, uint16_t b, uint32_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint32_t)a[i] * (uint32_t)b;
}

void __attribute__ ((noinline, noclone))
mixed_int32_t_uint64_t7 (int32_t * restrict a, uint32_t b, uint64_t * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (uint64_t)a[i] * (uint64_t)b;
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float (_Float16 * restrict a, _Float16 * restrict b, float * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (float)a[i] * (float)b[i];
}

void __attribute__ ((noinline, noclone))
mixed_float_double (float * restrict a, float * restrict b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] * (double)b[i];
}

void __attribute__ ((noinline, noclone))
mixed__Float16_float2 (_Float16 * restrict a, _Float16 b, float * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (float)a[i] * (float)b;
}

void __attribute__ ((noinline, noclone))
mixed_float_double2 (float * restrict a, float b, double * restrict c)
{
  for (size_t i = 0; i < 128; i++)
    c[i] = (double)a[i] * (double)b;
}

/* { dg-final { scan-tree-dump-not ".WHILE_LEN" "optimized" } } */
/* { dg-final { scan-assembler-times {\tvwmul\.vv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwmulu\.vv} 6 } } */
/* { dg-final { scan-assembler-times {\tvwmul\.vx} 6 } } */
/* { dg-final { scan-assembler-times {\tvwmulu\.vx} 6 } } */
/* { dg-final { scan-assembler-times {\tvwmulsu\.vv} 12 } } */
/* { dg-final { scan-assembler-times {\tvwmulsu\.vx} 6 } } */
/* { dg-final { scan-assembler-times {\tvfwmul\.vv} 2 } } */
/* { dg-final { scan-assembler-times {\tvfwmul\.vf} 2 } } */
