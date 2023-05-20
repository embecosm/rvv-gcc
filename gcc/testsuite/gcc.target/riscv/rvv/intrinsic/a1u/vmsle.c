/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmsle_vx_i8mf8_b64_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_m16(vint8mf8_t op1, size_t vl)
{
  return vmsle_vx_i8mf8_b64(op1, -16, vl);
}

/*
** test_vmsle_vx_i8mf8_b64_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_15(vint8mf8_t op1, size_t vl)
{
  return vmsle_vx_i8mf8_b64(op1, 15, vl);
}

/*
** test_vmsle_vx_i8mf8_b64_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_vl31_m16(vint8mf8_t op1)
{
  return vmsle_vx_i8mf8_b64(op1, -16, 31);
}

/*
** test_vmsle_vx_i8mf8_b64_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_vl31_15(vint8mf8_t op1)
{
  return vmsle_vx_i8mf8_b64(op1, 15, 31);
}

/*
** test_vmsle_vx_i8mf4_b32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_m16(vint8mf4_t op1, size_t vl)
{
  return vmsle_vx_i8mf4_b32(op1, -16, vl);
}

/*
** test_vmsle_vx_i8mf4_b32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_15(vint8mf4_t op1, size_t vl)
{
  return vmsle_vx_i8mf4_b32(op1, 15, vl);
}

/*
** test_vmsle_vx_i8mf4_b32_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_vl31_m16(vint8mf4_t op1)
{
  return vmsle_vx_i8mf4_b32(op1, -16, 31);
}

/*
** test_vmsle_vx_i8mf4_b32_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_vl31_15(vint8mf4_t op1)
{
  return vmsle_vx_i8mf4_b32(op1, 15, 31);
}

/*
** test_vmsle_vx_i8mf2_b16_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_m16(vint8mf2_t op1, size_t vl)
{
  return vmsle_vx_i8mf2_b16(op1, -16, vl);
}

/*
** test_vmsle_vx_i8mf2_b16_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_15(vint8mf2_t op1, size_t vl)
{
  return vmsle_vx_i8mf2_b16(op1, 15, vl);
}

/*
** test_vmsle_vx_i8mf2_b16_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_vl31_m16(vint8mf2_t op1)
{
  return vmsle_vx_i8mf2_b16(op1, -16, 31);
}

/*
** test_vmsle_vx_i8mf2_b16_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_vl31_15(vint8mf2_t op1)
{
  return vmsle_vx_i8mf2_b16(op1, 15, 31);
}

/*
** test_vmsle_vx_i8m1_b8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_m16(vint8m1_t op1, size_t vl)
{
  return vmsle_vx_i8m1_b8(op1, -16, vl);
}

/*
** test_vmsle_vx_i8m1_b8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_15(vint8m1_t op1, size_t vl)
{
  return vmsle_vx_i8m1_b8(op1, 15, vl);
}

/*
** test_vmsle_vx_i8m1_b8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_vl31_m16(vint8m1_t op1)
{
  return vmsle_vx_i8m1_b8(op1, -16, 31);
}

/*
** test_vmsle_vx_i8m1_b8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_vl31_15(vint8m1_t op1)
{
  return vmsle_vx_i8m1_b8(op1, 15, 31);
}

/*
** test_vmsle_vx_i8m2_b4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_m16(vint8m2_t op1, size_t vl)
{
  return vmsle_vx_i8m2_b4(op1, -16, vl);
}

/*
** test_vmsle_vx_i8m2_b4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_15(vint8m2_t op1, size_t vl)
{
  return vmsle_vx_i8m2_b4(op1, 15, vl);
}

/*
** test_vmsle_vx_i8m2_b4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_vl31_m16(vint8m2_t op1)
{
  return vmsle_vx_i8m2_b4(op1, -16, 31);
}

/*
** test_vmsle_vx_i8m2_b4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_vl31_15(vint8m2_t op1)
{
  return vmsle_vx_i8m2_b4(op1, 15, 31);
}

/*
** test_vmsle_vx_i8m4_b2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_m16(vint8m4_t op1, size_t vl)
{
  return vmsle_vx_i8m4_b2(op1, -16, vl);
}

/*
** test_vmsle_vx_i8m4_b2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_15(vint8m4_t op1, size_t vl)
{
  return vmsle_vx_i8m4_b2(op1, 15, vl);
}

/*
** test_vmsle_vx_i8m4_b2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_vl31_m16(vint8m4_t op1)
{
  return vmsle_vx_i8m4_b2(op1, -16, 31);
}

/*
** test_vmsle_vx_i8m4_b2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_vl31_15(vint8m4_t op1)
{
  return vmsle_vx_i8m4_b2(op1, 15, 31);
}

/*
** test_vmsle_vx_i8m8_b1_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_m16(vint8m8_t op1, size_t vl)
{
  return vmsle_vx_i8m8_b1(op1, -16, vl);
}

/*
** test_vmsle_vx_i8m8_b1_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_15(vint8m8_t op1, size_t vl)
{
  return vmsle_vx_i8m8_b1(op1, 15, vl);
}

/*
** test_vmsle_vx_i8m8_b1_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_vl31_m16(vint8m8_t op1)
{
  return vmsle_vx_i8m8_b1(op1, -16, 31);
}

/*
** test_vmsle_vx_i8m8_b1_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_vl31_15(vint8m8_t op1)
{
  return vmsle_vx_i8m8_b1(op1, 15, 31);
}

/*
** test_vmsle_vx_i16mf4_b64_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_m16(vint16mf4_t op1, size_t vl)
{
  return vmsle_vx_i16mf4_b64(op1, -16, vl);
}

/*
** test_vmsle_vx_i16mf4_b64_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_15(vint16mf4_t op1, size_t vl)
{
  return vmsle_vx_i16mf4_b64(op1, 15, vl);
}

/*
** test_vmsle_vx_i16mf4_b64_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_vl31_m16(vint16mf4_t op1)
{
  return vmsle_vx_i16mf4_b64(op1, -16, 31);
}

/*
** test_vmsle_vx_i16mf4_b64_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_vl31_15(vint16mf4_t op1)
{
  return vmsle_vx_i16mf4_b64(op1, 15, 31);
}

/*
** test_vmsle_vx_i16mf2_b32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_m16(vint16mf2_t op1, size_t vl)
{
  return vmsle_vx_i16mf2_b32(op1, -16, vl);
}

/*
** test_vmsle_vx_i16mf2_b32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_15(vint16mf2_t op1, size_t vl)
{
  return vmsle_vx_i16mf2_b32(op1, 15, vl);
}

/*
** test_vmsle_vx_i16mf2_b32_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_vl31_m16(vint16mf2_t op1)
{
  return vmsle_vx_i16mf2_b32(op1, -16, 31);
}

/*
** test_vmsle_vx_i16mf2_b32_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_vl31_15(vint16mf2_t op1)
{
  return vmsle_vx_i16mf2_b32(op1, 15, 31);
}

/*
** test_vmsle_vx_i16m1_b16_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_m16(vint16m1_t op1, size_t vl)
{
  return vmsle_vx_i16m1_b16(op1, -16, vl);
}

/*
** test_vmsle_vx_i16m1_b16_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_15(vint16m1_t op1, size_t vl)
{
  return vmsle_vx_i16m1_b16(op1, 15, vl);
}

/*
** test_vmsle_vx_i16m1_b16_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_vl31_m16(vint16m1_t op1)
{
  return vmsle_vx_i16m1_b16(op1, -16, 31);
}

/*
** test_vmsle_vx_i16m1_b16_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_vl31_15(vint16m1_t op1)
{
  return vmsle_vx_i16m1_b16(op1, 15, 31);
}

/*
** test_vmsle_vx_i16m2_b8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_m16(vint16m2_t op1, size_t vl)
{
  return vmsle_vx_i16m2_b8(op1, -16, vl);
}

/*
** test_vmsle_vx_i16m2_b8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_15(vint16m2_t op1, size_t vl)
{
  return vmsle_vx_i16m2_b8(op1, 15, vl);
}

/*
** test_vmsle_vx_i16m2_b8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_vl31_m16(vint16m2_t op1)
{
  return vmsle_vx_i16m2_b8(op1, -16, 31);
}

/*
** test_vmsle_vx_i16m2_b8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_vl31_15(vint16m2_t op1)
{
  return vmsle_vx_i16m2_b8(op1, 15, 31);
}

/*
** test_vmsle_vx_i16m4_b4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_m16(vint16m4_t op1, size_t vl)
{
  return vmsle_vx_i16m4_b4(op1, -16, vl);
}

/*
** test_vmsle_vx_i16m4_b4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_15(vint16m4_t op1, size_t vl)
{
  return vmsle_vx_i16m4_b4(op1, 15, vl);
}

/*
** test_vmsle_vx_i16m4_b4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_vl31_m16(vint16m4_t op1)
{
  return vmsle_vx_i16m4_b4(op1, -16, 31);
}

/*
** test_vmsle_vx_i16m4_b4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_vl31_15(vint16m4_t op1)
{
  return vmsle_vx_i16m4_b4(op1, 15, 31);
}

/*
** test_vmsle_vx_i16m8_b2_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_m16(vint16m8_t op1, size_t vl)
{
  return vmsle_vx_i16m8_b2(op1, -16, vl);
}

/*
** test_vmsle_vx_i16m8_b2_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_15(vint16m8_t op1, size_t vl)
{
  return vmsle_vx_i16m8_b2(op1, 15, vl);
}

/*
** test_vmsle_vx_i16m8_b2_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_vl31_m16(vint16m8_t op1)
{
  return vmsle_vx_i16m8_b2(op1, -16, 31);
}

/*
** test_vmsle_vx_i16m8_b2_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_vl31_15(vint16m8_t op1)
{
  return vmsle_vx_i16m8_b2(op1, 15, 31);
}

/*
** test_vmsle_vx_i32mf2_b64_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_m16(vint32mf2_t op1, size_t vl)
{
  return vmsle_vx_i32mf2_b64(op1, -16, vl);
}

/*
** test_vmsle_vx_i32mf2_b64_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_15(vint32mf2_t op1, size_t vl)
{
  return vmsle_vx_i32mf2_b64(op1, 15, vl);
}

/*
** test_vmsle_vx_i32mf2_b64_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_vl31_m16(vint32mf2_t op1)
{
  return vmsle_vx_i32mf2_b64(op1, -16, 31);
}

/*
** test_vmsle_vx_i32mf2_b64_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_vl31_15(vint32mf2_t op1)
{
  return vmsle_vx_i32mf2_b64(op1, 15, 31);
}

/*
** test_vmsle_vx_i32m1_b32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_m16(vint32m1_t op1, size_t vl)
{
  return vmsle_vx_i32m1_b32(op1, -16, vl);
}

/*
** test_vmsle_vx_i32m1_b32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_15(vint32m1_t op1, size_t vl)
{
  return vmsle_vx_i32m1_b32(op1, 15, vl);
}

/*
** test_vmsle_vx_i32m1_b32_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_vl31_m16(vint32m1_t op1)
{
  return vmsle_vx_i32m1_b32(op1, -16, 31);
}

/*
** test_vmsle_vx_i32m1_b32_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_vl31_15(vint32m1_t op1)
{
  return vmsle_vx_i32m1_b32(op1, 15, 31);
}

/*
** test_vmsle_vx_i32m2_b16_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_m16(vint32m2_t op1, size_t vl)
{
  return vmsle_vx_i32m2_b16(op1, -16, vl);
}

/*
** test_vmsle_vx_i32m2_b16_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_15(vint32m2_t op1, size_t vl)
{
  return vmsle_vx_i32m2_b16(op1, 15, vl);
}

/*
** test_vmsle_vx_i32m2_b16_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_vl31_m16(vint32m2_t op1)
{
  return vmsle_vx_i32m2_b16(op1, -16, 31);
}

/*
** test_vmsle_vx_i32m2_b16_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_vl31_15(vint32m2_t op1)
{
  return vmsle_vx_i32m2_b16(op1, 15, 31);
}

/*
** test_vmsle_vx_i32m4_b8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_m16(vint32m4_t op1, size_t vl)
{
  return vmsle_vx_i32m4_b8(op1, -16, vl);
}

/*
** test_vmsle_vx_i32m4_b8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_15(vint32m4_t op1, size_t vl)
{
  return vmsle_vx_i32m4_b8(op1, 15, vl);
}

/*
** test_vmsle_vx_i32m4_b8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_vl31_m16(vint32m4_t op1)
{
  return vmsle_vx_i32m4_b8(op1, -16, 31);
}

/*
** test_vmsle_vx_i32m4_b8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_vl31_15(vint32m4_t op1)
{
  return vmsle_vx_i32m4_b8(op1, 15, 31);
}

/*
** test_vmsle_vx_i32m8_b4_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_m16(vint32m8_t op1, size_t vl)
{
  return vmsle_vx_i32m8_b4(op1, -16, vl);
}

/*
** test_vmsle_vx_i32m8_b4_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_15(vint32m8_t op1, size_t vl)
{
  return vmsle_vx_i32m8_b4(op1, 15, vl);
}

/*
** test_vmsle_vx_i32m8_b4_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_vl31_m16(vint32m8_t op1)
{
  return vmsle_vx_i32m8_b4(op1, -16, 31);
}

/*
** test_vmsle_vx_i32m8_b4_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_vl31_15(vint32m8_t op1)
{
  return vmsle_vx_i32m8_b4(op1, 15, 31);
}

/*
** test_vmsle_vx_i64m1_b64_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_m16(vint64m1_t op1, size_t vl)
{
  return vmsle_vx_i64m1_b64(op1, -16, vl);
}

/*
** test_vmsle_vx_i64m1_b64_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_15(vint64m1_t op1, size_t vl)
{
  return vmsle_vx_i64m1_b64(op1, 15, vl);
}

/*
** test_vmsle_vx_i64m1_b64_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_vl31_m16(vint64m1_t op1)
{
  return vmsle_vx_i64m1_b64(op1, -16, 31);
}

/*
** test_vmsle_vx_i64m1_b64_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_vl31_15(vint64m1_t op1)
{
  return vmsle_vx_i64m1_b64(op1, 15, 31);
}

/*
** test_vmsle_vx_i64m2_b32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_m16(vint64m2_t op1, size_t vl)
{
  return vmsle_vx_i64m2_b32(op1, -16, vl);
}

/*
** test_vmsle_vx_i64m2_b32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_15(vint64m2_t op1, size_t vl)
{
  return vmsle_vx_i64m2_b32(op1, 15, vl);
}

/*
** test_vmsle_vx_i64m2_b32_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_vl31_m16(vint64m2_t op1)
{
  return vmsle_vx_i64m2_b32(op1, -16, 31);
}

/*
** test_vmsle_vx_i64m2_b32_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_vl31_15(vint64m2_t op1)
{
  return vmsle_vx_i64m2_b32(op1, 15, 31);
}

/*
** test_vmsle_vx_i64m4_b16_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_m16(vint64m4_t op1, size_t vl)
{
  return vmsle_vx_i64m4_b16(op1, -16, vl);
}

/*
** test_vmsle_vx_i64m4_b16_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_15(vint64m4_t op1, size_t vl)
{
  return vmsle_vx_i64m4_b16(op1, 15, vl);
}

/*
** test_vmsle_vx_i64m4_b16_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_vl31_m16(vint64m4_t op1)
{
  return vmsle_vx_i64m4_b16(op1, -16, 31);
}

/*
** test_vmsle_vx_i64m4_b16_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_vl31_15(vint64m4_t op1)
{
  return vmsle_vx_i64m4_b16(op1, 15, 31);
}

/*
** test_vmsle_vx_i64m8_b8_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_m16(vint64m8_t op1, size_t vl)
{
  return vmsle_vx_i64m8_b8(op1, -16, vl);
}

/*
** test_vmsle_vx_i64m8_b8_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_15(vint64m8_t op1, size_t vl)
{
  return vmsle_vx_i64m8_b8(op1, 15, vl);
}

/*
** test_vmsle_vx_i64m8_b8_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_vl31_m16(vint64m8_t op1)
{
  return vmsle_vx_i64m8_b8(op1, -16, 31);
}

/*
** test_vmsle_vx_i64m8_b8_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_vl31_15(vint64m8_t op1)
{
  return vmsle_vx_i64m8_b8(op1, 15, 31);
}

/*
** test_vmsle_vx_i8mf8_b64_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_m_m16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i8mf8_b64_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_m_15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, size_t vl)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i8mf8_b64_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_m_vl31_m16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i8mf8_b64_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_m_vl31_15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i8mf4_b32_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_m_m16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i8mf4_b32_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_m_15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, size_t vl)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i8mf4_b32_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_m_vl31_m16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i8mf4_b32_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_m_vl31_15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i8mf2_b16_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_m_m16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i8mf2_b16_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_m_15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, size_t vl)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i8mf2_b16_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_m_vl31_m16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i8mf2_b16_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_m_vl31_15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i8m1_b8_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_m_m16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i8m1_b8_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_m_15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, size_t vl)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i8m1_b8_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_m_vl31_m16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i8m1_b8_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_m_vl31_15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i8m2_b4_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_m_m16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i8m2_b4_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_m_15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, size_t vl)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i8m2_b4_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_m_vl31_m16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i8m2_b4_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_m_vl31_15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i8m4_b2_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_m_m16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i8m4_b2_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_m_15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, size_t vl)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i8m4_b2_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_m_vl31_m16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i8m4_b2_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_m_vl31_15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i8m8_b1_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_m_m16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i8m8_b1_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_m_15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, size_t vl)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i8m8_b1_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_m_vl31_m16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i8m8_b1_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_m_vl31_15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i16mf4_b64_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_m_m16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i16mf4_b64_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_m_15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, size_t vl)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i16mf4_b64_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_m_vl31_m16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i16mf4_b64_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_m_vl31_15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i16mf2_b32_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_m_m16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i16mf2_b32_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_m_15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, size_t vl)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i16mf2_b32_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_m_vl31_m16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i16mf2_b32_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_m_vl31_15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i16m1_b16_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_m_m16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i16m1_b16_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_m_15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, size_t vl)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i16m1_b16_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_m_vl31_m16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i16m1_b16_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_m_vl31_15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i16m2_b8_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_m_m16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i16m2_b8_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_m_15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, size_t vl)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i16m2_b8_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_m_vl31_m16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i16m2_b8_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_m_vl31_15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i16m4_b4_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_m_m16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i16m4_b4_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_m_15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, size_t vl)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i16m4_b4_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_m_vl31_m16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i16m4_b4_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_m_vl31_15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i16m8_b2_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_m_m16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i16m8_b2_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_m_15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, size_t vl)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i16m8_b2_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_m_vl31_m16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i16m8_b2_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_m_vl31_15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i32mf2_b64_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_m_m16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i32mf2_b64_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_m_15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, size_t vl)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i32mf2_b64_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_m_vl31_m16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i32mf2_b64_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_m_vl31_15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i32m1_b32_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_m_m16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i32m1_b32_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_m_15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, size_t vl)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i32m1_b32_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_m_vl31_m16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i32m1_b32_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_m_vl31_15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i32m2_b16_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_m_m16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i32m2_b16_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_m_15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, size_t vl)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i32m2_b16_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_m_vl31_m16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i32m2_b16_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_m_vl31_15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i32m4_b8_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_m_m16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i32m4_b8_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_m_15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, size_t vl)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i32m4_b8_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_m_vl31_m16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i32m4_b8_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_m_vl31_15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i32m8_b4_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_m_m16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i32m8_b4_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_m_15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, size_t vl)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i32m8_b4_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_m_vl31_m16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i32m8_b4_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_m_vl31_15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i64m1_b64_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_m_m16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i64m1_b64_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_m_15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, size_t vl)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i64m1_b64_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_m_vl31_m16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i64m1_b64_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_m_vl31_15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i64m2_b32_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_m_m16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i64m2_b32_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_m_15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, size_t vl)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i64m2_b32_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_m_vl31_m16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i64m2_b32_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_m_vl31_15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i64m4_b16_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_m_m16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i64m4_b16_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_m_15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, size_t vl)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i64m4_b16_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_m_vl31_m16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i64m4_b16_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_m_vl31_15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i64m8_b8_m_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_m_m16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, -16, vl);
}

/*
** test_vmsle_vx_i64m8_b8_m_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_m_15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, size_t vl)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, 15, vl);
}

/*
** test_vmsle_vx_i64m8_b8_m_vl31_m16:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_m_vl31_m16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, -16, 31);
}

/*
** test_vmsle_vx_i64m8_b8_m_vl31_15:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_m_vl31_15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, 15, 31);
}

/*
** test_vmsle_vx_i8mf8_b64_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_m_vl32_m16(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i8mf8_b64_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_m_vl32_15(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i8mf4_b32_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_m_vl32_m16(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i8mf4_b32_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_m_vl32_15(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i8mf2_b16_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_m_vl32_m16(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i8mf2_b16_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_m_vl32_15(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i8m1_b8_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_m_vl32_m16(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i8m1_b8_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_m_vl32_15(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i8m2_b4_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_m_vl32_m16(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i8m2_b4_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_m_vl32_15(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i8m4_b2_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_m_vl32_m16(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i8m4_b2_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_m_vl32_15(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i8m8_b1_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_m_vl32_m16(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i8m8_b1_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_m_vl32_15(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i16mf4_b64_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_m_vl32_m16(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i16mf4_b64_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_m_vl32_15(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i16mf2_b32_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_m_vl32_m16(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i16mf2_b32_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_m_vl32_15(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i16m1_b16_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_m_vl32_m16(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i16m1_b16_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_m_vl32_15(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i16m2_b8_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_m_vl32_m16(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i16m2_b8_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_m_vl32_15(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i16m4_b4_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_m_vl32_m16(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i16m4_b4_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_m_vl32_15(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i16m8_b2_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_m_vl32_m16(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i16m8_b2_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_m_vl32_15(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i32mf2_b64_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_m_vl32_m16(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i32mf2_b64_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_m_vl32_15(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i32m1_b32_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_m_vl32_m16(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i32m1_b32_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_m_vl32_15(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i32m2_b16_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_m_vl32_m16(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i32m2_b16_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_m_vl32_15(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i32m4_b8_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_m_vl32_m16(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i32m4_b8_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_m_vl32_15(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i32m8_b4_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_m_vl32_m16(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i32m8_b4_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_m_vl32_15(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i64m1_b64_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_m_vl32_m16(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i64m1_b64_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_m_vl32_15(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i64m2_b32_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_m_vl32_m16(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i64m2_b32_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_m_vl32_15(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i64m4_b16_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_m_vl32_m16(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i64m4_b16_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_m_vl32_15(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i64m8_b8_m_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_m_vl32_m16(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, -16, 32);
}

/*
** test_vmsle_vx_i64m8_b8_m_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15,\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_m_vl32_15(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, 15, 32);
}

/*
** test_vmsle_vx_i8mf8_b64_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_vl32_m16(vint8mf8_t op1)
{
  return vmsle_vx_i8mf8_b64(op1, -16, 32);
}

/*
** test_vmsle_vx_i8mf8_b64_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_vl32_15(vint8mf8_t op1)
{
  return vmsle_vx_i8mf8_b64(op1, 15, 32);
}

/*
** test_vmsle_vx_i8mf4_b32_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_vl32_m16(vint8mf4_t op1)
{
  return vmsle_vx_i8mf4_b32(op1, -16, 32);
}

/*
** test_vmsle_vx_i8mf4_b32_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_vl32_15(vint8mf4_t op1)
{
  return vmsle_vx_i8mf4_b32(op1, 15, 32);
}

/*
** test_vmsle_vx_i8mf2_b16_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_vl32_m16(vint8mf2_t op1)
{
  return vmsle_vx_i8mf2_b16(op1, -16, 32);
}

/*
** test_vmsle_vx_i8mf2_b16_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_vl32_15(vint8mf2_t op1)
{
  return vmsle_vx_i8mf2_b16(op1, 15, 32);
}

/*
** test_vmsle_vx_i8m1_b8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_vl32_m16(vint8m1_t op1)
{
  return vmsle_vx_i8m1_b8(op1, -16, 32);
}

/*
** test_vmsle_vx_i8m1_b8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_vl32_15(vint8m1_t op1)
{
  return vmsle_vx_i8m1_b8(op1, 15, 32);
}

/*
** test_vmsle_vx_i8m2_b4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_vl32_m16(vint8m2_t op1)
{
  return vmsle_vx_i8m2_b4(op1, -16, 32);
}

/*
** test_vmsle_vx_i8m2_b4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_vl32_15(vint8m2_t op1)
{
  return vmsle_vx_i8m2_b4(op1, 15, 32);
}

/*
** test_vmsle_vx_i8m4_b2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_vl32_m16(vint8m4_t op1)
{
  return vmsle_vx_i8m4_b2(op1, -16, 32);
}

/*
** test_vmsle_vx_i8m4_b2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_vl32_15(vint8m4_t op1)
{
  return vmsle_vx_i8m4_b2(op1, 15, 32);
}

/*
** test_vmsle_vx_i8m8_b1_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_vl32_m16(vint8m8_t op1)
{
  return vmsle_vx_i8m8_b1(op1, -16, 32);
}

/*
** test_vmsle_vx_i8m8_b1_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_vl32_15(vint8m8_t op1)
{
  return vmsle_vx_i8m8_b1(op1, 15, 32);
}

/*
** test_vmsle_vx_i16mf4_b64_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_vl32_m16(vint16mf4_t op1)
{
  return vmsle_vx_i16mf4_b64(op1, -16, 32);
}

/*
** test_vmsle_vx_i16mf4_b64_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_vl32_15(vint16mf4_t op1)
{
  return vmsle_vx_i16mf4_b64(op1, 15, 32);
}

/*
** test_vmsle_vx_i16mf2_b32_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_vl32_m16(vint16mf2_t op1)
{
  return vmsle_vx_i16mf2_b32(op1, -16, 32);
}

/*
** test_vmsle_vx_i16mf2_b32_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_vl32_15(vint16mf2_t op1)
{
  return vmsle_vx_i16mf2_b32(op1, 15, 32);
}

/*
** test_vmsle_vx_i16m1_b16_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_vl32_m16(vint16m1_t op1)
{
  return vmsle_vx_i16m1_b16(op1, -16, 32);
}

/*
** test_vmsle_vx_i16m1_b16_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_vl32_15(vint16m1_t op1)
{
  return vmsle_vx_i16m1_b16(op1, 15, 32);
}

/*
** test_vmsle_vx_i16m2_b8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_vl32_m16(vint16m2_t op1)
{
  return vmsle_vx_i16m2_b8(op1, -16, 32);
}

/*
** test_vmsle_vx_i16m2_b8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_vl32_15(vint16m2_t op1)
{
  return vmsle_vx_i16m2_b8(op1, 15, 32);
}

/*
** test_vmsle_vx_i16m4_b4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_vl32_m16(vint16m4_t op1)
{
  return vmsle_vx_i16m4_b4(op1, -16, 32);
}

/*
** test_vmsle_vx_i16m4_b4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_vl32_15(vint16m4_t op1)
{
  return vmsle_vx_i16m4_b4(op1, 15, 32);
}

/*
** test_vmsle_vx_i16m8_b2_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_vl32_m16(vint16m8_t op1)
{
  return vmsle_vx_i16m8_b2(op1, -16, 32);
}

/*
** test_vmsle_vx_i16m8_b2_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_vl32_15(vint16m8_t op1)
{
  return vmsle_vx_i16m8_b2(op1, 15, 32);
}

/*
** test_vmsle_vx_i32mf2_b64_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_vl32_m16(vint32mf2_t op1)
{
  return vmsle_vx_i32mf2_b64(op1, -16, 32);
}

/*
** test_vmsle_vx_i32mf2_b64_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_vl32_15(vint32mf2_t op1)
{
  return vmsle_vx_i32mf2_b64(op1, 15, 32);
}

/*
** test_vmsle_vx_i32m1_b32_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_vl32_m16(vint32m1_t op1)
{
  return vmsle_vx_i32m1_b32(op1, -16, 32);
}

/*
** test_vmsle_vx_i32m1_b32_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_vl32_15(vint32m1_t op1)
{
  return vmsle_vx_i32m1_b32(op1, 15, 32);
}

/*
** test_vmsle_vx_i32m2_b16_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_vl32_m16(vint32m2_t op1)
{
  return vmsle_vx_i32m2_b16(op1, -16, 32);
}

/*
** test_vmsle_vx_i32m2_b16_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_vl32_15(vint32m2_t op1)
{
  return vmsle_vx_i32m2_b16(op1, 15, 32);
}

/*
** test_vmsle_vx_i32m4_b8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_vl32_m16(vint32m4_t op1)
{
  return vmsle_vx_i32m4_b8(op1, -16, 32);
}

/*
** test_vmsle_vx_i32m4_b8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_vl32_15(vint32m4_t op1)
{
  return vmsle_vx_i32m4_b8(op1, 15, 32);
}

/*
** test_vmsle_vx_i32m8_b4_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_vl32_m16(vint32m8_t op1)
{
  return vmsle_vx_i32m8_b4(op1, -16, 32);
}

/*
** test_vmsle_vx_i32m8_b4_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_vl32_15(vint32m8_t op1)
{
  return vmsle_vx_i32m8_b4(op1, 15, 32);
}

/*
** test_vmsle_vx_i64m1_b64_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*-16
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_vl32_m16(vint64m1_t op1)
{
  return vmsle_vx_i64m1_b64(op1, -16, 32);
}

/*
** test_vmsle_vx_i64m1_b64_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*15
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_vl32_15(vint64m1_t op1)
{
  return vmsle_vx_i64m1_b64(op1, 15, 32);
}

/*
** test_vmsle_vx_i64m2_b32_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*-16
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_vl32_m16(vint64m2_t op1)
{
  return vmsle_vx_i64m2_b32(op1, -16, 32);
}

/*
** test_vmsle_vx_i64m2_b32_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*15
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_vl32_15(vint64m2_t op1)
{
  return vmsle_vx_i64m2_b32(op1, 15, 32);
}

/*
** test_vmsle_vx_i64m4_b16_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*-16
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_vl32_m16(vint64m4_t op1)
{
  return vmsle_vx_i64m4_b16(op1, -16, 32);
}

/*
** test_vmsle_vx_i64m4_b16_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*15
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_vl32_15(vint64m4_t op1)
{
  return vmsle_vx_i64m4_b16(op1, 15, 32);
}

/*
** test_vmsle_vx_i64m8_b8_vl32_m16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*-16
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_vl32_m16(vint64m8_t op1)
{
  return vmsle_vx_i64m8_b8(op1, -16, 32);
}

/*
** test_vmsle_vx_i64m8_b8_vl32_15:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vi\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*15
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_vl32_15(vint64m8_t op1)
{
  return vmsle_vx_i64m8_b8(op1, 15, 32);
}

/*
** test_vmsle_vv_i8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i8mf8_b64(vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmsle_vv_i8mf8_b64(op1, op2, vl);
}

/*
** test_vmsle_vv_i8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i8mf8_b64_vl31(vint8mf8_t op1, vint8mf8_t op2)
{
  return vmsle_vv_i8mf8_b64(op1, op2, 31);
}

/*
** test_vmsle_vv_i8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i8mf4_b32(vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmsle_vv_i8mf4_b32(op1, op2, vl);
}

/*
** test_vmsle_vv_i8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i8mf4_b32_vl31(vint8mf4_t op1, vint8mf4_t op2)
{
  return vmsle_vv_i8mf4_b32(op1, op2, 31);
}

/*
** test_vmsle_vv_i8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i8mf2_b16(vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmsle_vv_i8mf2_b16(op1, op2, vl);
}

/*
** test_vmsle_vv_i8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i8mf2_b16_vl31(vint8mf2_t op1, vint8mf2_t op2)
{
  return vmsle_vv_i8mf2_b16(op1, op2, 31);
}

/*
** test_vmsle_vv_i8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i8m1_b8(vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmsle_vv_i8m1_b8(op1, op2, vl);
}

/*
** test_vmsle_vv_i8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i8m1_b8_vl31(vint8m1_t op1, vint8m1_t op2)
{
  return vmsle_vv_i8m1_b8(op1, op2, 31);
}

/*
** test_vmsle_vv_i8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i8m2_b4(vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmsle_vv_i8m2_b4(op1, op2, vl);
}

/*
** test_vmsle_vv_i8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i8m2_b4_vl31(vint8m2_t op1, vint8m2_t op2)
{
  return vmsle_vv_i8m2_b4(op1, op2, 31);
}

/*
** test_vmsle_vv_i8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i8m4_b2(vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmsle_vv_i8m4_b2(op1, op2, vl);
}

/*
** test_vmsle_vv_i8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i8m4_b2_vl31(vint8m4_t op1, vint8m4_t op2)
{
  return vmsle_vv_i8m4_b2(op1, op2, 31);
}

/*
** test_vmsle_vv_i8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vv_i8m8_b1(vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmsle_vv_i8m8_b1(op1, op2, vl);
}

/*
** test_vmsle_vv_i8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vv_i8m8_b1_vl31(vint8m8_t op1, vint8m8_t op2)
{
  return vmsle_vv_i8m8_b1(op1, op2, 31);
}

/*
** test_vmsle_vv_i16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i16mf4_b64(vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmsle_vv_i16mf4_b64(op1, op2, vl);
}

/*
** test_vmsle_vv_i16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i16mf4_b64_vl31(vint16mf4_t op1, vint16mf4_t op2)
{
  return vmsle_vv_i16mf4_b64(op1, op2, 31);
}

/*
** test_vmsle_vv_i16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i16mf2_b32(vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmsle_vv_i16mf2_b32(op1, op2, vl);
}

/*
** test_vmsle_vv_i16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i16mf2_b32_vl31(vint16mf2_t op1, vint16mf2_t op2)
{
  return vmsle_vv_i16mf2_b32(op1, op2, 31);
}

/*
** test_vmsle_vv_i16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i16m1_b16(vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmsle_vv_i16m1_b16(op1, op2, vl);
}

/*
** test_vmsle_vv_i16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i16m1_b16_vl31(vint16m1_t op1, vint16m1_t op2)
{
  return vmsle_vv_i16m1_b16(op1, op2, 31);
}

/*
** test_vmsle_vv_i16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i16m2_b8(vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmsle_vv_i16m2_b8(op1, op2, vl);
}

/*
** test_vmsle_vv_i16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i16m2_b8_vl31(vint16m2_t op1, vint16m2_t op2)
{
  return vmsle_vv_i16m2_b8(op1, op2, 31);
}

/*
** test_vmsle_vv_i16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i16m4_b4(vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmsle_vv_i16m4_b4(op1, op2, vl);
}

/*
** test_vmsle_vv_i16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i16m4_b4_vl31(vint16m4_t op1, vint16m4_t op2)
{
  return vmsle_vv_i16m4_b4(op1, op2, 31);
}

/*
** test_vmsle_vv_i16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i16m8_b2(vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmsle_vv_i16m8_b2(op1, op2, vl);
}

/*
** test_vmsle_vv_i16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i16m8_b2_vl31(vint16m8_t op1, vint16m8_t op2)
{
  return vmsle_vv_i16m8_b2(op1, op2, 31);
}

/*
** test_vmsle_vv_i32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i32mf2_b64(vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmsle_vv_i32mf2_b64(op1, op2, vl);
}

/*
** test_vmsle_vv_i32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i32mf2_b64_vl31(vint32mf2_t op1, vint32mf2_t op2)
{
  return vmsle_vv_i32mf2_b64(op1, op2, 31);
}

/*
** test_vmsle_vv_i32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i32m1_b32(vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmsle_vv_i32m1_b32(op1, op2, vl);
}

/*
** test_vmsle_vv_i32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i32m1_b32_vl31(vint32m1_t op1, vint32m1_t op2)
{
  return vmsle_vv_i32m1_b32(op1, op2, 31);
}

/*
** test_vmsle_vv_i32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i32m2_b16(vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmsle_vv_i32m2_b16(op1, op2, vl);
}

/*
** test_vmsle_vv_i32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i32m2_b16_vl31(vint32m2_t op1, vint32m2_t op2)
{
  return vmsle_vv_i32m2_b16(op1, op2, 31);
}

/*
** test_vmsle_vv_i32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i32m4_b8(vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmsle_vv_i32m4_b8(op1, op2, vl);
}

/*
** test_vmsle_vv_i32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i32m4_b8_vl31(vint32m4_t op1, vint32m4_t op2)
{
  return vmsle_vv_i32m4_b8(op1, op2, 31);
}

/*
** test_vmsle_vv_i32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i32m8_b4(vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmsle_vv_i32m8_b4(op1, op2, vl);
}

/*
** test_vmsle_vv_i32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i32m8_b4_vl31(vint32m8_t op1, vint32m8_t op2)
{
  return vmsle_vv_i32m8_b4(op1, op2, 31);
}

/*
** test_vmsle_vv_i64m1_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i64m1_b64(vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmsle_vv_i64m1_b64(op1, op2, vl);
}

/*
** test_vmsle_vv_i64m1_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i64m1_b64_vl31(vint64m1_t op1, vint64m1_t op2)
{
  return vmsle_vv_i64m1_b64(op1, op2, 31);
}

/*
** test_vmsle_vv_i64m2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i64m2_b32(vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmsle_vv_i64m2_b32(op1, op2, vl);
}

/*
** test_vmsle_vv_i64m2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i64m2_b32_vl31(vint64m2_t op1, vint64m2_t op2)
{
  return vmsle_vv_i64m2_b32(op1, op2, 31);
}

/*
** test_vmsle_vv_i64m4_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i64m4_b16(vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmsle_vv_i64m4_b16(op1, op2, vl);
}

/*
** test_vmsle_vv_i64m4_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i64m4_b16_vl31(vint64m4_t op1, vint64m4_t op2)
{
  return vmsle_vv_i64m4_b16(op1, op2, 31);
}

/*
** test_vmsle_vv_i64m8_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i64m8_b8(vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmsle_vv_i64m8_b8(op1, op2, vl);
}

/*
** test_vmsle_vv_i64m8_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i64m8_b8_vl31(vint64m8_t op1, vint64m8_t op2)
{
  return vmsle_vv_i64m8_b8(op1, op2, 31);
}

/*
** test_vmsle_vv_i8mf8_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2, size_t vl)
{
  return vmsle_vv_i8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i8mf8_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i8mf8_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmsle_vv_i8mf8_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i8mf4_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2, size_t vl)
{
  return vmsle_vv_i8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i8mf4_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i8mf4_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmsle_vv_i8mf4_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i8mf2_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2, size_t vl)
{
  return vmsle_vv_i8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i8mf2_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i8mf2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmsle_vv_i8mf2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i8m1_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2, size_t vl)
{
  return vmsle_vv_i8m1_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i8m1_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i8m1_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vmsle_vv_i8m1_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i8m2_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2, size_t vl)
{
  return vmsle_vv_i8m2_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i8m2_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i8m2_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2)
{
  return vmsle_vv_i8m2_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i8m4_b2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2, size_t vl)
{
  return vmsle_vv_i8m4_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i8m4_b2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i8m4_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2)
{
  return vmsle_vv_i8m4_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i8m8_b1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vv_i8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2, size_t vl)
{
  return vmsle_vv_i8m8_b1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i8m8_b1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vv_i8m8_b1_m_vl31(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2)
{
  return vmsle_vv_i8m8_b1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i16mf4_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2, size_t vl)
{
  return vmsle_vv_i16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i16mf4_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i16mf4_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmsle_vv_i16mf4_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i16mf2_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2, size_t vl)
{
  return vmsle_vv_i16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i16mf2_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i16mf2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmsle_vv_i16mf2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i16m1_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2, size_t vl)
{
  return vmsle_vv_i16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i16m1_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i16m1_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vmsle_vv_i16m1_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i16m2_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2, size_t vl)
{
  return vmsle_vv_i16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i16m2_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i16m2_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2)
{
  return vmsle_vv_i16m2_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i16m4_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2, size_t vl)
{
  return vmsle_vv_i16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i16m4_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i16m4_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2)
{
  return vmsle_vv_i16m4_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i16m8_b2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2, size_t vl)
{
  return vmsle_vv_i16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i16m8_b2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i16m8_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2)
{
  return vmsle_vv_i16m8_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i32mf2_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2, size_t vl)
{
  return vmsle_vv_i32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i32mf2_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i32mf2_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmsle_vv_i32mf2_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i32m1_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2, size_t vl)
{
  return vmsle_vv_i32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i32m1_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i32m1_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vmsle_vv_i32m1_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i32m2_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2, size_t vl)
{
  return vmsle_vv_i32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i32m2_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i32m2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2)
{
  return vmsle_vv_i32m2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i32m4_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2, size_t vl)
{
  return vmsle_vv_i32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i32m4_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i32m4_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2)
{
  return vmsle_vv_i32m4_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i32m8_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2, size_t vl)
{
  return vmsle_vv_i32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i32m8_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i32m8_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2)
{
  return vmsle_vv_i32m8_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i64m1_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2, size_t vl)
{
  return vmsle_vv_i64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i64m1_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i64m1_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vmsle_vv_i64m1_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i64m2_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2, size_t vl)
{
  return vmsle_vv_i64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i64m2_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i64m2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2)
{
  return vmsle_vv_i64m2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i64m4_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2, size_t vl)
{
  return vmsle_vv_i64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i64m4_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i64m4_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2)
{
  return vmsle_vv_i64m4_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i64m8_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2, size_t vl)
{
  return vmsle_vv_i64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vv_i64m8_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i64m8_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2)
{
  return vmsle_vv_i64m8_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vv_i8mf8_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i8mf8_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, vint8mf8_t op2)
{
  return vmsle_vv_i8mf8_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i8mf4_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i8mf4_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, vint8mf4_t op2)
{
  return vmsle_vv_i8mf4_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i8mf2_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i8mf2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, vint8mf2_t op2)
{
  return vmsle_vv_i8mf2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i8m1_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i8m1_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, vint8m1_t op2)
{
  return vmsle_vv_i8m1_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i8m2_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i8m2_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, vint8m2_t op2)
{
  return vmsle_vv_i8m2_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i8m4_b2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i8m4_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, vint8m4_t op2)
{
  return vmsle_vv_i8m4_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i8m8_b1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vv_i8m8_b1_m_vl32(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, vint8m8_t op2)
{
  return vmsle_vv_i8m8_b1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i16mf4_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i16mf4_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, vint16mf4_t op2)
{
  return vmsle_vv_i16mf4_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i16mf2_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i16mf2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, vint16mf2_t op2)
{
  return vmsle_vv_i16mf2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i16m1_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i16m1_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, vint16m1_t op2)
{
  return vmsle_vv_i16m1_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i16m2_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i16m2_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, vint16m2_t op2)
{
  return vmsle_vv_i16m2_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i16m4_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i16m4_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, vint16m4_t op2)
{
  return vmsle_vv_i16m4_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i16m8_b2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i16m8_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, vint16m8_t op2)
{
  return vmsle_vv_i16m8_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i32mf2_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i32mf2_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, vint32mf2_t op2)
{
  return vmsle_vv_i32mf2_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i32m1_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i32m1_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, vint32m1_t op2)
{
  return vmsle_vv_i32m1_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i32m2_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i32m2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, vint32m2_t op2)
{
  return vmsle_vv_i32m2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i32m4_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i32m4_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, vint32m4_t op2)
{
  return vmsle_vv_i32m4_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i32m8_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i32m8_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, vint32m8_t op2)
{
  return vmsle_vv_i32m8_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i64m1_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i64m1_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, vint64m1_t op2)
{
  return vmsle_vv_i64m1_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i64m2_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i64m2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, vint64m2_t op2)
{
  return vmsle_vv_i64m2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i64m4_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i64m4_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, vint64m4_t op2)
{
  return vmsle_vv_i64m4_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i64m8_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i64m8_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, vint64m8_t op2)
{
  return vmsle_vv_i64m8_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vv_i8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i8mf8_b64_vl32(vint8mf8_t op1, vint8mf8_t op2)
{
  return vmsle_vv_i8mf8_b64(op1, op2, 32);
}

/*
** test_vmsle_vv_i8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i8mf4_b32_vl32(vint8mf4_t op1, vint8mf4_t op2)
{
  return vmsle_vv_i8mf4_b32(op1, op2, 32);
}

/*
** test_vmsle_vv_i8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i8mf2_b16_vl32(vint8mf2_t op1, vint8mf2_t op2)
{
  return vmsle_vv_i8mf2_b16(op1, op2, 32);
}

/*
** test_vmsle_vv_i8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i8m1_b8_vl32(vint8m1_t op1, vint8m1_t op2)
{
  return vmsle_vv_i8m1_b8(op1, op2, 32);
}

/*
** test_vmsle_vv_i8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i8m2_b4_vl32(vint8m2_t op1, vint8m2_t op2)
{
  return vmsle_vv_i8m2_b4(op1, op2, 32);
}

/*
** test_vmsle_vv_i8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i8m4_b2_vl32(vint8m4_t op1, vint8m4_t op2)
{
  return vmsle_vv_i8m4_b2(op1, op2, 32);
}

/*
** test_vmsle_vv_i8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vv_i8m8_b1_vl32(vint8m8_t op1, vint8m8_t op2)
{
  return vmsle_vv_i8m8_b1(op1, op2, 32);
}

/*
** test_vmsle_vv_i16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i16mf4_b64_vl32(vint16mf4_t op1, vint16mf4_t op2)
{
  return vmsle_vv_i16mf4_b64(op1, op2, 32);
}

/*
** test_vmsle_vv_i16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i16mf2_b32_vl32(vint16mf2_t op1, vint16mf2_t op2)
{
  return vmsle_vv_i16mf2_b32(op1, op2, 32);
}

/*
** test_vmsle_vv_i16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i16m1_b16_vl32(vint16m1_t op1, vint16m1_t op2)
{
  return vmsle_vv_i16m1_b16(op1, op2, 32);
}

/*
** test_vmsle_vv_i16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i16m2_b8_vl32(vint16m2_t op1, vint16m2_t op2)
{
  return vmsle_vv_i16m2_b8(op1, op2, 32);
}

/*
** test_vmsle_vv_i16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i16m4_b4_vl32(vint16m4_t op1, vint16m4_t op2)
{
  return vmsle_vv_i16m4_b4(op1, op2, 32);
}

/*
** test_vmsle_vv_i16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vv_i16m8_b2_vl32(vint16m8_t op1, vint16m8_t op2)
{
  return vmsle_vv_i16m8_b2(op1, op2, 32);
}

/*
** test_vmsle_vv_i32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i32mf2_b64_vl32(vint32mf2_t op1, vint32mf2_t op2)
{
  return vmsle_vv_i32mf2_b64(op1, op2, 32);
}

/*
** test_vmsle_vv_i32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i32m1_b32_vl32(vint32m1_t op1, vint32m1_t op2)
{
  return vmsle_vv_i32m1_b32(op1, op2, 32);
}

/*
** test_vmsle_vv_i32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i32m2_b16_vl32(vint32m2_t op1, vint32m2_t op2)
{
  return vmsle_vv_i32m2_b16(op1, op2, 32);
}

/*
** test_vmsle_vv_i32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i32m4_b8_vl32(vint32m4_t op1, vint32m4_t op2)
{
  return vmsle_vv_i32m4_b8(op1, op2, 32);
}

/*
** test_vmsle_vv_i32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vv_i32m8_b4_vl32(vint32m8_t op1, vint32m8_t op2)
{
  return vmsle_vv_i32m8_b4(op1, op2, 32);
}

/*
** test_vmsle_vv_i64m1_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vv_i64m1_b64_vl32(vint64m1_t op1, vint64m1_t op2)
{
  return vmsle_vv_i64m1_b64(op1, op2, 32);
}

/*
** test_vmsle_vv_i64m2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vv_i64m2_b32_vl32(vint64m2_t op1, vint64m2_t op2)
{
  return vmsle_vv_i64m2_b32(op1, op2, 32);
}

/*
** test_vmsle_vv_i64m4_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vv_i64m4_b16_vl32(vint64m4_t op1, vint64m4_t op2)
{
  return vmsle_vv_i64m4_b16(op1, op2, 32);
}

/*
** test_vmsle_vv_i64m8_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vv_i64m8_b8_vl32(vint64m8_t op1, vint64m8_t op2)
{
  return vmsle_vv_i64m8_b8(op1, op2, 32);
}

/*
** test_vmsle_vx_i8mf8_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64(vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8mf8_b64(op1, op2, vl);
}

/*
** test_vmsle_vx_i8mf8_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_vl31(vint8mf8_t op1, int8_t op2)
{
  return vmsle_vx_i8mf8_b64(op1, op2, 31);
}

/*
** test_vmsle_vx_i8mf4_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32(vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8mf4_b32(op1, op2, vl);
}

/*
** test_vmsle_vx_i8mf4_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_vl31(vint8mf4_t op1, int8_t op2)
{
  return vmsle_vx_i8mf4_b32(op1, op2, 31);
}

/*
** test_vmsle_vx_i8mf2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16(vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8mf2_b16(op1, op2, vl);
}

/*
** test_vmsle_vx_i8mf2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_vl31(vint8mf2_t op1, int8_t op2)
{
  return vmsle_vx_i8mf2_b16(op1, op2, 31);
}

/*
** test_vmsle_vx_i8m1_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8(vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m1_b8(op1, op2, vl);
}

/*
** test_vmsle_vx_i8m1_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_vl31(vint8m1_t op1, int8_t op2)
{
  return vmsle_vx_i8m1_b8(op1, op2, 31);
}

/*
** test_vmsle_vx_i8m2_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4(vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m2_b4(op1, op2, vl);
}

/*
** test_vmsle_vx_i8m2_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_vl31(vint8m2_t op1, int8_t op2)
{
  return vmsle_vx_i8m2_b4(op1, op2, 31);
}

/*
** test_vmsle_vx_i8m4_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2(vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m4_b2(op1, op2, vl);
}

/*
** test_vmsle_vx_i8m4_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_vl31(vint8m4_t op1, int8_t op2)
{
  return vmsle_vx_i8m4_b2(op1, op2, 31);
}

/*
** test_vmsle_vx_i8m8_b1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1(vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m8_b1(op1, op2, vl);
}

/*
** test_vmsle_vx_i8m8_b1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_vl31(vint8m8_t op1, int8_t op2)
{
  return vmsle_vx_i8m8_b1(op1, op2, 31);
}

/*
** test_vmsle_vx_i16mf4_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64(vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16mf4_b64(op1, op2, vl);
}

/*
** test_vmsle_vx_i16mf4_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_vl31(vint16mf4_t op1, int16_t op2)
{
  return vmsle_vx_i16mf4_b64(op1, op2, 31);
}

/*
** test_vmsle_vx_i16mf2_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32(vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16mf2_b32(op1, op2, vl);
}

/*
** test_vmsle_vx_i16mf2_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_vl31(vint16mf2_t op1, int16_t op2)
{
  return vmsle_vx_i16mf2_b32(op1, op2, 31);
}

/*
** test_vmsle_vx_i16m1_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16(vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m1_b16(op1, op2, vl);
}

/*
** test_vmsle_vx_i16m1_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_vl31(vint16m1_t op1, int16_t op2)
{
  return vmsle_vx_i16m1_b16(op1, op2, 31);
}

/*
** test_vmsle_vx_i16m2_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8(vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m2_b8(op1, op2, vl);
}

/*
** test_vmsle_vx_i16m2_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_vl31(vint16m2_t op1, int16_t op2)
{
  return vmsle_vx_i16m2_b8(op1, op2, 31);
}

/*
** test_vmsle_vx_i16m4_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4(vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m4_b4(op1, op2, vl);
}

/*
** test_vmsle_vx_i16m4_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_vl31(vint16m4_t op1, int16_t op2)
{
  return vmsle_vx_i16m4_b4(op1, op2, 31);
}

/*
** test_vmsle_vx_i16m8_b2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2(vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m8_b2(op1, op2, vl);
}

/*
** test_vmsle_vx_i16m8_b2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_vl31(vint16m8_t op1, int16_t op2)
{
  return vmsle_vx_i16m8_b2(op1, op2, 31);
}

/*
** test_vmsle_vx_i32mf2_b64:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64(vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32mf2_b64(op1, op2, vl);
}

/*
** test_vmsle_vx_i32mf2_b64_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_vl31(vint32mf2_t op1, int32_t op2)
{
  return vmsle_vx_i32mf2_b64(op1, op2, 31);
}

/*
** test_vmsle_vx_i32m1_b32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32(vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m1_b32(op1, op2, vl);
}

/*
** test_vmsle_vx_i32m1_b32_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_vl31(vint32m1_t op1, int32_t op2)
{
  return vmsle_vx_i32m1_b32(op1, op2, 31);
}

/*
** test_vmsle_vx_i32m2_b16:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16(vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m2_b16(op1, op2, vl);
}

/*
** test_vmsle_vx_i32m2_b16_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_vl31(vint32m2_t op1, int32_t op2)
{
  return vmsle_vx_i32m2_b16(op1, op2, 31);
}

/*
** test_vmsle_vx_i32m4_b8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8(vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m4_b8(op1, op2, vl);
}

/*
** test_vmsle_vx_i32m4_b8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_vl31(vint32m4_t op1, int32_t op2)
{
  return vmsle_vx_i32m4_b8(op1, op2, 31);
}

/*
** test_vmsle_vx_i32m8_b4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4(vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m8_b4(op1, op2, vl);
}

/*
** test_vmsle_vx_i32m8_b4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_vl31(vint32m8_t op1, int32_t op2)
{
  return vmsle_vx_i32m8_b4(op1, op2, 31);
}

/*
** test_vmsle_vx_i64m1_b64:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64(vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m1_b64(op1, op2, vl);
}

/*
** test_vmsle_vx_i64m1_b64_vl31:  { target { rv64 } }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_vl31(vint64m1_t op1, int64_t op2)
{
  return vmsle_vx_i64m1_b64(op1, op2, 31);
}

/*
** test_vmsle_vx_i64m2_b32:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32(vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m2_b32(op1, op2, vl);
}

/*
** test_vmsle_vx_i64m2_b32_vl31:  { target { rv64 } }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_vl31(vint64m2_t op1, int64_t op2)
{
  return vmsle_vx_i64m2_b32(op1, op2, 31);
}

/*
** test_vmsle_vx_i64m4_b16:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16(vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m4_b16(op1, op2, vl);
}

/*
** test_vmsle_vx_i64m4_b16_vl31:  { target { rv64 } }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_vl31(vint64m4_t op1, int64_t op2)
{
  return vmsle_vx_i64m4_b16(op1, op2, 31);
}

/*
** test_vmsle_vx_i64m8_b8:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8(vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m8_b8(op1, op2, vl);
}

/*
** test_vmsle_vx_i64m8_b8_vl31:  { target { rv64 } }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_vl31(vint64m8_t op1, int64_t op2)
{
  return vmsle_vx_i64m8_b8(op1, op2, 31);
}

/*
** test_vmsle_vx_i8mf8_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_m(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i8mf8_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i8mf4_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_m(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i8mf4_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i8mf2_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i8mf2_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i8m1_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_m(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i8m1_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i8m2_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_m(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i8m2_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i8m4_b2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_m(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i8m4_b2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i8m8_b1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_m(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2, size_t vl)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i8m8_b1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_m_vl31(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i16mf4_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_m(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i16mf4_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i16mf2_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i16mf2_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i16m1_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_m(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i16m1_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i16m2_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_m(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i16m2_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i16m4_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_m(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i16m4_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i16m8_b2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_m(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2, size_t vl)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i16m8_b2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_m_vl31(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i32mf2_b64_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_m(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i32mf2_b64_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i32m1_b32_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_m(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i32m1_b32_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i32m2_b16_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_m(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i32m2_b16_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i32m4_b8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_m(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i32m4_b8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i32m8_b4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_m(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2, size_t vl)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i32m8_b4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_m_vl31(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i64m1_b64_m:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_m(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i64m1_b64_m_vl31:  { target { rv64 } }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_m_vl31(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i64m2_b32_m:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_m(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i64m2_b32_m_vl31:  { target { rv64 } }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_m_vl31(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i64m4_b16_m:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_m(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i64m4_b16_m_vl31:  { target { rv64 } }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_m_vl31(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i64m8_b8_m:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_m(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, op2, vl);
}

/*
** test_vmsle_vx_i64m8_b8_m_vl31:  { target { rv64 } }
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_m_vl31(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, op2, 31);
}

/*
** test_vmsle_vx_i8mf8_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint8mf8_t op1, int8_t op2)
{
  return vmsle_vx_i8mf8_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i8mf4_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint8mf4_t op1, int8_t op2)
{
  return vmsle_vx_i8mf4_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i8mf2_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint8mf2_t op1, int8_t op2)
{
  return vmsle_vx_i8mf2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i8m1_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint8m1_t op1, int8_t op2)
{
  return vmsle_vx_i8m1_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i8m2_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint8m2_t op1, int8_t op2)
{
  return vmsle_vx_i8m2_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i8m4_b2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vint8m4_t op1, int8_t op2)
{
  return vmsle_vx_i8m4_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i8m8_b1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_m_vl32(vbool1_t mask, vbool1_t maskedoff, vint8m8_t op1, int8_t op2)
{
  return vmsle_vx_i8m8_b1_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i16mf4_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint16mf4_t op1, int16_t op2)
{
  return vmsle_vx_i16mf4_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i16mf2_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint16mf2_t op1, int16_t op2)
{
  return vmsle_vx_i16mf2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i16m1_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint16m1_t op1, int16_t op2)
{
  return vmsle_vx_i16m1_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i16m2_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint16m2_t op1, int16_t op2)
{
  return vmsle_vx_i16m2_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i16m4_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint16m4_t op1, int16_t op2)
{
  return vmsle_vx_i16m4_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i16m8_b2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_m_vl32(vbool2_t mask, vbool2_t maskedoff, vint16m8_t op1, int16_t op2)
{
  return vmsle_vx_i16m8_b2_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i32mf2_b64_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint32mf2_t op1, int32_t op2)
{
  return vmsle_vx_i32mf2_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i32m1_b32_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint32m1_t op1, int32_t op2)
{
  return vmsle_vx_i32m1_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i32m2_b16_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint32m2_t op1, int32_t op2)
{
  return vmsle_vx_i32m2_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i32m4_b8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint32m4_t op1, int32_t op2)
{
  return vmsle_vx_i32m4_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i32m8_b4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_m_vl32(vbool4_t mask, vbool4_t maskedoff, vint32m8_t op1, int32_t op2)
{
  return vmsle_vx_i32m8_b4_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i64m1_b64_m_vl32:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_m_vl32(vbool64_t mask, vbool64_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vmsle_vx_i64m1_b64_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i64m2_b32_m_vl32:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_m_vl32(vbool32_t mask, vbool32_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vmsle_vx_i64m2_b32_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i64m4_b16_m_vl32:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_m_vl32(vbool16_t mask, vbool16_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vmsle_vx_i64m4_b16_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i64m8_b8_m_vl32:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*v0\.t
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_m_vl32(vbool8_t mask, vbool8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vmsle_vx_i64m8_b8_m(mask, maskedoff, op1, op2, 32);
}

/*
** test_vmsle_vx_i8mf8_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i8mf8_b64_vl32(vint8mf8_t op1, int8_t op2)
{
  return vmsle_vx_i8mf8_b64(op1, op2, 32);
}

/*
** test_vmsle_vx_i8mf4_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i8mf4_b32_vl32(vint8mf4_t op1, int8_t op2)
{
  return vmsle_vx_i8mf4_b32(op1, op2, 32);
}

/*
** test_vmsle_vx_i8mf2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i8mf2_b16_vl32(vint8mf2_t op1, int8_t op2)
{
  return vmsle_vx_i8mf2_b16(op1, op2, 32);
}

/*
** test_vmsle_vx_i8m1_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i8m1_b8_vl32(vint8m1_t op1, int8_t op2)
{
  return vmsle_vx_i8m1_b8(op1, op2, 32);
}

/*
** test_vmsle_vx_i8m2_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i8m2_b4_vl32(vint8m2_t op1, int8_t op2)
{
  return vmsle_vx_i8m2_b4(op1, op2, 32);
}

/*
** test_vmsle_vx_i8m4_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i8m4_b2_vl32(vint8m4_t op1, int8_t op2)
{
  return vmsle_vx_i8m4_b2(op1, op2, 32);
}

/*
** test_vmsle_vx_i8m8_b1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool1_t 
test_vmsle_vx_i8m8_b1_vl32(vint8m8_t op1, int8_t op2)
{
  return vmsle_vx_i8m8_b1(op1, op2, 32);
}

/*
** test_vmsle_vx_i16mf4_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i16mf4_b64_vl32(vint16mf4_t op1, int16_t op2)
{
  return vmsle_vx_i16mf4_b64(op1, op2, 32);
}

/*
** test_vmsle_vx_i16mf2_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i16mf2_b32_vl32(vint16mf2_t op1, int16_t op2)
{
  return vmsle_vx_i16mf2_b32(op1, op2, 32);
}

/*
** test_vmsle_vx_i16m1_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i16m1_b16_vl32(vint16m1_t op1, int16_t op2)
{
  return vmsle_vx_i16m1_b16(op1, op2, 32);
}

/*
** test_vmsle_vx_i16m2_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i16m2_b8_vl32(vint16m2_t op1, int16_t op2)
{
  return vmsle_vx_i16m2_b8(op1, op2, 32);
}

/*
** test_vmsle_vx_i16m4_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i16m4_b4_vl32(vint16m4_t op1, int16_t op2)
{
  return vmsle_vx_i16m4_b4(op1, op2, 32);
}

/*
** test_vmsle_vx_i16m8_b2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool2_t 
test_vmsle_vx_i16m8_b2_vl32(vint16m8_t op1, int16_t op2)
{
  return vmsle_vx_i16m8_b2(op1, op2, 32);
}

/*
** test_vmsle_vx_i32mf2_b64_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i32mf2_b64_vl32(vint32mf2_t op1, int32_t op2)
{
  return vmsle_vx_i32mf2_b64(op1, op2, 32);
}

/*
** test_vmsle_vx_i32m1_b32_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i32m1_b32_vl32(vint32m1_t op1, int32_t op2)
{
  return vmsle_vx_i32m1_b32(op1, op2, 32);
}

/*
** test_vmsle_vx_i32m2_b16_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i32m2_b16_vl32(vint32m2_t op1, int32_t op2)
{
  return vmsle_vx_i32m2_b16(op1, op2, 32);
}

/*
** test_vmsle_vx_i32m4_b8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i32m4_b8_vl32(vint32m4_t op1, int32_t op2)
{
  return vmsle_vx_i32m4_b8(op1, op2, 32);
}

/*
** test_vmsle_vx_i32m8_b4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool4_t 
test_vmsle_vx_i32m8_b4_vl32(vint32m8_t op1, int32_t op2)
{
  return vmsle_vx_i32m8_b4(op1, op2, 32);
}

/*
** test_vmsle_vx_i64m1_b64_vl32:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool64_t 
test_vmsle_vx_i64m1_b64_vl32(vint64m1_t op1, int64_t op2)
{
  return vmsle_vx_i64m1_b64(op1, op2, 32);
}

/*
** test_vmsle_vx_i64m2_b32_vl32:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool32_t 
test_vmsle_vx_i64m2_b32_vl32(vint64m2_t op1, int64_t op2)
{
  return vmsle_vx_i64m2_b32(op1, op2, 32);
}

/*
** test_vmsle_vx_i64m4_b16_vl32:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool16_t 
test_vmsle_vx_i64m4_b16_vl32(vint64m4_t op1, int64_t op2)
{
  return vmsle_vx_i64m4_b16(op1, op2, 32);
}

/*
** test_vmsle_vx_i64m8_b8_vl32:  { target { rv64 } }
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vmsle\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[08]|v16|v24),\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])
**  ...
**  ret
*/
vbool8_t 
test_vmsle_vx_i64m8_b8_vl32(vint64m8_t op1, int64_t op2)
{
  return vmsle_vx_i64m8_b8(op1, op2, 32);
}

