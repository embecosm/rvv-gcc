
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vmerge_vxm_i64m1_vl32(vbool64_t mask, vint64m1_t op1, int64_t op2)
{
  return vmerge_vxm_i64m1(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0(?: test_vmerge_vxm_i64m1_vl32 )?} } } */

vint64m2_t 
test_vmerge_vxm_i64m2_vl32(vbool32_t mask, vint64m2_t op1, int64_t op2)
{
  return vmerge_vxm_i64m2(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0(?: test_vmerge_vxm_i64m2_vl32 )?} } } */

vint64m4_t 
test_vmerge_vxm_i64m4_vl32(vbool16_t mask, vint64m4_t op1, int64_t op2)
{
  return vmerge_vxm_i64m4(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0(?: test_vmerge_vxm_i64m4_vl32 )?} } } */

vint64m8_t 
test_vmerge_vxm_i64m8_vl32(vbool8_t mask, vint64m8_t op1, int64_t op2)
{
  return vmerge_vxm_i64m8(mask, op1, op2, 32);
}
/* { dg-final { scan-assembler {vmerge\.vvm\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0(?: test_vmerge_vxm_i64m8_vl32 )?} } } */
