
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint64m1_t 
test_vasubu_vx_u64m1_vl31(vuint64m1_t op1, uint64_t op2)
{
  return vasubu_vx_u64m1(op1, op2, 31);
}
/* { dg-final { scan-assembler {vasubu\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])(?: test_vasubu_vx_u64m1_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vasubu\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vasubu_vx_u64m1_vl31 )?} } } */

vuint64m2_t 
test_vasubu_vx_u64m2_vl31(vuint64m2_t op1, uint64_t op2)
{
  return vasubu_vx_u64m2(op1, op2, 31);
}
/* { dg-final { scan-assembler {vasubu\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)(?: test_vasubu_vx_u64m2_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vasubu\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vasubu_vx_u64m2_vl31 )?} } } */

vuint64m4_t 
test_vasubu_vx_u64m4_vl31(vuint64m4_t op1, uint64_t op2)
{
  return vasubu_vx_u64m4(op1, op2, 31);
}
/* { dg-final { scan-assembler {vasubu\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])(?: test_vasubu_vx_u64m4_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vasubu\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vasubu_vx_u64m4_vl31 )?} } } */

vuint64m8_t 
test_vasubu_vx_u64m8_vl31(vuint64m8_t op1, uint64_t op2)
{
  return vasubu_vx_u64m8(op1, op2, 31);
}
/* { dg-final { scan-assembler {vasubu\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)(?: test_vasubu_vx_u64m8_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vasubu\.vx\s+(?:v[08]|v16|v24),(?: test_vasubu_vx_u64m8_vl31 )?} } } */
