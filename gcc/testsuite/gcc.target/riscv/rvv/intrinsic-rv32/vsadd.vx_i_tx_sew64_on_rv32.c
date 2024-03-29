
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vsadd_vx_i64m1_ta(vint64m1_t op1, int64_t op2, size_t vl)
{
  return vsadd_vx_i64m1_ta(op1, op2, vl);
}
/* { dg-final { scan-assembler {vsadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])(?: test_vsadd_vx_i64m1_ta )?} } } */
/* { dg-final { scan-assembler-not {vsadd\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vsadd_vx_i64m1_ta )?} } } */

vint64m2_t 
test_vsadd_vx_i64m2_ta(vint64m2_t op1, int64_t op2, size_t vl)
{
  return vsadd_vx_i64m2_ta(op1, op2, vl);
}
/* { dg-final { scan-assembler {vsadd\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)(?: test_vsadd_vx_i64m2_ta )?} } } */
/* { dg-final { scan-assembler-not {vsadd\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vsadd_vx_i64m2_ta )?} } } */

vint64m4_t 
test_vsadd_vx_i64m4_ta(vint64m4_t op1, int64_t op2, size_t vl)
{
  return vsadd_vx_i64m4_ta(op1, op2, vl);
}
/* { dg-final { scan-assembler {vsadd\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])(?: test_vsadd_vx_i64m4_ta )?} } } */
/* { dg-final { scan-assembler-not {vsadd\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vsadd_vx_i64m4_ta )?} } } */

vint64m8_t 
test_vsadd_vx_i64m8_ta(vint64m8_t op1, int64_t op2, size_t vl)
{
  return vsadd_vx_i64m8_ta(op1, op2, vl);
}
/* { dg-final { scan-assembler {vsadd\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)(?: test_vsadd_vx_i64m8_ta )?} } } */
/* { dg-final { scan-assembler-not {vsadd\.vx\s+(?:v[08]|v16|v24),(?: test_vsadd_vx_i64m8_ta )?} } } */

vint64m1_t 
test_vsadd_vx_i64m1_tu(vint64m1_t dest, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vsadd_vx_i64m1_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vsadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])(?: test_vsadd_vx_i64m1_tu )?} } } */
/* { dg-final { scan-assembler-not {vsadd\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vsadd_vx_i64m1_tu )?} } } */

vint64m2_t 
test_vsadd_vx_i64m2_tu(vint64m2_t dest, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vsadd_vx_i64m2_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vsadd\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)(?: test_vsadd_vx_i64m2_tu )?} } } */
/* { dg-final { scan-assembler-not {vsadd\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vsadd_vx_i64m2_tu )?} } } */

vint64m4_t 
test_vsadd_vx_i64m4_tu(vint64m4_t dest, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vsadd_vx_i64m4_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vsadd\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])(?: test_vsadd_vx_i64m4_tu )?} } } */
/* { dg-final { scan-assembler-not {vsadd\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vsadd_vx_i64m4_tu )?} } } */

vint64m8_t 
test_vsadd_vx_i64m8_tu(vint64m8_t dest, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vsadd_vx_i64m8_tu(dest, op1, op2, vl);
}
/* { dg-final { scan-assembler {vsadd\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)(?: test_vsadd_vx_i64m8_tu )?} } } */
/* { dg-final { scan-assembler-not {vsadd\.vx\s+(?:v[08]|v16|v24),(?: test_vsadd_vx_i64m8_tu )?} } } */
