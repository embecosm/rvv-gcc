
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vbool64_t 
test_vmsbc_vxm_u64m1_b64_vl32(vuint64m1_t op1, uint64_t op2, vbool64_t op3)
{
  return vmsbc_vxm_u64m1_b64(op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0(?: test_vmsbc_vxm_u64m1_b64_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmsbc_vxm_u64m1_b64_vl32 )?} } } */

vbool32_t 
test_vmsbc_vxm_u64m2_b32_vl32(vuint64m2_t op1, uint64_t op2, vbool32_t op3)
{
  return vmsbc_vxm_u64m2_b32(op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0(?: test_vmsbc_vxm_u64m2_b32_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmsbc_vxm_u64m2_b32_vl32 )?} } } */

vbool16_t 
test_vmsbc_vxm_u64m4_b16_vl32(vuint64m4_t op1, uint64_t op2, vbool16_t op3)
{
  return vmsbc_vxm_u64m4_b16(op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0(?: test_vmsbc_vxm_u64m4_b16_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmsbc_vxm_u64m4_b16_vl32 )?} } } */

vbool8_t 
test_vmsbc_vxm_u64m8_b8_vl32(vuint64m8_t op1, uint64_t op2, vbool8_t op3)
{
  return vmsbc_vxm_u64m8_b8(op1, op2, op3, 32);
}
/* { dg-final { scan-assembler {vmsbc\.vvm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0(?: test_vmsbc_vxm_u64m8_b8_vl32 )?} } } */
/* { dg-final { scan-assembler-not {vmsbc\.vxm\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmsbc_vxm_u64m8_b8_vl32 )?} } } */
