
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmadc_vx_i64m1_b64_vl32(vint64m1_t op1, int64_t op2)
{
  return vmadc_vx_i64m1_b64(op1, op2, 32);
}
/* { dg-final { scan-assembler {vmadc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])(?: test_vmadc_vx_i64m1_b64_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmadc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmadc_vx_i64m1_b64_vl32 )?} } } */

vbool32_t 
test_vmadc_vx_i64m2_b32_vl32(vint64m2_t op1, int64_t op2)
{
  return vmadc_vx_i64m2_b32(op1, op2, 32);
}
/* { dg-final { scan-assembler {vmadc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)(?: test_vmadc_vx_i64m2_b32_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmadc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmadc_vx_i64m2_b32_vl32 )?} } } */

vbool16_t 
test_vmadc_vx_i64m4_b16_vl32(vint64m4_t op1, int64_t op2)
{
  return vmadc_vx_i64m4_b16(op1, op2, 32);
}
/* { dg-final { scan-assembler {vmadc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])(?: test_vmadc_vx_i64m4_b16_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmadc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmadc_vx_i64m4_b16_vl32 )?} } } */

vbool8_t 
test_vmadc_vx_i64m8_b8_vl32(vint64m8_t op1, int64_t op2)
{
  return vmadc_vx_i64m8_b8(op1, op2, 32);
}
/* { dg-final { scan-assembler {vmadc\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)(?: test_vmadc_vx_i64m8_b8_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmadc\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmadc_vx_i64m8_b8_vl32 )?} } } */
