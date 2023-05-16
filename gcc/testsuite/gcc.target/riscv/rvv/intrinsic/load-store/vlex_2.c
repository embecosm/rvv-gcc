/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vle8_v_i8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8mf2_t
test_vle8_v_i8mf2_m_vl32 (vbool16_t mask, vint8mf2_t dest, int8_t *base)
{
  return vle8_v_i8mf2_m (mask, dest, base, 32);
}

/*
** test_vle8_v_i8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m1_t
test_vle8_v_i8m1_vl32 (int8_t *base)
{
  return vle8_v_i8m1 (base, 32);
}

/*
** test_vle8_v_i8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m1_t
test_vle8_v_i8m1_m_vl32 (vbool8_t mask, vint8m1_t dest, int8_t *base)
{
  return vle8_v_i8m1_m (mask, dest, base, 32);
}

/*
** test_vle8_v_i8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m2_t
test_vle8_v_i8m2_vl32 (int8_t *base)
{
  return vle8_v_i8m2 (base, 32);
}

/*
** test_vle8_v_i8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m2_t
test_vle8_v_i8m2_m_vl32 (vbool4_t mask, vint8m2_t dest, int8_t *base)
{
  return vle8_v_i8m2_m (mask, dest, base, 32);
}

/*
** test_vle8_v_i8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m4_t
test_vle8_v_i8m4_vl32 (int8_t *base)
{
  return vle8_v_i8m4 (base, 32);
}

/*
** test_vle8_v_i8m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m4_t
test_vle8_v_i8m4_m_vl32 (vbool2_t mask, vint8m4_t dest, int8_t *base)
{
  return vle8_v_i8m4_m (mask, dest, base, 32);
}

/*
** test_vle8_v_i8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint8m8_t
test_vle8_v_i8m8_vl32 (int8_t *base)
{
  return vle8_v_i8m8 (base, 32);
}

/*
** test_vle8_v_i8m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint8m8_t
test_vle8_v_i8m8_m_vl32 (vbool1_t mask, vint8m8_t dest, int8_t *base)
{
  return vle8_v_i8m8_m (mask, dest, base, 32);
}

/*
** test_vle16_v_i16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf4_t
test_vle16_v_i16mf4_vl32 (int16_t *base)
{
  return vle16_v_i16mf4 (base, 32);
}

/*
** test_vle16_v_i16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf4_t
test_vle16_v_i16mf4_m_vl32 (vbool64_t mask, vint16mf4_t dest, int16_t *base)
{
  return vle16_v_i16mf4_m (mask, dest, base, 32);
}

/*
** test_vle16_v_i16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16mf2_t
test_vle16_v_i16mf2_vl32 (int16_t *base)
{
  return vle16_v_i16mf2 (base, 32);
}

/*
** test_vle16_v_i16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16mf2_t
test_vle16_v_i16mf2_m_vl32 (vbool32_t mask, vint16mf2_t dest, int16_t *base)
{
  return vle16_v_i16mf2_m (mask, dest, base, 32);
}

/*
** test_vle16_v_i16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m1_t
test_vle16_v_i16m1_vl32 (int16_t *base)
{
  return vle16_v_i16m1 (base, 32);
}

/*
** test_vle16_v_i16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m1_t
test_vle16_v_i16m1_m_vl32 (vbool16_t mask, vint16m1_t dest, int16_t *base)
{
  return vle16_v_i16m1_m (mask, dest, base, 32);
}

/*
** test_vle16_v_i16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m2_t
test_vle16_v_i16m2_vl32 (int16_t *base)
{
  return vle16_v_i16m2 (base, 32);
}

/*
** test_vle16_v_i16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m2_t
test_vle16_v_i16m2_m_vl32 (vbool8_t mask, vint16m2_t dest, int16_t *base)
{
  return vle16_v_i16m2_m (mask, dest, base, 32);
}

/*
** test_vle16_v_i16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m4_t
test_vle16_v_i16m4_vl32 (int16_t *base)
{
  return vle16_v_i16m4 (base, 32);
}

/*
** test_vle16_v_i16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m4_t
test_vle16_v_i16m4_m_vl32 (vbool4_t mask, vint16m4_t dest, int16_t *base)
{
  return vle16_v_i16m4_m (mask, dest, base, 32);
}

/*
** test_vle16_v_i16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint16m8_t
test_vle16_v_i16m8_vl32 (int16_t *base)
{
  return vle16_v_i16m8 (base, 32);
}

/*
** test_vle16_v_i16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint16m8_t
test_vle16_v_i16m8_m_vl32 (vbool2_t mask, vint16m8_t dest, int16_t *base)
{
  return vle16_v_i16m8_m (mask, dest, base, 32);
}

/*
** test_vle32_v_i32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32mf2_t
test_vle32_v_i32mf2_vl32 (int32_t *base)
{
  return vle32_v_i32mf2 (base, 32);
}

/*
** test_vle32_v_i32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32mf2_t
test_vle32_v_i32mf2_m_vl32 (vbool64_t mask, vint32mf2_t dest, int32_t *base)
{
  return vle32_v_i32mf2_m (mask, dest, base, 32);
}

/*
** test_vle32_v_i32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m1_t
test_vle32_v_i32m1_vl32 (int32_t *base)
{
  return vle32_v_i32m1 (base, 32);
}

/*
** test_vle32_v_i32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m1_t
test_vle32_v_i32m1_m_vl32 (vbool32_t mask, vint32m1_t dest, int32_t *base)
{
  return vle32_v_i32m1_m (mask, dest, base, 32);
}

/*
** test_vle32_v_i32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m2_t
test_vle32_v_i32m2_vl32 (int32_t *base)
{
  return vle32_v_i32m2 (base, 32);
}

/*
** test_vle32_v_i32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m2_t
test_vle32_v_i32m2_m_vl32 (vbool16_t mask, vint32m2_t dest, int32_t *base)
{
  return vle32_v_i32m2_m (mask, dest, base, 32);
}

/*
** test_vle32_v_i32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m4_t
test_vle32_v_i32m4_vl32 (int32_t *base)
{
  return vle32_v_i32m4 (base, 32);
}

/*
** test_vle32_v_i32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m4_t
test_vle32_v_i32m4_m_vl32 (vbool8_t mask, vint32m4_t dest, int32_t *base)
{
  return vle32_v_i32m4_m (mask, dest, base, 32);
}

/*
** test_vle32_v_i32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint32m8_t
test_vle32_v_i32m8_vl32 (int32_t *base)
{
  return vle32_v_i32m8 (base, 32);
}

/*
** test_vle32_v_i32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint32m8_t
test_vle32_v_i32m8_m_vl32 (vbool4_t mask, vint32m8_t dest, int32_t *base)
{
  return vle32_v_i32m8_m (mask, dest, base, 32);
}

/*
** test_vle64_v_i64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m1_t
test_vle64_v_i64m1_vl32 (int64_t *base)
{
  return vle64_v_i64m1 (base, 32);
}

/*
** test_vle64_v_i64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m1_t
test_vle64_v_i64m1_m_vl32 (vbool64_t mask, vint64m1_t dest, int64_t *base)
{
  return vle64_v_i64m1_m (mask, dest, base, 32);
}

/*
** test_vle64_v_i64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m2_t
test_vle64_v_i64m2_vl32 (int64_t *base)
{
  return vle64_v_i64m2 (base, 32);
}

/*
** test_vle64_v_i64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m2_t
test_vle64_v_i64m2_m_vl32 (vbool32_t mask, vint64m2_t dest, int64_t *base)
{
  return vle64_v_i64m2_m (mask, dest, base, 32);
}

/*
** test_vle64_v_i64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m4_t
test_vle64_v_i64m4_vl32 (int64_t *base)
{
  return vle64_v_i64m4 (base, 32);
}

/*
** test_vle64_v_i64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m4_t
test_vle64_v_i64m4_m_vl32 (vbool16_t mask, vint64m4_t dest, int64_t *base)
{
  return vle64_v_i64m4_m (mask, dest, base, 32);
}

/*
** test_vle64_v_i64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vint64m8_t
test_vle64_v_i64m8_vl32 (int64_t *base)
{
  return vle64_v_i64m8 (base, 32);
}

/*
** test_vle64_v_i64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vint64m8_t
test_vle64_v_i64m8_m_vl32 (vbool8_t mask, vint64m8_t dest, int64_t *base)
{
  return vle64_v_i64m8_m (mask, dest, base, 32);
}

/*
** test_vle8_v_u8mf8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf8_t
test_vle8_v_u8mf8_vl32 (uint8_t *base)
{
  return vle8_v_u8mf8 (base, 32);
}

/*
** test_vle8_v_u8mf8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8_t
test_vle8_v_u8mf8_m_vl32 (vbool64_t mask, vuint8mf8_t dest, uint8_t *base)
{
  return vle8_v_u8mf8_m (mask, dest, base, 32);
}

/*
** test_vle8_v_u8mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf4_t
test_vle8_v_u8mf4_vl32 (uint8_t *base)
{
  return vle8_v_u8mf4 (base, 32);
}

/*
** test_vle8_v_u8mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4_t
test_vle8_v_u8mf4_m_vl32 (vbool32_t mask, vuint8mf4_t dest, uint8_t *base)
{
  return vle8_v_u8mf4_m (mask, dest, base, 32);
}

/*
** test_vle8_v_u8mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8mf2_t
test_vle8_v_u8mf2_vl32 (uint8_t *base)
{
  return vle8_v_u8mf2 (base, 32);
}

/*
** test_vle8_v_u8mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2_t
test_vle8_v_u8mf2_m_vl32 (vbool16_t mask, vuint8mf2_t dest, uint8_t *base)
{
  return vle8_v_u8mf2_m (mask, dest, base, 32);
}

/*
** test_vle8_v_u8m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m1_t
test_vle8_v_u8m1_vl32 (uint8_t *base)
{
  return vle8_v_u8m1 (base, 32);
}

/*
** test_vle8_v_u8m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m1_t
test_vle8_v_u8m1_m_vl32 (vbool8_t mask, vuint8m1_t dest, uint8_t *base)
{
  return vle8_v_u8m1_m (mask, dest, base, 32);
}

/*
** test_vle8_v_u8m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m2_t
test_vle8_v_u8m2_vl32 (uint8_t *base)
{
  return vle8_v_u8m2 (base, 32);
}

/*
** test_vle8_v_u8m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m2_t
test_vle8_v_u8m2_m_vl32 (vbool4_t mask, vuint8m2_t dest, uint8_t *base)
{
  return vle8_v_u8m2_m (mask, dest, base, 32);
}

/*
** test_vle8_v_u8m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m4_t
test_vle8_v_u8m4_vl32 (uint8_t *base)
{
  return vle8_v_u8m4 (base, 32);
}

/*
** test_vle8_v_u8m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m4_t
test_vle8_v_u8m4_m_vl32 (vbool2_t mask, vuint8m4_t dest, uint8_t *base)
{
  return vle8_v_u8m4_m (mask, dest, base, 32);
}

/*
** test_vle8_v_u8m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint8m8_t
test_vle8_v_u8m8_vl32 (uint8_t *base)
{
  return vle8_v_u8m8 (base, 32);
}

/*
** test_vle8_v_u8m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu
**  ...
**	vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint8m8_t
test_vle8_v_u8m8_m_vl32 (vbool1_t mask, vuint8m8_t dest, uint8_t *base)
{
  return vle8_v_u8m8_m (mask, dest, base, 32);
}

/*
** test_vle16_v_u16mf4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf4_t
test_vle16_v_u16mf4_vl32 (uint16_t *base)
{
  return vle16_v_u16mf4 (base, 32);
}

/*
** test_vle16_v_u16mf4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4_t
test_vle16_v_u16mf4_m_vl32 (vbool64_t mask, vuint16mf4_t dest, uint16_t *base)
{
  return vle16_v_u16mf4_m (mask, dest, base, 32);
}

/*
** test_vle16_v_u16mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16mf2_t
test_vle16_v_u16mf2_vl32 (uint16_t *base)
{
  return vle16_v_u16mf2 (base, 32);
}

/*
** test_vle16_v_u16mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2_t
test_vle16_v_u16mf2_m_vl32 (vbool32_t mask, vuint16mf2_t dest, uint16_t *base)
{
  return vle16_v_u16mf2_m (mask, dest, base, 32);
}

/*
** test_vle16_v_u16m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m1_t
test_vle16_v_u16m1_vl32 (uint16_t *base)
{
  return vle16_v_u16m1 (base, 32);
}

/*
** test_vle16_v_u16m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m1_t
test_vle16_v_u16m1_m_vl32 (vbool16_t mask, vuint16m1_t dest, uint16_t *base)
{
  return vle16_v_u16m1_m (mask, dest, base, 32);
}

/*
** test_vle16_v_u16m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m2_t
test_vle16_v_u16m2_vl32 (uint16_t *base)
{
  return vle16_v_u16m2 (base, 32);
}

/*
** test_vle16_v_u16m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m2_t
test_vle16_v_u16m2_m_vl32 (vbool8_t mask, vuint16m2_t dest, uint16_t *base)
{
  return vle16_v_u16m2_m (mask, dest, base, 32);
}

/*
** test_vle16_v_u16m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m4_t
test_vle16_v_u16m4_vl32 (uint16_t *base)
{
  return vle16_v_u16m4 (base, 32);
}

/*
** test_vle16_v_u16m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m4_t
test_vle16_v_u16m4_m_vl32 (vbool4_t mask, vuint16m4_t dest, uint16_t *base)
{
  return vle16_v_u16m4_m (mask, dest, base, 32);
}

/*
** test_vle16_v_u16m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint16m8_t
test_vle16_v_u16m8_vl32 (uint16_t *base)
{
  return vle16_v_u16m8 (base, 32);
}

/*
** test_vle16_v_u16m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu
**  ...
**	vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint16m8_t
test_vle16_v_u16m8_m_vl32 (vbool2_t mask, vuint16m8_t dest, uint16_t *base)
{
  return vle16_v_u16m8_m (mask, dest, base, 32);
}

/*
** test_vle32_v_u32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32mf2_t
test_vle32_v_u32mf2_vl32 (uint32_t *base)
{
  return vle32_v_u32mf2 (base, 32);
}

/*
** test_vle32_v_u32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2_t
test_vle32_v_u32mf2_m_vl32 (vbool64_t mask, vuint32mf2_t dest, uint32_t *base)
{
  return vle32_v_u32mf2_m (mask, dest, base, 32);
}

/*
** test_vle32_v_u32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m1_t
test_vle32_v_u32m1_vl32 (uint32_t *base)
{
  return vle32_v_u32m1 (base, 32);
}

/*
** test_vle32_v_u32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m1_t
test_vle32_v_u32m1_m_vl32 (vbool32_t mask, vuint32m1_t dest, uint32_t *base)
{
  return vle32_v_u32m1_m (mask, dest, base, 32);
}

/*
** test_vle32_v_u32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m2_t
test_vle32_v_u32m2_vl32 (uint32_t *base)
{
  return vle32_v_u32m2 (base, 32);
}

/*
** test_vle32_v_u32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m2_t
test_vle32_v_u32m2_m_vl32 (vbool16_t mask, vuint32m2_t dest, uint32_t *base)
{
  return vle32_v_u32m2_m (mask, dest, base, 32);
}

/*
** test_vle32_v_u32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m4_t
test_vle32_v_u32m4_vl32 (uint32_t *base)
{
  return vle32_v_u32m4 (base, 32);
}

/*
** test_vle32_v_u32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m4_t
test_vle32_v_u32m4_m_vl32 (vbool8_t mask, vuint32m4_t dest, uint32_t *base)
{
  return vle32_v_u32m4_m (mask, dest, base, 32);
}

/*
** test_vle32_v_u32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint32m8_t
test_vle32_v_u32m8_vl32 (uint32_t *base)
{
  return vle32_v_u32m8 (base, 32);
}

/*
** test_vle32_v_u32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*mu
**  ...
**	vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint32m8_t
test_vle32_v_u32m8_m_vl32 (vbool4_t mask, vuint32m8_t dest, uint32_t *base)
{
  return vle32_v_u32m8_m (mask, dest, base, 32);
}

/*
** test_vle64_v_u64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m1_t
test_vle64_v_u64m1_vl32 (uint64_t *base)
{
  return vle64_v_u64m1 (base, 32);
}

/*
** test_vle64_v_u64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m1_t
test_vle64_v_u64m1_m_vl32 (vbool64_t mask, vuint64m1_t dest, uint64_t *base)
{
  return vle64_v_u64m1_m (mask, dest, base, 32);
}

/*
** test_vle64_v_u64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m2_t
test_vle64_v_u64m2_vl32 (uint64_t *base)
{
  return vle64_v_u64m2 (base, 32);
}

/*
** test_vle64_v_u64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m2_t
test_vle64_v_u64m2_m_vl32 (vbool32_t mask, vuint64m2_t dest, uint64_t *base)
{
  return vle64_v_u64m2_m (mask, dest, base, 32);
}

/*
** test_vle64_v_u64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m4_t
test_vle64_v_u64m4_vl32 (uint64_t *base)
{
  return vle64_v_u64m4 (base, 32);
}

/*
** test_vle64_v_u64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m4_t
test_vle64_v_u64m4_m_vl32 (vbool16_t mask, vuint64m4_t dest, uint64_t *base)
{
  return vle64_v_u64m4_m (mask, dest, base, 32);
}

/*
** test_vle64_v_u64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*m[au]
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)
**  ...
**  ret
*/
vuint64m8_t
test_vle64_v_u64m8_vl32 (uint64_t *base)
{
  return vle64_v_u64m8 (base, 32);
}

/*
** test_vle64_v_u64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*mu
**  ...
**	vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*v0\.t
**  ...
**  ret
*/
vuint64m8_t
test_vle64_v_u64m8_m_vl32 (vbool8_t mask, vuint64m8_t dest, uint64_t *base)
{
  return vle64_v_u64m8_m (mask, dest, base, 32);
}

