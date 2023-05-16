/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vloxseg5ei32_v_i32m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x5_t
test_vloxseg5ei32_v_i32m1x5_tu_vl32 (vint32m1x5_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_i32m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_i32m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x6_t
test_vloxseg6ei32_v_i32m1x6_ta_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_i32m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_i32m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x6_t
test_vloxseg6ei32_v_i32m1x6_tu_vl32 (vint32m1x6_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_i32m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_i32m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x7_t
test_vloxseg7ei32_v_i32m1x7_ta_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_i32m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_i32m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x7_t
test_vloxseg7ei32_v_i32m1x7_tu_vl32 (vint32m1x7_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_i32m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_i32m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x8_t
test_vloxseg8ei32_v_i32m1x8_ta_vl32 (int32_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_i32m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_i32m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32m1x8_t
test_vloxseg8ei32_v_i32m1x8_tu_vl32 (vint32m1x8_t dest, int32_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_i32m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i64m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x2_t
test_vloxseg2ei32_v_i64m2x2_ta_vl32 (int64_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_i64m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i64m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x2_t
test_vloxseg2ei32_v_i64m2x2_tu_vl32 (vint64m2x2_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_i64m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i64m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x3_t
test_vloxseg3ei32_v_i64m2x3_ta_vl32 (int64_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_i64m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i64m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x3_t
test_vloxseg3ei32_v_i64m2x3_tu_vl32 (vint64m2x3_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_i64m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i64m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x4_t
test_vloxseg4ei32_v_i64m2x4_ta_vl32 (int64_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_i64m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i64m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m2x4_t
test_vloxseg4ei32_v_i64m2x4_tu_vl32 (vint64m2x4_t dest, int64_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_i64m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i8mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x2_t
test_vloxseg2ei32_v_i8mf2x2_ta_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_i8mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i8mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x2_t
test_vloxseg2ei32_v_i8mf2x2_tu_vl32 (vint8mf2x2_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_i8mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i8mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x3_t
test_vloxseg3ei32_v_i8mf2x3_ta_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_i8mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i8mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x3_t
test_vloxseg3ei32_v_i8mf2x3_tu_vl32 (vint8mf2x3_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_i8mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i8mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x4_t
test_vloxseg4ei32_v_i8mf2x4_ta_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_i8mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i8mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x4_t
test_vloxseg4ei32_v_i8mf2x4_tu_vl32 (vint8mf2x4_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_i8mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_i8mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x5_t
test_vloxseg5ei32_v_i8mf2x5_ta_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_i8mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_i8mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x5_t
test_vloxseg5ei32_v_i8mf2x5_tu_vl32 (vint8mf2x5_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_i8mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_i8mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x6_t
test_vloxseg6ei32_v_i8mf2x6_ta_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_i8mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_i8mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x6_t
test_vloxseg6ei32_v_i8mf2x6_tu_vl32 (vint8mf2x6_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_i8mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_i8mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x7_t
test_vloxseg7ei32_v_i8mf2x7_ta_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_i8mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_i8mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x7_t
test_vloxseg7ei32_v_i8mf2x7_tu_vl32 (vint8mf2x7_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_i8mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_i8mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x8_t
test_vloxseg8ei32_v_i8mf2x8_ta_vl32 (int8_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_i8mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_i8mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf2x8_t
test_vloxseg8ei32_v_i8mf2x8_tu_vl32 (vint8mf2x8_t dest, int8_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_i8mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i16m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x2_t
test_vloxseg2ei32_v_i16m1x2_ta_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_i16m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i16m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x2_t
test_vloxseg2ei32_v_i16m1x2_tu_vl32 (vint16m1x2_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_i16m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i16m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x3_t
test_vloxseg3ei32_v_i16m1x3_ta_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_i16m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i16m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x3_t
test_vloxseg3ei32_v_i16m1x3_tu_vl32 (vint16m1x3_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_i16m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i16m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x4_t
test_vloxseg4ei32_v_i16m1x4_ta_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_i16m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i16m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x4_t
test_vloxseg4ei32_v_i16m1x4_tu_vl32 (vint16m1x4_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_i16m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_i16m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x5_t
test_vloxseg5ei32_v_i16m1x5_ta_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_i16m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_i16m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x5_t
test_vloxseg5ei32_v_i16m1x5_tu_vl32 (vint16m1x5_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_i16m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_i16m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x6_t
test_vloxseg6ei32_v_i16m1x6_ta_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_i16m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_i16m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x6_t
test_vloxseg6ei32_v_i16m1x6_tu_vl32 (vint16m1x6_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_i16m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_i16m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x7_t
test_vloxseg7ei32_v_i16m1x7_ta_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_i16m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_i16m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x7_t
test_vloxseg7ei32_v_i16m1x7_tu_vl32 (vint16m1x7_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_i16m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_i16m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x8_t
test_vloxseg8ei32_v_i16m1x8_ta_vl32 (int16_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_i16m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_i16m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m1x8_t
test_vloxseg8ei32_v_i16m1x8_tu_vl32 (vint16m1x8_t dest, int16_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_i16m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i32m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2x2_t
test_vloxseg2ei32_v_i32m2x2_ta_vl32 (int32_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_i32m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i32m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2x2_t
test_vloxseg2ei32_v_i32m2x2_tu_vl32 (vint32m2x2_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_i32m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i32m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2x3_t
test_vloxseg3ei32_v_i32m2x3_ta_vl32 (int32_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_i32m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i32m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2x3_t
test_vloxseg3ei32_v_i32m2x3_tu_vl32 (vint32m2x3_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_i32m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i32m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2x4_t
test_vloxseg4ei32_v_i32m2x4_ta_vl32 (int32_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_i32m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i32m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2x4_t
test_vloxseg4ei32_v_i32m2x4_tu_vl32 (vint32m2x4_t dest, int32_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_i32m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i64m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m4x2_t
test_vloxseg2ei32_v_i64m4x2_ta_vl32 (int64_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_i64m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i64m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m4x2_t
test_vloxseg2ei32_v_i64m4x2_tu_vl32 (vint64m4x2_t dest, int64_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_i64m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i8m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x2_t
test_vloxseg2ei32_v_i8m1x2_ta_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_i8m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i8m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x2_t
test_vloxseg2ei32_v_i8m1x2_tu_vl32 (vint8m1x2_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_i8m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i8m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x3_t
test_vloxseg3ei32_v_i8m1x3_ta_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_i8m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i8m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x3_t
test_vloxseg3ei32_v_i8m1x3_tu_vl32 (vint8m1x3_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_i8m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i8m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x4_t
test_vloxseg4ei32_v_i8m1x4_ta_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_i8m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i8m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x4_t
test_vloxseg4ei32_v_i8m1x4_tu_vl32 (vint8m1x4_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_i8m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_i8m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x5_t
test_vloxseg5ei32_v_i8m1x5_ta_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vloxseg5ei32_v_i8m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_i8m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x5_t
test_vloxseg5ei32_v_i8m1x5_tu_vl32 (vint8m1x5_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vloxseg5ei32_v_i8m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_i8m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x6_t
test_vloxseg6ei32_v_i8m1x6_ta_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vloxseg6ei32_v_i8m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_i8m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x6_t
test_vloxseg6ei32_v_i8m1x6_tu_vl32 (vint8m1x6_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vloxseg6ei32_v_i8m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_i8m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x7_t
test_vloxseg7ei32_v_i8m1x7_ta_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vloxseg7ei32_v_i8m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_i8m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x7_t
test_vloxseg7ei32_v_i8m1x7_tu_vl32 (vint8m1x7_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vloxseg7ei32_v_i8m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_i8m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x8_t
test_vloxseg8ei32_v_i8m1x8_ta_vl32 (int8_t *base, vuint32m4_t bindex)
{
  return vloxseg8ei32_v_i8m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_i8m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8m1x8_t
test_vloxseg8ei32_v_i8m1x8_tu_vl32 (vint8m1x8_t dest, int8_t *base, vuint32m4_t bindex)
{
  return vloxseg8ei32_v_i8m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i16m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2x2_t
test_vloxseg2ei32_v_i16m2x2_ta_vl32 (int16_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_i16m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i16m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2x2_t
test_vloxseg2ei32_v_i16m2x2_tu_vl32 (vint16m2x2_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_i16m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i16m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2x3_t
test_vloxseg3ei32_v_i16m2x3_ta_vl32 (int16_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_i16m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i16m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2x3_t
test_vloxseg3ei32_v_i16m2x3_tu_vl32 (vint16m2x3_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_i16m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i16m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2x4_t
test_vloxseg4ei32_v_i16m2x4_ta_vl32 (int16_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_i16m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i16m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m2x4_t
test_vloxseg4ei32_v_i16m2x4_tu_vl32 (vint16m2x4_t dest, int16_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_i16m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i32m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4x2_t
test_vloxseg2ei32_v_i32m4x2_ta_vl32 (int32_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_i32m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i32m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m4x2_t
test_vloxseg2ei32_v_i32m4x2_tu_vl32 (vint32m4x2_t dest, int32_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_i32m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i8m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2x2_t
test_vloxseg2ei32_v_i8m2x2_ta_vl32 (int8_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_i8m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i8m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2x2_t
test_vloxseg2ei32_v_i8m2x2_tu_vl32 (vint8m2x2_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_i8m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i8m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2x3_t
test_vloxseg3ei32_v_i8m2x3_ta_vl32 (int8_t *base, vuint32m8_t bindex)
{
  return vloxseg3ei32_v_i8m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_i8m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2x3_t
test_vloxseg3ei32_v_i8m2x3_tu_vl32 (vint8m2x3_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vloxseg3ei32_v_i8m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i8m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2x4_t
test_vloxseg4ei32_v_i8m2x4_ta_vl32 (int8_t *base, vuint32m8_t bindex)
{
  return vloxseg4ei32_v_i8m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_i8m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m2x4_t
test_vloxseg4ei32_v_i8m2x4_tu_vl32 (vint8m2x4_t dest, int8_t *base, vuint32m8_t bindex)
{
  return vloxseg4ei32_v_i8m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i16m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m4x2_t
test_vloxseg2ei32_v_i16m4x2_ta_vl32 (int16_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_i16m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_i16m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m4x2_t
test_vloxseg2ei32_v_i16m4x2_tu_vl32 (vint16m4x2_t dest, int16_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_i16m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i8mf8x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x2_t
test_vloxseg2ei64_v_i8mf8x2_ta_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_i8mf8x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i8mf8x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x2_t
test_vloxseg2ei64_v_i8mf8x2_tu_vl32 (vint8mf8x2_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_i8mf8x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i8mf8x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x3_t
test_vloxseg3ei64_v_i8mf8x3_ta_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_i8mf8x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i8mf8x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x3_t
test_vloxseg3ei64_v_i8mf8x3_tu_vl32 (vint8mf8x3_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_i8mf8x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i8mf8x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x4_t
test_vloxseg4ei64_v_i8mf8x4_ta_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_i8mf8x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i8mf8x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x4_t
test_vloxseg4ei64_v_i8mf8x4_tu_vl32 (vint8mf8x4_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_i8mf8x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i8mf8x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x5_t
test_vloxseg5ei64_v_i8mf8x5_ta_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_i8mf8x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i8mf8x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x5_t
test_vloxseg5ei64_v_i8mf8x5_tu_vl32 (vint8mf8x5_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_i8mf8x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i8mf8x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x6_t
test_vloxseg6ei64_v_i8mf8x6_ta_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_i8mf8x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i8mf8x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x6_t
test_vloxseg6ei64_v_i8mf8x6_tu_vl32 (vint8mf8x6_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_i8mf8x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i8mf8x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x7_t
test_vloxseg7ei64_v_i8mf8x7_ta_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_i8mf8x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i8mf8x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x7_t
test_vloxseg7ei64_v_i8mf8x7_tu_vl32 (vint8mf8x7_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_i8mf8x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i8mf8x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x8_t
test_vloxseg8ei64_v_i8mf8x8_ta_vl32 (int8_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_i8mf8x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i8mf8x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint8mf8x8_t
test_vloxseg8ei64_v_i8mf8x8_tu_vl32 (vint8mf8x8_t dest, int8_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_i8mf8x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i16mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x2_t
test_vloxseg2ei64_v_i16mf4x2_ta_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_i16mf4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i16mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x2_t
test_vloxseg2ei64_v_i16mf4x2_tu_vl32 (vint16mf4x2_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_i16mf4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i16mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x3_t
test_vloxseg3ei64_v_i16mf4x3_ta_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_i16mf4x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i16mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x3_t
test_vloxseg3ei64_v_i16mf4x3_tu_vl32 (vint16mf4x3_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_i16mf4x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i16mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x4_t
test_vloxseg4ei64_v_i16mf4x4_ta_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_i16mf4x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i16mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x4_t
test_vloxseg4ei64_v_i16mf4x4_tu_vl32 (vint16mf4x4_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_i16mf4x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i16mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x5_t
test_vloxseg5ei64_v_i16mf4x5_ta_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_i16mf4x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i16mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x5_t
test_vloxseg5ei64_v_i16mf4x5_tu_vl32 (vint16mf4x5_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_i16mf4x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i16mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x6_t
test_vloxseg6ei64_v_i16mf4x6_ta_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_i16mf4x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i16mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x6_t
test_vloxseg6ei64_v_i16mf4x6_tu_vl32 (vint16mf4x6_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_i16mf4x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i16mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x7_t
test_vloxseg7ei64_v_i16mf4x7_ta_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_i16mf4x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i16mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x7_t
test_vloxseg7ei64_v_i16mf4x7_tu_vl32 (vint16mf4x7_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_i16mf4x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i16mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x8_t
test_vloxseg8ei64_v_i16mf4x8_ta_vl32 (int16_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_i16mf4x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i16mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint16mf4x8_t
test_vloxseg8ei64_v_i16mf4x8_tu_vl32 (vint16mf4x8_t dest, int16_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_i16mf4x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i32mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x2_t
test_vloxseg2ei64_v_i32mf2x2_ta_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_i32mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i32mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x2_t
test_vloxseg2ei64_v_i32mf2x2_tu_vl32 (vint32mf2x2_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_i32mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i32mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x3_t
test_vloxseg3ei64_v_i32mf2x3_ta_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_i32mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i32mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x3_t
test_vloxseg3ei64_v_i32mf2x3_tu_vl32 (vint32mf2x3_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_i32mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i32mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x4_t
test_vloxseg4ei64_v_i32mf2x4_ta_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_i32mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i32mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x4_t
test_vloxseg4ei64_v_i32mf2x4_tu_vl32 (vint32mf2x4_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_i32mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i32mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x5_t
test_vloxseg5ei64_v_i32mf2x5_ta_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_i32mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i32mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x5_t
test_vloxseg5ei64_v_i32mf2x5_tu_vl32 (vint32mf2x5_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_i32mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i32mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x6_t
test_vloxseg6ei64_v_i32mf2x6_ta_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_i32mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i32mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x6_t
test_vloxseg6ei64_v_i32mf2x6_tu_vl32 (vint32mf2x6_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_i32mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i32mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x7_t
test_vloxseg7ei64_v_i32mf2x7_ta_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_i32mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i32mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x7_t
test_vloxseg7ei64_v_i32mf2x7_tu_vl32 (vint32mf2x7_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_i32mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i32mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x8_t
test_vloxseg8ei64_v_i32mf2x8_ta_vl32 (int32_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_i32mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i32mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint32mf2x8_t
test_vloxseg8ei64_v_i32mf2x8_tu_vl32 (vint32mf2x8_t dest, int32_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_i32mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i64m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x2_t
test_vloxseg2ei64_v_i64m1x2_ta_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_i64m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i64m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x2_t
test_vloxseg2ei64_v_i64m1x2_tu_vl32 (vint64m1x2_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_i64m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i64m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x3_t
test_vloxseg3ei64_v_i64m1x3_ta_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_i64m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i64m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x3_t
test_vloxseg3ei64_v_i64m1x3_tu_vl32 (vint64m1x3_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_i64m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i64m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x4_t
test_vloxseg4ei64_v_i64m1x4_ta_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_i64m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i64m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x4_t
test_vloxseg4ei64_v_i64m1x4_tu_vl32 (vint64m1x4_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_i64m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i64m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x5_t
test_vloxseg5ei64_v_i64m1x5_ta_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_i64m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i64m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x5_t
test_vloxseg5ei64_v_i64m1x5_tu_vl32 (vint64m1x5_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_i64m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i64m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x6_t
test_vloxseg6ei64_v_i64m1x6_ta_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_i64m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i64m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x6_t
test_vloxseg6ei64_v_i64m1x6_tu_vl32 (vint64m1x6_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_i64m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i64m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x7_t
test_vloxseg7ei64_v_i64m1x7_ta_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_i64m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i64m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x7_t
test_vloxseg7ei64_v_i64m1x7_tu_vl32 (vint64m1x7_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_i64m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i64m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x8_t
test_vloxseg8ei64_v_i64m1x8_ta_vl32 (int64_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_i64m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i64m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vint64m1x8_t
test_vloxseg8ei64_v_i64m1x8_tu_vl32 (vint64m1x8_t dest, int64_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_i64m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i8mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x2_t
test_vloxseg2ei64_v_i8mf4x2_ta_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_i8mf4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i8mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x2_t
test_vloxseg2ei64_v_i8mf4x2_tu_vl32 (vint8mf4x2_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_i8mf4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i8mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x3_t
test_vloxseg3ei64_v_i8mf4x3_ta_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_i8mf4x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i8mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x3_t
test_vloxseg3ei64_v_i8mf4x3_tu_vl32 (vint8mf4x3_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_i8mf4x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i8mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x4_t
test_vloxseg4ei64_v_i8mf4x4_ta_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_i8mf4x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i8mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x4_t
test_vloxseg4ei64_v_i8mf4x4_tu_vl32 (vint8mf4x4_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_i8mf4x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i8mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x5_t
test_vloxseg5ei64_v_i8mf4x5_ta_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_i8mf4x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i8mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x5_t
test_vloxseg5ei64_v_i8mf4x5_tu_vl32 (vint8mf4x5_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_i8mf4x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i8mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x6_t
test_vloxseg6ei64_v_i8mf4x6_ta_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_i8mf4x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i8mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x6_t
test_vloxseg6ei64_v_i8mf4x6_tu_vl32 (vint8mf4x6_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_i8mf4x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i8mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x7_t
test_vloxseg7ei64_v_i8mf4x7_ta_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_i8mf4x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i8mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x7_t
test_vloxseg7ei64_v_i8mf4x7_tu_vl32 (vint8mf4x7_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_i8mf4x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i8mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x8_t
test_vloxseg8ei64_v_i8mf4x8_ta_vl32 (int8_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_i8mf4x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i8mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8mf4x8_t
test_vloxseg8ei64_v_i8mf4x8_tu_vl32 (vint8mf4x8_t dest, int8_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_i8mf4x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i16mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x2_t
test_vloxseg2ei64_v_i16mf2x2_ta_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_i16mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i16mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x2_t
test_vloxseg2ei64_v_i16mf2x2_tu_vl32 (vint16mf2x2_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_i16mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i16mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x3_t
test_vloxseg3ei64_v_i16mf2x3_ta_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_i16mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i16mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x3_t
test_vloxseg3ei64_v_i16mf2x3_tu_vl32 (vint16mf2x3_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_i16mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i16mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x4_t
test_vloxseg4ei64_v_i16mf2x4_ta_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_i16mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i16mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x4_t
test_vloxseg4ei64_v_i16mf2x4_tu_vl32 (vint16mf2x4_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_i16mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i16mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x5_t
test_vloxseg5ei64_v_i16mf2x5_ta_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_i16mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i16mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x5_t
test_vloxseg5ei64_v_i16mf2x5_tu_vl32 (vint16mf2x5_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_i16mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i16mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x6_t
test_vloxseg6ei64_v_i16mf2x6_ta_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_i16mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i16mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x6_t
test_vloxseg6ei64_v_i16mf2x6_tu_vl32 (vint16mf2x6_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_i16mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i16mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x7_t
test_vloxseg7ei64_v_i16mf2x7_ta_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_i16mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i16mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x7_t
test_vloxseg7ei64_v_i16mf2x7_tu_vl32 (vint16mf2x7_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_i16mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i16mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x8_t
test_vloxseg8ei64_v_i16mf2x8_ta_vl32 (int16_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_i16mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i16mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16mf2x8_t
test_vloxseg8ei64_v_i16mf2x8_tu_vl32 (vint16mf2x8_t dest, int16_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_i16mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i32m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x2_t
test_vloxseg2ei64_v_i32m1x2_ta_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_i32m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i32m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x2_t
test_vloxseg2ei64_v_i32m1x2_tu_vl32 (vint32m1x2_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_i32m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i32m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x3_t
test_vloxseg3ei64_v_i32m1x3_ta_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_i32m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i32m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x3_t
test_vloxseg3ei64_v_i32m1x3_tu_vl32 (vint32m1x3_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_i32m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i32m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x4_t
test_vloxseg4ei64_v_i32m1x4_ta_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_i32m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i32m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x4_t
test_vloxseg4ei64_v_i32m1x4_tu_vl32 (vint32m1x4_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_i32m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i32m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x5_t
test_vloxseg5ei64_v_i32m1x5_ta_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_i32m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i32m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x5_t
test_vloxseg5ei64_v_i32m1x5_tu_vl32 (vint32m1x5_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_i32m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i32m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x6_t
test_vloxseg6ei64_v_i32m1x6_ta_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_i32m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i32m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x6_t
test_vloxseg6ei64_v_i32m1x6_tu_vl32 (vint32m1x6_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_i32m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i32m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x7_t
test_vloxseg7ei64_v_i32m1x7_ta_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_i32m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i32m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x7_t
test_vloxseg7ei64_v_i32m1x7_tu_vl32 (vint32m1x7_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_i32m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i32m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x8_t
test_vloxseg8ei64_v_i32m1x8_ta_vl32 (int32_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_i32m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i32m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m1x8_t
test_vloxseg8ei64_v_i32m1x8_tu_vl32 (vint32m1x8_t dest, int32_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_i32m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i64m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2x2_t
test_vloxseg2ei64_v_i64m2x2_ta_vl32 (int64_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_i64m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i64m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2x2_t
test_vloxseg2ei64_v_i64m2x2_tu_vl32 (vint64m2x2_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_i64m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i64m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2x3_t
test_vloxseg3ei64_v_i64m2x3_ta_vl32 (int64_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_i64m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i64m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2x3_t
test_vloxseg3ei64_v_i64m2x3_tu_vl32 (vint64m2x3_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_i64m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i64m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2x4_t
test_vloxseg4ei64_v_i64m2x4_ta_vl32 (int64_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_i64m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i64m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2x4_t
test_vloxseg4ei64_v_i64m2x4_tu_vl32 (vint64m2x4_t dest, int64_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_i64m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i8mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x2_t
test_vloxseg2ei64_v_i8mf2x2_ta_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_i8mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i8mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x2_t
test_vloxseg2ei64_v_i8mf2x2_tu_vl32 (vint8mf2x2_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_i8mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i8mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x3_t
test_vloxseg3ei64_v_i8mf2x3_ta_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_i8mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i8mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x3_t
test_vloxseg3ei64_v_i8mf2x3_tu_vl32 (vint8mf2x3_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_i8mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i8mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x4_t
test_vloxseg4ei64_v_i8mf2x4_ta_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_i8mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i8mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x4_t
test_vloxseg4ei64_v_i8mf2x4_tu_vl32 (vint8mf2x4_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_i8mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i8mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x5_t
test_vloxseg5ei64_v_i8mf2x5_ta_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_i8mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i8mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x5_t
test_vloxseg5ei64_v_i8mf2x5_tu_vl32 (vint8mf2x5_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_i8mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i8mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x6_t
test_vloxseg6ei64_v_i8mf2x6_ta_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_i8mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i8mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x6_t
test_vloxseg6ei64_v_i8mf2x6_tu_vl32 (vint8mf2x6_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_i8mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i8mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x7_t
test_vloxseg7ei64_v_i8mf2x7_ta_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_i8mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i8mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x7_t
test_vloxseg7ei64_v_i8mf2x7_tu_vl32 (vint8mf2x7_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_i8mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i8mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x8_t
test_vloxseg8ei64_v_i8mf2x8_ta_vl32 (int8_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_i8mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i8mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint8mf2x8_t
test_vloxseg8ei64_v_i8mf2x8_tu_vl32 (vint8mf2x8_t dest, int8_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_i8mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i16m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x2_t
test_vloxseg2ei64_v_i16m1x2_ta_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_i16m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i16m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x2_t
test_vloxseg2ei64_v_i16m1x2_tu_vl32 (vint16m1x2_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_i16m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i16m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x3_t
test_vloxseg3ei64_v_i16m1x3_ta_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_i16m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i16m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x3_t
test_vloxseg3ei64_v_i16m1x3_tu_vl32 (vint16m1x3_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_i16m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i16m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x4_t
test_vloxseg4ei64_v_i16m1x4_ta_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_i16m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i16m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x4_t
test_vloxseg4ei64_v_i16m1x4_tu_vl32 (vint16m1x4_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_i16m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i16m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x5_t
test_vloxseg5ei64_v_i16m1x5_ta_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_i16m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i16m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x5_t
test_vloxseg5ei64_v_i16m1x5_tu_vl32 (vint16m1x5_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_i16m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i16m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x6_t
test_vloxseg6ei64_v_i16m1x6_ta_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_i16m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i16m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x6_t
test_vloxseg6ei64_v_i16m1x6_tu_vl32 (vint16m1x6_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_i16m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i16m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x7_t
test_vloxseg7ei64_v_i16m1x7_ta_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_i16m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i16m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x7_t
test_vloxseg7ei64_v_i16m1x7_tu_vl32 (vint16m1x7_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_i16m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i16m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x8_t
test_vloxseg8ei64_v_i16m1x8_ta_vl32 (int16_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_i16m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i16m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint16m1x8_t
test_vloxseg8ei64_v_i16m1x8_tu_vl32 (vint16m1x8_t dest, int16_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_i16m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i32m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2x2_t
test_vloxseg2ei64_v_i32m2x2_ta_vl32 (int32_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_i32m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i32m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2x2_t
test_vloxseg2ei64_v_i32m2x2_tu_vl32 (vint32m2x2_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_i32m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i32m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2x3_t
test_vloxseg3ei64_v_i32m2x3_ta_vl32 (int32_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_i32m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i32m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2x3_t
test_vloxseg3ei64_v_i32m2x3_tu_vl32 (vint32m2x3_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_i32m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i32m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2x4_t
test_vloxseg4ei64_v_i32m2x4_ta_vl32 (int32_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_i32m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i32m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint32m2x4_t
test_vloxseg4ei64_v_i32m2x4_tu_vl32 (vint32m2x4_t dest, int32_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_i32m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i64m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4x2_t
test_vloxseg2ei64_v_i64m4x2_ta_vl32 (int64_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_i64m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i64m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vint64m4x2_t
test_vloxseg2ei64_v_i64m4x2_tu_vl32 (vint64m4x2_t dest, int64_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_i64m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i8m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x2_t
test_vloxseg2ei64_v_i8m1x2_ta_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_i8m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i8m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x2_t
test_vloxseg2ei64_v_i8m1x2_tu_vl32 (vint8m1x2_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_i8m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i8m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x3_t
test_vloxseg3ei64_v_i8m1x3_ta_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_i8m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i8m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x3_t
test_vloxseg3ei64_v_i8m1x3_tu_vl32 (vint8m1x3_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_i8m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i8m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x4_t
test_vloxseg4ei64_v_i8m1x4_ta_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_i8m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i8m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x4_t
test_vloxseg4ei64_v_i8m1x4_tu_vl32 (vint8m1x4_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_i8m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i8m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x5_t
test_vloxseg5ei64_v_i8m1x5_ta_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vloxseg5ei64_v_i8m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_i8m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x5_t
test_vloxseg5ei64_v_i8m1x5_tu_vl32 (vint8m1x5_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vloxseg5ei64_v_i8m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i8m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x6_t
test_vloxseg6ei64_v_i8m1x6_ta_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vloxseg6ei64_v_i8m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_i8m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x6_t
test_vloxseg6ei64_v_i8m1x6_tu_vl32 (vint8m1x6_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vloxseg6ei64_v_i8m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i8m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x7_t
test_vloxseg7ei64_v_i8m1x7_ta_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vloxseg7ei64_v_i8m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_i8m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x7_t
test_vloxseg7ei64_v_i8m1x7_tu_vl32 (vint8m1x7_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vloxseg7ei64_v_i8m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i8m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x8_t
test_vloxseg8ei64_v_i8m1x8_ta_vl32 (int8_t *base, vuint64m8_t bindex)
{
  return vloxseg8ei64_v_i8m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_i8m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint8m1x8_t
test_vloxseg8ei64_v_i8m1x8_tu_vl32 (vint8m1x8_t dest, int8_t *base, vuint64m8_t bindex)
{
  return vloxseg8ei64_v_i8m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i16m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2x2_t
test_vloxseg2ei64_v_i16m2x2_ta_vl32 (int16_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_i16m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i16m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2x2_t
test_vloxseg2ei64_v_i16m2x2_tu_vl32 (vint16m2x2_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_i16m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i16m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2x3_t
test_vloxseg3ei64_v_i16m2x3_ta_vl32 (int16_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_i16m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_i16m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2x3_t
test_vloxseg3ei64_v_i16m2x3_tu_vl32 (vint16m2x3_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_i16m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i16m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2x4_t
test_vloxseg4ei64_v_i16m2x4_ta_vl32 (int16_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_i16m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_i16m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint16m2x4_t
test_vloxseg4ei64_v_i16m2x4_tu_vl32 (vint16m2x4_t dest, int16_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_i16m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i32m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m4x2_t
test_vloxseg2ei64_v_i32m4x2_ta_vl32 (int32_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_i32m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_i32m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vint32m4x2_t
test_vloxseg2ei64_v_i32m4x2_tu_vl32 (vint32m4x2_t dest, int32_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_i32m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8mf8x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei8_v_u8mf8x2_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u8mf8x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8mf8x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei8_v_u8mf8x2_tu_vl32 (vuint8mf8x2_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u8mf8x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u8mf8x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei8_v_u8mf8x3_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u8mf8x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u8mf8x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei8_v_u8mf8x3_tu_vl32 (vuint8mf8x3_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u8mf8x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u8mf8x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei8_v_u8mf8x4_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u8mf8x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u8mf8x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei8_v_u8mf8x4_tu_vl32 (vuint8mf8x4_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u8mf8x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u8mf8x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei8_v_u8mf8x5_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u8mf8x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u8mf8x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei8_v_u8mf8x5_tu_vl32 (vuint8mf8x5_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u8mf8x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u8mf8x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei8_v_u8mf8x6_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u8mf8x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u8mf8x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei8_v_u8mf8x6_tu_vl32 (vuint8mf8x6_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u8mf8x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u8mf8x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei8_v_u8mf8x7_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u8mf8x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u8mf8x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei8_v_u8mf8x7_tu_vl32 (vuint8mf8x7_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u8mf8x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u8mf8x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei8_v_u8mf8x8_ta_vl32 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u8mf8x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u8mf8x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei8_v_u8mf8x8_tu_vl32 (vuint8mf8x8_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u8mf8x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u16mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei8_v_u16mf4x2_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u16mf4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u16mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei8_v_u16mf4x2_tu_vl32 (vuint16mf4x2_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u16mf4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u16mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei8_v_u16mf4x3_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u16mf4x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u16mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei8_v_u16mf4x3_tu_vl32 (vuint16mf4x3_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u16mf4x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u16mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei8_v_u16mf4x4_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u16mf4x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u16mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei8_v_u16mf4x4_tu_vl32 (vuint16mf4x4_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u16mf4x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u16mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei8_v_u16mf4x5_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u16mf4x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u16mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei8_v_u16mf4x5_tu_vl32 (vuint16mf4x5_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u16mf4x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u16mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei8_v_u16mf4x6_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u16mf4x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u16mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei8_v_u16mf4x6_tu_vl32 (vuint16mf4x6_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u16mf4x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u16mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei8_v_u16mf4x7_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u16mf4x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u16mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei8_v_u16mf4x7_tu_vl32 (vuint16mf4x7_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u16mf4x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u16mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei8_v_u16mf4x8_ta_vl32 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u16mf4x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u16mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei8_v_u16mf4x8_tu_vl32 (vuint16mf4x8_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u16mf4x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u32mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei8_v_u32mf2x2_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u32mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u32mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei8_v_u32mf2x2_tu_vl32 (vuint32mf2x2_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u32mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u32mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei8_v_u32mf2x3_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u32mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u32mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei8_v_u32mf2x3_tu_vl32 (vuint32mf2x3_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u32mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u32mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei8_v_u32mf2x4_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u32mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u32mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei8_v_u32mf2x4_tu_vl32 (vuint32mf2x4_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u32mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u32mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei8_v_u32mf2x5_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u32mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u32mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei8_v_u32mf2x5_tu_vl32 (vuint32mf2x5_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u32mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u32mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei8_v_u32mf2x6_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u32mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u32mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei8_v_u32mf2x6_tu_vl32 (vuint32mf2x6_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u32mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u32mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei8_v_u32mf2x7_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u32mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u32mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei8_v_u32mf2x7_tu_vl32 (vuint32mf2x7_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u32mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u32mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei8_v_u32mf2x8_ta_vl32 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u32mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u32mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei8_v_u32mf2x8_tu_vl32 (vuint32mf2x8_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u32mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u64m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei8_v_u64m1x2_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u64m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u64m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei8_v_u64m1x2_tu_vl32 (vuint64m1x2_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u64m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u64m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei8_v_u64m1x3_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u64m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u64m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei8_v_u64m1x3_tu_vl32 (vuint64m1x3_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u64m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u64m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei8_v_u64m1x4_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u64m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u64m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei8_v_u64m1x4_tu_vl32 (vuint64m1x4_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u64m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u64m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei8_v_u64m1x5_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u64m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u64m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei8_v_u64m1x5_tu_vl32 (vuint64m1x5_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u64m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u64m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei8_v_u64m1x6_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u64m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u64m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei8_v_u64m1x6_tu_vl32 (vuint64m1x6_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u64m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u64m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei8_v_u64m1x7_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u64m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u64m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei8_v_u64m1x7_tu_vl32 (vuint64m1x7_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u64m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u64m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei8_v_u64m1x8_ta_vl32 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u64m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u64m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei8_v_u64m1x8_tu_vl32 (vuint64m1x8_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u64m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei8_v_u8mf4x2_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u8mf4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei8_v_u8mf4x2_tu_vl32 (vuint8mf4x2_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u8mf4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u8mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei8_v_u8mf4x3_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u8mf4x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u8mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei8_v_u8mf4x3_tu_vl32 (vuint8mf4x3_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u8mf4x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u8mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei8_v_u8mf4x4_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u8mf4x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u8mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei8_v_u8mf4x4_tu_vl32 (vuint8mf4x4_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u8mf4x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u8mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei8_v_u8mf4x5_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u8mf4x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u8mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei8_v_u8mf4x5_tu_vl32 (vuint8mf4x5_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u8mf4x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u8mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei8_v_u8mf4x6_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u8mf4x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u8mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei8_v_u8mf4x6_tu_vl32 (vuint8mf4x6_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u8mf4x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u8mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei8_v_u8mf4x7_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u8mf4x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u8mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei8_v_u8mf4x7_tu_vl32 (vuint8mf4x7_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u8mf4x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u8mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei8_v_u8mf4x8_ta_vl32 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u8mf4x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u8mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei8_v_u8mf4x8_tu_vl32 (vuint8mf4x8_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u8mf4x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u16mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei8_v_u16mf2x2_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u16mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u16mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei8_v_u16mf2x2_tu_vl32 (vuint16mf2x2_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u16mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u16mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei8_v_u16mf2x3_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u16mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u16mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei8_v_u16mf2x3_tu_vl32 (vuint16mf2x3_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u16mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u16mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei8_v_u16mf2x4_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u16mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u16mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei8_v_u16mf2x4_tu_vl32 (vuint16mf2x4_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u16mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u16mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei8_v_u16mf2x5_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u16mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u16mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei8_v_u16mf2x5_tu_vl32 (vuint16mf2x5_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u16mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u16mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei8_v_u16mf2x6_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u16mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u16mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei8_v_u16mf2x6_tu_vl32 (vuint16mf2x6_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u16mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u16mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei8_v_u16mf2x7_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u16mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u16mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei8_v_u16mf2x7_tu_vl32 (vuint16mf2x7_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u16mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u16mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei8_v_u16mf2x8_ta_vl32 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u16mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u16mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei8_v_u16mf2x8_tu_vl32 (vuint16mf2x8_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u16mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u32m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei8_v_u32m1x2_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u32m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u32m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei8_v_u32m1x2_tu_vl32 (vuint32m1x2_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u32m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u32m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei8_v_u32m1x3_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u32m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u32m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei8_v_u32m1x3_tu_vl32 (vuint32m1x3_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u32m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u32m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei8_v_u32m1x4_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u32m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u32m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei8_v_u32m1x4_tu_vl32 (vuint32m1x4_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u32m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u32m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei8_v_u32m1x5_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u32m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u32m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei8_v_u32m1x5_tu_vl32 (vuint32m1x5_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u32m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u32m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei8_v_u32m1x6_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u32m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u32m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei8_v_u32m1x6_tu_vl32 (vuint32m1x6_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u32m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u32m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei8_v_u32m1x7_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u32m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u32m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei8_v_u32m1x7_tu_vl32 (vuint32m1x7_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u32m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u32m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei8_v_u32m1x8_ta_vl32 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u32m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u32m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei8_v_u32m1x8_tu_vl32 (vuint32m1x8_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u32m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u64m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei8_v_u64m2x2_ta_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u64m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u64m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei8_v_u64m2x2_tu_vl32 (vuint64m2x2_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u64m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u64m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei8_v_u64m2x3_ta_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u64m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u64m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei8_v_u64m2x3_tu_vl32 (vuint64m2x3_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u64m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u64m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei8_v_u64m2x4_ta_vl32 (uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u64m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u64m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei8_v_u64m2x4_tu_vl32 (vuint64m2x4_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u64m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei8_v_u8mf2x2_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u8mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei8_v_u8mf2x2_tu_vl32 (vuint8mf2x2_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u8mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u8mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei8_v_u8mf2x3_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u8mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u8mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei8_v_u8mf2x3_tu_vl32 (vuint8mf2x3_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u8mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u8mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei8_v_u8mf2x4_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u8mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u8mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei8_v_u8mf2x4_tu_vl32 (vuint8mf2x4_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u8mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u8mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei8_v_u8mf2x5_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u8mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u8mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei8_v_u8mf2x5_tu_vl32 (vuint8mf2x5_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u8mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u8mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei8_v_u8mf2x6_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u8mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u8mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei8_v_u8mf2x6_tu_vl32 (vuint8mf2x6_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u8mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u8mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei8_v_u8mf2x7_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u8mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u8mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei8_v_u8mf2x7_tu_vl32 (vuint8mf2x7_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u8mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u8mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei8_v_u8mf2x8_ta_vl32 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u8mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u8mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei8_v_u8mf2x8_tu_vl32 (vuint8mf2x8_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u8mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u16m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei8_v_u16m1x2_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u16m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u16m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei8_v_u16m1x2_tu_vl32 (vuint16m1x2_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u16m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u16m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei8_v_u16m1x3_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u16m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u16m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei8_v_u16m1x3_tu_vl32 (vuint16m1x3_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u16m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u16m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei8_v_u16m1x4_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u16m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u16m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei8_v_u16m1x4_tu_vl32 (vuint16m1x4_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u16m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u16m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei8_v_u16m1x5_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u16m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u16m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei8_v_u16m1x5_tu_vl32 (vuint16m1x5_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u16m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u16m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei8_v_u16m1x6_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u16m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u16m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei8_v_u16m1x6_tu_vl32 (vuint16m1x6_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u16m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u16m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei8_v_u16m1x7_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u16m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u16m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei8_v_u16m1x7_tu_vl32 (vuint16m1x7_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u16m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u16m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei8_v_u16m1x8_ta_vl32 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u16m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u16m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei8_v_u16m1x8_tu_vl32 (vuint16m1x8_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u16m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u32m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei8_v_u32m2x2_ta_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u32m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u32m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei8_v_u32m2x2_tu_vl32 (vuint32m2x2_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u32m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u32m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei8_v_u32m2x3_ta_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u32m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u32m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei8_v_u32m2x3_tu_vl32 (vuint32m2x3_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u32m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u32m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei8_v_u32m2x4_ta_vl32 (uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u32m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u32m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei8_v_u32m2x4_tu_vl32 (vuint32m2x4_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u32m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u64m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei8_v_u64m4x2_ta_vl32 (uint64_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u64m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u64m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei8_v_u64m4x2_tu_vl32 (vuint64m4x2_t dest, uint64_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u64m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei8_v_u8m1x2_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u8m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei8_v_u8m1x2_tu_vl32 (vuint8m1x2_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u8m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u8m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei8_v_u8m1x3_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u8m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u8m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei8_v_u8m1x3_tu_vl32 (vuint8m1x3_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u8m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u8m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei8_v_u8m1x4_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u8m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u8m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei8_v_u8m1x4_tu_vl32 (vuint8m1x4_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u8m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u8m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei8_v_u8m1x5_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg5ei8_v_u8m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei8_v_u8m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei8_v_u8m1x5_tu_vl32 (vuint8m1x5_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg5ei8_v_u8m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u8m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei8_v_u8m1x6_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg6ei8_v_u8m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei8_v_u8m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei8_v_u8m1x6_tu_vl32 (vuint8m1x6_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg6ei8_v_u8m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u8m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei8_v_u8m1x7_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg7ei8_v_u8m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei8_v_u8m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei8_v_u8m1x7_tu_vl32 (vuint8m1x7_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg7ei8_v_u8m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u8m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei8_v_u8m1x8_ta_vl32 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg8ei8_v_u8m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei8_v_u8m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei8_v_u8m1x8_tu_vl32 (vuint8m1x8_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg8ei8_v_u8m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u16m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei8_v_u16m2x2_ta_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u16m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u16m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei8_v_u16m2x2_tu_vl32 (vuint16m2x2_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u16m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u16m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei8_v_u16m2x3_ta_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u16m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u16m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei8_v_u16m2x3_tu_vl32 (vuint16m2x3_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u16m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u16m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei8_v_u16m2x4_ta_vl32 (uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u16m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u16m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei8_v_u16m2x4_tu_vl32 (vuint16m2x4_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u16m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u32m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei8_v_u32m4x2_ta_vl32 (uint32_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u32m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u32m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei8_v_u32m4x2_tu_vl32 (vuint32m4x2_t dest, uint32_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u32m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x2_t
test_vloxseg2ei8_v_u8m2x2_ta_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u8m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x2_t
test_vloxseg2ei8_v_u8m2x2_tu_vl32 (vuint8m2x2_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u8m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u8m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x3_t
test_vloxseg3ei8_v_u8m2x3_ta_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg3ei8_v_u8m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei8_v_u8m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x3_t
test_vloxseg3ei8_v_u8m2x3_tu_vl32 (vuint8m2x3_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg3ei8_v_u8m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u8m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x4_t
test_vloxseg4ei8_v_u8m2x4_ta_vl32 (uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg4ei8_v_u8m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei8_v_u8m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x4_t
test_vloxseg4ei8_v_u8m2x4_tu_vl32 (vuint8m2x4_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg4ei8_v_u8m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u16m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4x2_t
test_vloxseg2ei8_v_u16m4x2_ta_vl32 (uint16_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u16m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u16m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4x2_t
test_vloxseg2ei8_v_u16m4x2_tu_vl32 (vuint16m4x2_t dest, uint16_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u16m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4x2_t
test_vloxseg2ei8_v_u8m4x2_ta_vl32 (uint8_t *base, vuint8m4_t bindex)
{
  return vloxseg2ei8_v_u8m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4x2_t
test_vloxseg2ei8_v_u8m4x2_tu_vl32 (vuint8m4x2_t dest, uint8_t *base, vuint8m4_t bindex)
{
  return vloxseg2ei8_v_u8m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8mf8x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei16_v_u8mf8x2_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u8mf8x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8mf8x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei16_v_u8mf8x2_tu_vl32 (vuint8mf8x2_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u8mf8x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u8mf8x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei16_v_u8mf8x3_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u8mf8x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u8mf8x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei16_v_u8mf8x3_tu_vl32 (vuint8mf8x3_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u8mf8x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u8mf8x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei16_v_u8mf8x4_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u8mf8x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u8mf8x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei16_v_u8mf8x4_tu_vl32 (vuint8mf8x4_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u8mf8x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u8mf8x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei16_v_u8mf8x5_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u8mf8x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u8mf8x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei16_v_u8mf8x5_tu_vl32 (vuint8mf8x5_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u8mf8x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u8mf8x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei16_v_u8mf8x6_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u8mf8x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u8mf8x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei16_v_u8mf8x6_tu_vl32 (vuint8mf8x6_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u8mf8x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u8mf8x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei16_v_u8mf8x7_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u8mf8x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u8mf8x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei16_v_u8mf8x7_tu_vl32 (vuint8mf8x7_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u8mf8x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u8mf8x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei16_v_u8mf8x8_ta_vl32 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u8mf8x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u8mf8x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei16_v_u8mf8x8_tu_vl32 (vuint8mf8x8_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u8mf8x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u16mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei16_v_u16mf4x2_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u16mf4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u16mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei16_v_u16mf4x2_tu_vl32 (vuint16mf4x2_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u16mf4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u16mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei16_v_u16mf4x3_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u16mf4x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u16mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei16_v_u16mf4x3_tu_vl32 (vuint16mf4x3_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u16mf4x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u16mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei16_v_u16mf4x4_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u16mf4x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u16mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei16_v_u16mf4x4_tu_vl32 (vuint16mf4x4_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u16mf4x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u16mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei16_v_u16mf4x5_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u16mf4x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u16mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei16_v_u16mf4x5_tu_vl32 (vuint16mf4x5_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u16mf4x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u16mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei16_v_u16mf4x6_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u16mf4x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u16mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei16_v_u16mf4x6_tu_vl32 (vuint16mf4x6_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u16mf4x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u16mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei16_v_u16mf4x7_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u16mf4x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u16mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei16_v_u16mf4x7_tu_vl32 (vuint16mf4x7_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u16mf4x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u16mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei16_v_u16mf4x8_ta_vl32 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u16mf4x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u16mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei16_v_u16mf4x8_tu_vl32 (vuint16mf4x8_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u16mf4x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u32mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei16_v_u32mf2x2_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u32mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u32mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei16_v_u32mf2x2_tu_vl32 (vuint32mf2x2_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u32mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u32mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei16_v_u32mf2x3_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u32mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u32mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei16_v_u32mf2x3_tu_vl32 (vuint32mf2x3_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u32mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u32mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei16_v_u32mf2x4_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u32mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u32mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei16_v_u32mf2x4_tu_vl32 (vuint32mf2x4_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u32mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u32mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei16_v_u32mf2x5_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u32mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u32mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei16_v_u32mf2x5_tu_vl32 (vuint32mf2x5_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u32mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u32mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei16_v_u32mf2x6_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u32mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u32mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei16_v_u32mf2x6_tu_vl32 (vuint32mf2x6_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u32mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u32mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei16_v_u32mf2x7_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u32mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u32mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei16_v_u32mf2x7_tu_vl32 (vuint32mf2x7_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u32mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u32mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei16_v_u32mf2x8_ta_vl32 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u32mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u32mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei16_v_u32mf2x8_tu_vl32 (vuint32mf2x8_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u32mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u64m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei16_v_u64m1x2_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u64m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u64m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei16_v_u64m1x2_tu_vl32 (vuint64m1x2_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u64m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u64m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei16_v_u64m1x3_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u64m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u64m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei16_v_u64m1x3_tu_vl32 (vuint64m1x3_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u64m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u64m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei16_v_u64m1x4_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u64m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u64m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei16_v_u64m1x4_tu_vl32 (vuint64m1x4_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u64m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u64m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei16_v_u64m1x5_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u64m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u64m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei16_v_u64m1x5_tu_vl32 (vuint64m1x5_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u64m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u64m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei16_v_u64m1x6_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u64m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u64m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei16_v_u64m1x6_tu_vl32 (vuint64m1x6_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u64m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u64m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei16_v_u64m1x7_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u64m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u64m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei16_v_u64m1x7_tu_vl32 (vuint64m1x7_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u64m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u64m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei16_v_u64m1x8_ta_vl32 (uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u64m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u64m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei16_v_u64m1x8_tu_vl32 (vuint64m1x8_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u64m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei16_v_u8mf4x2_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u8mf4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei16_v_u8mf4x2_tu_vl32 (vuint8mf4x2_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u8mf4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u8mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei16_v_u8mf4x3_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u8mf4x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u8mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei16_v_u8mf4x3_tu_vl32 (vuint8mf4x3_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u8mf4x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u8mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei16_v_u8mf4x4_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u8mf4x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u8mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei16_v_u8mf4x4_tu_vl32 (vuint8mf4x4_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u8mf4x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u8mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei16_v_u8mf4x5_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u8mf4x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u8mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei16_v_u8mf4x5_tu_vl32 (vuint8mf4x5_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u8mf4x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u8mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei16_v_u8mf4x6_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u8mf4x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u8mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei16_v_u8mf4x6_tu_vl32 (vuint8mf4x6_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u8mf4x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u8mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei16_v_u8mf4x7_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u8mf4x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u8mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei16_v_u8mf4x7_tu_vl32 (vuint8mf4x7_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u8mf4x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u8mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei16_v_u8mf4x8_ta_vl32 (uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u8mf4x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u8mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei16_v_u8mf4x8_tu_vl32 (vuint8mf4x8_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u8mf4x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u16mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei16_v_u16mf2x2_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u16mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u16mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei16_v_u16mf2x2_tu_vl32 (vuint16mf2x2_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u16mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u16mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei16_v_u16mf2x3_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u16mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u16mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei16_v_u16mf2x3_tu_vl32 (vuint16mf2x3_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u16mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u16mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei16_v_u16mf2x4_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u16mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u16mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei16_v_u16mf2x4_tu_vl32 (vuint16mf2x4_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u16mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u16mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei16_v_u16mf2x5_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u16mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u16mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei16_v_u16mf2x5_tu_vl32 (vuint16mf2x5_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u16mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u16mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei16_v_u16mf2x6_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u16mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u16mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei16_v_u16mf2x6_tu_vl32 (vuint16mf2x6_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u16mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u16mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei16_v_u16mf2x7_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u16mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u16mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei16_v_u16mf2x7_tu_vl32 (vuint16mf2x7_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u16mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u16mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei16_v_u16mf2x8_ta_vl32 (uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u16mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u16mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei16_v_u16mf2x8_tu_vl32 (vuint16mf2x8_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u16mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u32m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei16_v_u32m1x2_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u32m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u32m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei16_v_u32m1x2_tu_vl32 (vuint32m1x2_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u32m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u32m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei16_v_u32m1x3_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u32m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u32m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei16_v_u32m1x3_tu_vl32 (vuint32m1x3_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u32m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u32m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei16_v_u32m1x4_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u32m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u32m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei16_v_u32m1x4_tu_vl32 (vuint32m1x4_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u32m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u32m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei16_v_u32m1x5_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u32m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u32m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei16_v_u32m1x5_tu_vl32 (vuint32m1x5_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg5ei16_v_u32m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u32m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei16_v_u32m1x6_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u32m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u32m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei16_v_u32m1x6_tu_vl32 (vuint32m1x6_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg6ei16_v_u32m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u32m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei16_v_u32m1x7_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u32m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u32m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei16_v_u32m1x7_tu_vl32 (vuint32m1x7_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg7ei16_v_u32m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u32m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei16_v_u32m1x8_ta_vl32 (uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u32m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u32m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei16_v_u32m1x8_tu_vl32 (vuint32m1x8_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vloxseg8ei16_v_u32m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u64m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei16_v_u64m2x2_ta_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u64m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u64m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei16_v_u64m2x2_tu_vl32 (vuint64m2x2_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg2ei16_v_u64m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u64m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei16_v_u64m2x3_ta_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u64m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u64m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei16_v_u64m2x3_tu_vl32 (vuint64m2x3_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg3ei16_v_u64m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u64m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei16_v_u64m2x4_ta_vl32 (uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u64m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u64m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei16_v_u64m2x4_tu_vl32 (vuint64m2x4_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vloxseg4ei16_v_u64m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei16_v_u8mf2x2_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u8mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei16_v_u8mf2x2_tu_vl32 (vuint8mf2x2_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u8mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u8mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei16_v_u8mf2x3_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u8mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u8mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei16_v_u8mf2x3_tu_vl32 (vuint8mf2x3_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u8mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u8mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei16_v_u8mf2x4_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u8mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u8mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei16_v_u8mf2x4_tu_vl32 (vuint8mf2x4_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u8mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u8mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei16_v_u8mf2x5_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg5ei16_v_u8mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u8mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei16_v_u8mf2x5_tu_vl32 (vuint8mf2x5_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg5ei16_v_u8mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u8mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei16_v_u8mf2x6_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg6ei16_v_u8mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u8mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei16_v_u8mf2x6_tu_vl32 (vuint8mf2x6_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg6ei16_v_u8mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u8mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei16_v_u8mf2x7_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg7ei16_v_u8mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u8mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei16_v_u8mf2x7_tu_vl32 (vuint8mf2x7_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg7ei16_v_u8mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u8mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei16_v_u8mf2x8_ta_vl32 (uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg8ei16_v_u8mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u8mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei16_v_u8mf2x8_tu_vl32 (vuint8mf2x8_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vloxseg8ei16_v_u8mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u16m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei16_v_u16m1x2_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u16m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u16m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei16_v_u16m1x2_tu_vl32 (vuint16m1x2_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u16m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u16m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei16_v_u16m1x3_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u16m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u16m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei16_v_u16m1x3_tu_vl32 (vuint16m1x3_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u16m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u16m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei16_v_u16m1x4_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u16m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u16m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei16_v_u16m1x4_tu_vl32 (vuint16m1x4_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u16m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u16m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei16_v_u16m1x5_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg5ei16_v_u16m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u16m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei16_v_u16m1x5_tu_vl32 (vuint16m1x5_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg5ei16_v_u16m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u16m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei16_v_u16m1x6_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg6ei16_v_u16m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u16m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei16_v_u16m1x6_tu_vl32 (vuint16m1x6_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg6ei16_v_u16m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u16m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei16_v_u16m1x7_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg7ei16_v_u16m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u16m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei16_v_u16m1x7_tu_vl32 (vuint16m1x7_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg7ei16_v_u16m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u16m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei16_v_u16m1x8_ta_vl32 (uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg8ei16_v_u16m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u16m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei16_v_u16m1x8_tu_vl32 (vuint16m1x8_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vloxseg8ei16_v_u16m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u32m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei16_v_u32m2x2_ta_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u32m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u32m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei16_v_u32m2x2_tu_vl32 (vuint32m2x2_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u32m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u32m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei16_v_u32m2x3_ta_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u32m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u32m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei16_v_u32m2x3_tu_vl32 (vuint32m2x3_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg3ei16_v_u32m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u32m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei16_v_u32m2x4_ta_vl32 (uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u32m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u32m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei16_v_u32m2x4_tu_vl32 (vuint32m2x4_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vloxseg4ei16_v_u32m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u64m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei16_v_u64m4x2_ta_vl32 (uint64_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u64m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u64m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei16_v_u64m4x2_tu_vl32 (vuint64m4x2_t dest, uint64_t *base, vuint16m1_t bindex)
{
  return vloxseg2ei16_v_u64m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei16_v_u8m1x2_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u8m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei16_v_u8m1x2_tu_vl32 (vuint8m1x2_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u8m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u8m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei16_v_u8m1x3_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg3ei16_v_u8m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u8m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei16_v_u8m1x3_tu_vl32 (vuint8m1x3_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg3ei16_v_u8m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u8m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei16_v_u8m1x4_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg4ei16_v_u8m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u8m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei16_v_u8m1x4_tu_vl32 (vuint8m1x4_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg4ei16_v_u8m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u8m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei16_v_u8m1x5_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg5ei16_v_u8m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei16_v_u8m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei16_v_u8m1x5_tu_vl32 (vuint8m1x5_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg5ei16_v_u8m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u8m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei16_v_u8m1x6_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg6ei16_v_u8m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei16_v_u8m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei16_v_u8m1x6_tu_vl32 (vuint8m1x6_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg6ei16_v_u8m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u8m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei16_v_u8m1x7_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg7ei16_v_u8m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei16_v_u8m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei16_v_u8m1x7_tu_vl32 (vuint8m1x7_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg7ei16_v_u8m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u8m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei16_v_u8m1x8_ta_vl32 (uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg8ei16_v_u8m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei16_v_u8m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei16_v_u8m1x8_tu_vl32 (vuint8m1x8_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vloxseg8ei16_v_u8m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u16m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei16_v_u16m2x2_ta_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u16m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u16m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei16_v_u16m2x2_tu_vl32 (vuint16m2x2_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u16m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u16m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei16_v_u16m2x3_ta_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg3ei16_v_u16m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u16m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei16_v_u16m2x3_tu_vl32 (vuint16m2x3_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg3ei16_v_u16m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u16m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei16_v_u16m2x4_ta_vl32 (uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg4ei16_v_u16m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u16m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei16_v_u16m2x4_tu_vl32 (vuint16m2x4_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vloxseg4ei16_v_u16m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u32m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei16_v_u32m4x2_ta_vl32 (uint32_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u32m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u32m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei16_v_u32m4x2_tu_vl32 (vuint32m4x2_t dest, uint32_t *base, vuint16m2_t bindex)
{
  return vloxseg2ei16_v_u32m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2x2_t
test_vloxseg2ei16_v_u8m2x2_ta_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg2ei16_v_u8m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2x2_t
test_vloxseg2ei16_v_u8m2x2_tu_vl32 (vuint8m2x2_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg2ei16_v_u8m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u8m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2x3_t
test_vloxseg3ei16_v_u8m2x3_ta_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg3ei16_v_u8m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei16_v_u8m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2x3_t
test_vloxseg3ei16_v_u8m2x3_tu_vl32 (vuint8m2x3_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg3ei16_v_u8m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u8m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2x4_t
test_vloxseg4ei16_v_u8m2x4_ta_vl32 (uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg4ei16_v_u8m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei16_v_u8m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m2x4_t
test_vloxseg4ei16_v_u8m2x4_tu_vl32 (vuint8m2x4_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vloxseg4ei16_v_u8m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u16m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4x2_t
test_vloxseg2ei16_v_u16m4x2_ta_vl32 (uint16_t *base, vuint16m4_t bindex)
{
  return vloxseg2ei16_v_u16m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u16m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m4x2_t
test_vloxseg2ei16_v_u16m4x2_tu_vl32 (vuint16m4x2_t dest, uint16_t *base, vuint16m4_t bindex)
{
  return vloxseg2ei16_v_u16m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m4x2_t
test_vloxseg2ei16_v_u8m4x2_ta_vl32 (uint8_t *base, vuint16m8_t bindex)
{
  return vloxseg2ei16_v_u8m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei16_v_u8m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m4x2_t
test_vloxseg2ei16_v_u8m4x2_tu_vl32 (vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex)
{
  return vloxseg2ei16_v_u8m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u8mf8x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei32_v_u8mf8x2_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u8mf8x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u8mf8x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei32_v_u8mf8x2_tu_vl32 (vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u8mf8x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u8mf8x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei32_v_u8mf8x3_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u8mf8x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u8mf8x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei32_v_u8mf8x3_tu_vl32 (vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u8mf8x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u8mf8x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei32_v_u8mf8x4_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u8mf8x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u8mf8x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei32_v_u8mf8x4_tu_vl32 (vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u8mf8x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u8mf8x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei32_v_u8mf8x5_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u8mf8x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u8mf8x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei32_v_u8mf8x5_tu_vl32 (vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u8mf8x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u8mf8x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei32_v_u8mf8x6_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u8mf8x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u8mf8x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei32_v_u8mf8x6_tu_vl32 (vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u8mf8x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u8mf8x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei32_v_u8mf8x7_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u8mf8x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u8mf8x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei32_v_u8mf8x7_tu_vl32 (vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u8mf8x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u8mf8x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei32_v_u8mf8x8_ta_vl32 (uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u8mf8x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u8mf8x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei32_v_u8mf8x8_tu_vl32 (vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u8mf8x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u16mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei32_v_u16mf4x2_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u16mf4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u16mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei32_v_u16mf4x2_tu_vl32 (vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u16mf4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u16mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei32_v_u16mf4x3_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u16mf4x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u16mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei32_v_u16mf4x3_tu_vl32 (vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u16mf4x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u16mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei32_v_u16mf4x4_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u16mf4x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u16mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei32_v_u16mf4x4_tu_vl32 (vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u16mf4x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u16mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei32_v_u16mf4x5_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u16mf4x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u16mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei32_v_u16mf4x5_tu_vl32 (vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u16mf4x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u16mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei32_v_u16mf4x6_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u16mf4x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u16mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei32_v_u16mf4x6_tu_vl32 (vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u16mf4x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u16mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei32_v_u16mf4x7_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u16mf4x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u16mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei32_v_u16mf4x7_tu_vl32 (vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u16mf4x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u16mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei32_v_u16mf4x8_ta_vl32 (uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u16mf4x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u16mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei32_v_u16mf4x8_tu_vl32 (vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u16mf4x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u32mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei32_v_u32mf2x2_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u32mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u32mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei32_v_u32mf2x2_tu_vl32 (vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u32mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u32mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei32_v_u32mf2x3_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u32mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u32mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei32_v_u32mf2x3_tu_vl32 (vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u32mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u32mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei32_v_u32mf2x4_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u32mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u32mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei32_v_u32mf2x4_tu_vl32 (vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u32mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u32mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei32_v_u32mf2x5_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u32mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u32mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei32_v_u32mf2x5_tu_vl32 (vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u32mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u32mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei32_v_u32mf2x6_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u32mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u32mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei32_v_u32mf2x6_tu_vl32 (vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u32mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u32mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei32_v_u32mf2x7_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u32mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u32mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei32_v_u32mf2x7_tu_vl32 (vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u32mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u32mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei32_v_u32mf2x8_ta_vl32 (uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u32mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u32mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei32_v_u32mf2x8_tu_vl32 (vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u32mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u64m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei32_v_u64m1x2_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u64m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u64m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei32_v_u64m1x2_tu_vl32 (vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg2ei32_v_u64m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u64m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei32_v_u64m1x3_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u64m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u64m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei32_v_u64m1x3_tu_vl32 (vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg3ei32_v_u64m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u64m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei32_v_u64m1x4_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u64m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u64m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei32_v_u64m1x4_tu_vl32 (vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg4ei32_v_u64m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u64m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei32_v_u64m1x5_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u64m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u64m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei32_v_u64m1x5_tu_vl32 (vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg5ei32_v_u64m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u64m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei32_v_u64m1x6_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u64m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u64m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei32_v_u64m1x6_tu_vl32 (vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg6ei32_v_u64m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u64m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei32_v_u64m1x7_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u64m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u64m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei32_v_u64m1x7_tu_vl32 (vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg7ei32_v_u64m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u64m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei32_v_u64m1x8_ta_vl32 (uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u64m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u64m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei32_v_u64m1x8_tu_vl32 (vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vloxseg8ei32_v_u64m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u8mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei32_v_u8mf4x2_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u8mf4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u8mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei32_v_u8mf4x2_tu_vl32 (vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u8mf4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u8mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei32_v_u8mf4x3_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u8mf4x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u8mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei32_v_u8mf4x3_tu_vl32 (vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u8mf4x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u8mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei32_v_u8mf4x4_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u8mf4x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u8mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei32_v_u8mf4x4_tu_vl32 (vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u8mf4x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u8mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei32_v_u8mf4x5_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u8mf4x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u8mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei32_v_u8mf4x5_tu_vl32 (vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u8mf4x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u8mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei32_v_u8mf4x6_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u8mf4x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u8mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei32_v_u8mf4x6_tu_vl32 (vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u8mf4x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u8mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei32_v_u8mf4x7_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u8mf4x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u8mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei32_v_u8mf4x7_tu_vl32 (vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u8mf4x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u8mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei32_v_u8mf4x8_ta_vl32 (uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u8mf4x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u8mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei32_v_u8mf4x8_tu_vl32 (vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u8mf4x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u16mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei32_v_u16mf2x2_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u16mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u16mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei32_v_u16mf2x2_tu_vl32 (vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u16mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u16mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei32_v_u16mf2x3_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u16mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u16mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei32_v_u16mf2x3_tu_vl32 (vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u16mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u16mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei32_v_u16mf2x4_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u16mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u16mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei32_v_u16mf2x4_tu_vl32 (vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u16mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u16mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei32_v_u16mf2x5_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u16mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u16mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei32_v_u16mf2x5_tu_vl32 (vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u16mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u16mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei32_v_u16mf2x6_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u16mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u16mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei32_v_u16mf2x6_tu_vl32 (vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u16mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u16mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei32_v_u16mf2x7_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u16mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u16mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei32_v_u16mf2x7_tu_vl32 (vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u16mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u16mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei32_v_u16mf2x8_ta_vl32 (uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u16mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u16mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei32_v_u16mf2x8_tu_vl32 (vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u16mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u32m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei32_v_u32m1x2_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u32m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u32m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei32_v_u32m1x2_tu_vl32 (vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u32m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u32m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei32_v_u32m1x3_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u32m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u32m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei32_v_u32m1x3_tu_vl32 (vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u32m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u32m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei32_v_u32m1x4_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u32m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u32m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei32_v_u32m1x4_tu_vl32 (vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u32m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u32m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei32_v_u32m1x5_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u32m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u32m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei32_v_u32m1x5_tu_vl32 (vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg5ei32_v_u32m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u32m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei32_v_u32m1x6_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u32m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u32m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei32_v_u32m1x6_tu_vl32 (vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg6ei32_v_u32m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u32m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei32_v_u32m1x7_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u32m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u32m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei32_v_u32m1x7_tu_vl32 (vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg7ei32_v_u32m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u32m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei32_v_u32m1x8_ta_vl32 (uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u32m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u32m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei32_v_u32m1x8_tu_vl32 (vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vloxseg8ei32_v_u32m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u64m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_ta_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u64m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u64m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei32_v_u64m2x2_tu_vl32 (vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg2ei32_v_u64m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u64m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_ta_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u64m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u64m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei32_v_u64m2x3_tu_vl32 (vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg3ei32_v_u64m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u64m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_ta_vl32 (uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u64m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u64m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei32_v_u64m2x4_tu_vl32 (vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vloxseg4ei32_v_u64m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u8mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u8mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u8mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei32_v_u8mf2x2_tu_vl32 (vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u8mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u8mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u8mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u8mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei32_v_u8mf2x3_tu_vl32 (vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u8mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u8mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u8mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u8mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei32_v_u8mf2x4_tu_vl32 (vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u8mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u8mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_u8mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u8mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei32_v_u8mf2x5_tu_vl32 (vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_u8mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u8mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_u8mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u8mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei32_v_u8mf2x6_tu_vl32 (vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_u8mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u8mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_u8mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u8mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei32_v_u8mf2x7_tu_vl32 (vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_u8mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u8mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_ta_vl32 (uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_u8mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u8mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei32_v_u8mf2x8_tu_vl32 (vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_u8mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u16m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u16m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u16m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei32_v_u16m1x2_tu_vl32 (vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u16m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u16m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u16m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u16m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei32_v_u16m1x3_tu_vl32 (vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u16m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u16m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u16m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u16m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei32_v_u16m1x4_tu_vl32 (vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u16m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u16m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_u16m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u16m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei32_v_u16m1x5_tu_vl32 (vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg5ei32_v_u16m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u16m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_u16m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u16m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei32_v_u16m1x6_tu_vl32 (vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg6ei32_v_u16m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u16m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_u16m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u16m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei32_v_u16m1x7_tu_vl32 (vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg7ei32_v_u16m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u16m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_ta_vl32 (uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_u16m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u16m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei32_v_u16m1x8_tu_vl32 (vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vloxseg8ei32_v_u16m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u32m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_ta_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u32m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u32m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei32_v_u32m2x2_tu_vl32 (vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u32m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u32m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_ta_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u32m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u32m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei32_v_u32m2x3_tu_vl32 (vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg3ei32_v_u32m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u32m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_ta_vl32 (uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u32m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u32m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei32_v_u32m2x4_tu_vl32 (vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vloxseg4ei32_v_u32m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u64m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_ta_vl32 (uint64_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u64m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u64m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei32_v_u64m4x2_tu_vl32 (vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex)
{
  return vloxseg2ei32_v_u64m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u8m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u8m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u8m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei32_v_u8m1x2_tu_vl32 (vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u8m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u8m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_u8m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u8m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei32_v_u8m1x3_tu_vl32 (vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_u8m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u8m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_u8m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u8m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei32_v_u8m1x4_tu_vl32 (vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_u8m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u8m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg5ei32_v_u8m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei32_v_u8m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei32_v_u8m1x5_tu_vl32 (vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg5ei32_v_u8m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u8m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg6ei32_v_u8m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei32_v_u8m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei32_v_u8m1x6_tu_vl32 (vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg6ei32_v_u8m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u8m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg7ei32_v_u8m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei32_v_u8m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei32_v_u8m1x7_tu_vl32 (vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg7ei32_v_u8m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u8m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_ta_vl32 (uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg8ei32_v_u8m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei32_v_u8m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei32_v_u8m1x8_tu_vl32 (vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vloxseg8ei32_v_u8m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u16m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_ta_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u16m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u16m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei32_v_u16m2x2_tu_vl32 (vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u16m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u16m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_ta_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_u16m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u16m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei32_v_u16m2x3_tu_vl32 (vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg3ei32_v_u16m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u16m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_ta_vl32 (uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_u16m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u16m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei32_v_u16m2x4_tu_vl32 (vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vloxseg4ei32_v_u16m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u32m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_ta_vl32 (uint32_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u32m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u32m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei32_v_u32m4x2_tu_vl32 (vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex)
{
  return vloxseg2ei32_v_u32m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u8m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_ta_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_u8m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u8m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2x2_t
test_vloxseg2ei32_v_u8m2x2_tu_vl32 (vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_u8m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u8m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_ta_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg3ei32_v_u8m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei32_v_u8m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2x3_t
test_vloxseg3ei32_v_u8m2x3_tu_vl32 (vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg3ei32_v_u8m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u8m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_ta_vl32 (uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg4ei32_v_u8m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei32_v_u8m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m2x4_t
test_vloxseg4ei32_v_u8m2x4_tu_vl32 (vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vloxseg4ei32_v_u8m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u16m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_ta_vl32 (uint16_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_u16m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei32_v_u16m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m4x2_t
test_vloxseg2ei32_v_u16m4x2_tu_vl32 (vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex)
{
  return vloxseg2ei32_v_u16m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u8mf8x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u8mf8x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u8mf8x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei64_v_u8mf8x2_tu_vl32 (vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u8mf8x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u8mf8x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u8mf8x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u8mf8x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei64_v_u8mf8x3_tu_vl32 (vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u8mf8x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u8mf8x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u8mf8x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u8mf8x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei64_v_u8mf8x4_tu_vl32 (vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u8mf8x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u8mf8x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u8mf8x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u8mf8x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei64_v_u8mf8x5_tu_vl32 (vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u8mf8x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u8mf8x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u8mf8x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u8mf8x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei64_v_u8mf8x6_tu_vl32 (vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u8mf8x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u8mf8x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u8mf8x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u8mf8x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei64_v_u8mf8x7_tu_vl32 (vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u8mf8x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u8mf8x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_ta_vl32 (uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u8mf8x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u8mf8x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei64_v_u8mf8x8_tu_vl32 (vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u8mf8x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u16mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u16mf4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u16mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei64_v_u16mf4x2_tu_vl32 (vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u16mf4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u16mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u16mf4x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u16mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei64_v_u16mf4x3_tu_vl32 (vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u16mf4x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u16mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u16mf4x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u16mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei64_v_u16mf4x4_tu_vl32 (vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u16mf4x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u16mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u16mf4x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u16mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei64_v_u16mf4x5_tu_vl32 (vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u16mf4x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u16mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u16mf4x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u16mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei64_v_u16mf4x6_tu_vl32 (vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u16mf4x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u16mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u16mf4x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u16mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei64_v_u16mf4x7_tu_vl32 (vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u16mf4x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u16mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_ta_vl32 (uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u16mf4x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u16mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei64_v_u16mf4x8_tu_vl32 (vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u16mf4x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u32mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u32mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u32mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei64_v_u32mf2x2_tu_vl32 (vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u32mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u32mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u32mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u32mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei64_v_u32mf2x3_tu_vl32 (vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u32mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u32mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u32mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u32mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei64_v_u32mf2x4_tu_vl32 (vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u32mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u32mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u32mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u32mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei64_v_u32mf2x5_tu_vl32 (vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u32mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u32mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u32mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u32mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei64_v_u32mf2x6_tu_vl32 (vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u32mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u32mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u32mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u32mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei64_v_u32mf2x7_tu_vl32 (vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u32mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u32mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_ta_vl32 (uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u32mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u32mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei64_v_u32mf2x8_tu_vl32 (vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u32mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u64m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u64m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u64m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei64_v_u64m1x2_tu_vl32 (vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg2ei64_v_u64m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u64m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u64m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u64m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei64_v_u64m1x3_tu_vl32 (vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg3ei64_v_u64m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u64m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u64m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u64m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei64_v_u64m1x4_tu_vl32 (vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg4ei64_v_u64m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u64m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u64m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u64m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei64_v_u64m1x5_tu_vl32 (vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg5ei64_v_u64m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u64m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u64m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u64m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei64_v_u64m1x6_tu_vl32 (vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg6ei64_v_u64m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u64m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u64m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u64m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei64_v_u64m1x7_tu_vl32 (vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg7ei64_v_u64m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u64m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_ta_vl32 (uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u64m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u64m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei64_v_u64m1x8_tu_vl32 (vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vloxseg8ei64_v_u64m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u8mf4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u8mf4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u8mf4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei64_v_u8mf4x2_tu_vl32 (vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u8mf4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u8mf4x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u8mf4x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u8mf4x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei64_v_u8mf4x3_tu_vl32 (vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u8mf4x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u8mf4x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u8mf4x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u8mf4x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei64_v_u8mf4x4_tu_vl32 (vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u8mf4x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u8mf4x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u8mf4x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u8mf4x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei64_v_u8mf4x5_tu_vl32 (vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u8mf4x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u8mf4x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u8mf4x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u8mf4x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei64_v_u8mf4x6_tu_vl32 (vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u8mf4x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u8mf4x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u8mf4x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u8mf4x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei64_v_u8mf4x7_tu_vl32 (vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u8mf4x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u8mf4x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_ta_vl32 (uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u8mf4x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u8mf4x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei64_v_u8mf4x8_tu_vl32 (vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u8mf4x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u16mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u16mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u16mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei64_v_u16mf2x2_tu_vl32 (vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u16mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u16mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u16mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u16mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei64_v_u16mf2x3_tu_vl32 (vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u16mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u16mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u16mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u16mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei64_v_u16mf2x4_tu_vl32 (vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u16mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u16mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u16mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u16mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei64_v_u16mf2x5_tu_vl32 (vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u16mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u16mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u16mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u16mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei64_v_u16mf2x6_tu_vl32 (vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u16mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u16mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u16mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u16mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei64_v_u16mf2x7_tu_vl32 (vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u16mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u16mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_ta_vl32 (uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u16mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u16mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei64_v_u16mf2x8_tu_vl32 (vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u16mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u32m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u32m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u32m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei64_v_u32m1x2_tu_vl32 (vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u32m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u32m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u32m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u32m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei64_v_u32m1x3_tu_vl32 (vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u32m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u32m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u32m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u32m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei64_v_u32m1x4_tu_vl32 (vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u32m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u32m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u32m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u32m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei64_v_u32m1x5_tu_vl32 (vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg5ei64_v_u32m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u32m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u32m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u32m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei64_v_u32m1x6_tu_vl32 (vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg6ei64_v_u32m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u32m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u32m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u32m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei64_v_u32m1x7_tu_vl32 (vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg7ei64_v_u32m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u32m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_ta_vl32 (uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u32m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u32m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei64_v_u32m1x8_tu_vl32 (vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vloxseg8ei64_v_u32m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u64m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_ta_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u64m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u64m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei64_v_u64m2x2_tu_vl32 (vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg2ei64_v_u64m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u64m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_ta_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u64m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u64m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei64_v_u64m2x3_tu_vl32 (vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg3ei64_v_u64m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u64m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_ta_vl32 (uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u64m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u64m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei64_v_u64m2x4_tu_vl32 (vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vloxseg4ei64_v_u64m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u8mf2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u8mf2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u8mf2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei64_v_u8mf2x2_tu_vl32 (vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u8mf2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u8mf2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u8mf2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u8mf2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei64_v_u8mf2x3_tu_vl32 (vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u8mf2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u8mf2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u8mf2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u8mf2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei64_v_u8mf2x4_tu_vl32 (vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u8mf2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u8mf2x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_u8mf2x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u8mf2x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei64_v_u8mf2x5_tu_vl32 (vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_u8mf2x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u8mf2x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_u8mf2x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u8mf2x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei64_v_u8mf2x6_tu_vl32 (vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_u8mf2x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u8mf2x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_u8mf2x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u8mf2x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei64_v_u8mf2x7_tu_vl32 (vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_u8mf2x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u8mf2x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_ta_vl32 (uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_u8mf2x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u8mf2x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei64_v_u8mf2x8_tu_vl32 (vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_u8mf2x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u16m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u16m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u16m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei64_v_u16m1x2_tu_vl32 (vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u16m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u16m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u16m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u16m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei64_v_u16m1x3_tu_vl32 (vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u16m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u16m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u16m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u16m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei64_v_u16m1x4_tu_vl32 (vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u16m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u16m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_u16m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u16m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei64_v_u16m1x5_tu_vl32 (vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg5ei64_v_u16m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u16m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_u16m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u16m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei64_v_u16m1x6_tu_vl32 (vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg6ei64_v_u16m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u16m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_u16m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u16m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei64_v_u16m1x7_tu_vl32 (vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg7ei64_v_u16m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u16m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_ta_vl32 (uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_u16m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u16m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei64_v_u16m1x8_tu_vl32 (vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vloxseg8ei64_v_u16m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u32m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_ta_vl32 (uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u32m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u32m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei64_v_u32m2x2_tu_vl32 (vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u32m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u32m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_ta_vl32 (uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u32m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u32m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei64_v_u32m2x3_tu_vl32 (vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg3ei64_v_u32m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u32m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_ta_vl32 (uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u32m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u32m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei64_v_u32m2x4_tu_vl32 (vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vloxseg4ei64_v_u32m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u64m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_ta_vl32 (uint64_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u64m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u64m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei64_v_u64m4x2_tu_vl32 (vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex)
{
  return vloxseg2ei64_v_u64m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u8m1x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u8m1x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u8m1x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei64_v_u8m1x2_tu_vl32 (vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u8m1x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u8m1x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_u8m1x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u8m1x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei64_v_u8m1x3_tu_vl32 (vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_u8m1x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u8m1x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_u8m1x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u8m1x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei64_v_u8m1x4_tu_vl32 (vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_u8m1x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u8m1x5_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg5ei64_v_u8m1x5_ta (base, bindex, 32);
}

/*
** test_vloxseg5ei64_v_u8m1x5_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei64_v_u8m1x5_tu_vl32 (vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg5ei64_v_u8m1x5_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u8m1x6_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg6ei64_v_u8m1x6_ta (base, bindex, 32);
}

/*
** test_vloxseg6ei64_v_u8m1x6_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei64_v_u8m1x6_tu_vl32 (vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg6ei64_v_u8m1x6_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u8m1x7_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg7ei64_v_u8m1x7_ta (base, bindex, 32);
}

/*
** test_vloxseg7ei64_v_u8m1x7_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei64_v_u8m1x7_tu_vl32 (vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg7ei64_v_u8m1x7_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u8m1x8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_ta_vl32 (uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg8ei64_v_u8m1x8_ta (base, bindex, 32);
}

/*
** test_vloxseg8ei64_v_u8m1x8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]
**  ...
**	vloxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei64_v_u8m1x8_tu_vl32 (vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vloxseg8ei64_v_u8m1x8_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u16m2x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_ta_vl32 (uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u16m2x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u16m2x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei64_v_u16m2x2_tu_vl32 (vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u16m2x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u16m2x3_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_ta_vl32 (uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_u16m2x3_ta (base, bindex, 32);
}

/*
** test_vloxseg3ei64_v_u16m2x3_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei64_v_u16m2x3_tu_vl32 (vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg3ei64_v_u16m2x3_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u16m2x4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_ta_vl32 (uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_u16m2x4_ta (base, bindex, 32);
}

/*
** test_vloxseg4ei64_v_u16m2x4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vloxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei64_v_u16m2x4_tu_vl32 (vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vloxseg4ei64_v_u16m2x4_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u32m4x2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei64_v_u32m4x2_ta_vl32 (uint32_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u32m4x2_ta (base, bindex, 32);
}

/*
** test_vloxseg2ei64_v_u32m4x2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vloxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei64_v_u32m4x2_tu_vl32 (vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex)
{
  return vloxseg2ei64_v_u32m4x2_tu (dest, base, bindex, 32);
}

/*
** test_vloxseg2ei8_v_u8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei8_v_u8mf8x2 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf8x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8mf8x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei8_v_u8mf8x2_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u8mf8x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei8_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf8x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8mf8x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei8_v_u8mf8x2_m_vl31 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u8mf8x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei8_v_u8mf8x3 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf8x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u8mf8x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei8_v_u8mf8x3_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u8mf8x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei8_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf8x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u8mf8x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei8_v_u8mf8x3_m_vl31 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u8mf8x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei8_v_u8mf8x4 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf8x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u8mf8x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei8_v_u8mf8x4_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u8mf8x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei8_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf8x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u8mf8x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei8_v_u8mf8x4_m_vl31 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u8mf8x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei8_v_u8mf8x5 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf8x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u8mf8x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei8_v_u8mf8x5_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u8mf8x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei8_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf8x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u8mf8x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei8_v_u8mf8x5_m_vl31 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u8mf8x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei8_v_u8mf8x6 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf8x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u8mf8x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei8_v_u8mf8x6_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u8mf8x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei8_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf8x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u8mf8x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei8_v_u8mf8x6_m_vl31 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u8mf8x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei8_v_u8mf8x7 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf8x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u8mf8x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei8_v_u8mf8x7_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u8mf8x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei8_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf8x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u8mf8x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei8_v_u8mf8x7_m_vl31 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u8mf8x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei8_v_u8mf8x8 (uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf8x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u8mf8x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei8_v_u8mf8x8_vl31 (uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u8mf8x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei8_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf8x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u8mf8x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei8_v_u8mf8x8_m_vl31 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u8mf8x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei8_v_u16mf4x2 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16mf4x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u16mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei8_v_u16mf4x2_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u16mf4x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei8_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16mf4x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u16mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei8_v_u16mf4x2_m_vl31 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u16mf4x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei8_v_u16mf4x3 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16mf4x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u16mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei8_v_u16mf4x3_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u16mf4x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei8_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16mf4x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u16mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei8_v_u16mf4x3_m_vl31 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u16mf4x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei8_v_u16mf4x4 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16mf4x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u16mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei8_v_u16mf4x4_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u16mf4x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei8_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16mf4x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u16mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei8_v_u16mf4x4_m_vl31 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u16mf4x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei8_v_u16mf4x5 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16mf4x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u16mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei8_v_u16mf4x5_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u16mf4x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei8_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16mf4x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u16mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei8_v_u16mf4x5_m_vl31 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u16mf4x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei8_v_u16mf4x6 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16mf4x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u16mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei8_v_u16mf4x6_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u16mf4x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei8_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16mf4x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u16mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei8_v_u16mf4x6_m_vl31 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u16mf4x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei8_v_u16mf4x7 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16mf4x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u16mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei8_v_u16mf4x7_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u16mf4x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei8_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16mf4x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u16mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei8_v_u16mf4x7_m_vl31 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u16mf4x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei8_v_u16mf4x8 (uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16mf4x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u16mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei8_v_u16mf4x8_vl31 (uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u16mf4x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei8_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16mf4x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u16mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei8_v_u16mf4x8_m_vl31 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u16mf4x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei8_v_u32mf2x2 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32mf2x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u32mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei8_v_u32mf2x2_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u32mf2x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei8_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32mf2x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u32mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei8_v_u32mf2x2_m_vl31 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u32mf2x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei8_v_u32mf2x3 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32mf2x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u32mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei8_v_u32mf2x3_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u32mf2x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei8_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32mf2x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u32mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei8_v_u32mf2x3_m_vl31 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u32mf2x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei8_v_u32mf2x4 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32mf2x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u32mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei8_v_u32mf2x4_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u32mf2x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei8_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32mf2x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u32mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei8_v_u32mf2x4_m_vl31 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u32mf2x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei8_v_u32mf2x5 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u32mf2x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u32mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei8_v_u32mf2x5_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u32mf2x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei8_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u32mf2x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u32mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei8_v_u32mf2x5_m_vl31 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u32mf2x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei8_v_u32mf2x6 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u32mf2x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u32mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei8_v_u32mf2x6_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u32mf2x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei8_v_u32mf2x6_m (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u32mf2x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u32mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei8_v_u32mf2x6_m_vl31 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u32mf2x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei8_v_u32mf2x7 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u32mf2x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u32mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei8_v_u32mf2x7_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u32mf2x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei8_v_u32mf2x7_m (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u32mf2x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u32mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vloxseg7ei8_v_u32mf2x7_m_vl31 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u32mf2x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei8_v_u32mf2x8 (uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u32mf2x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u32mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei8_v_u32mf2x8_vl31 (uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u32mf2x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei8_v_u32mf2x8_m (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u32mf2x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u32mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vloxseg8ei8_v_u32mf2x8_m_vl31 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u32mf2x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei8_v_u64m1x2 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m1x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u64m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei8_v_u64m1x2_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u64m1x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei8_v_u64m1x2_m (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m1x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u64m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vloxseg2ei8_v_u64m1x2_m_vl31 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg2ei8_v_u64m1x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei8_v_u64m1x3 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u64m1x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u64m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei8_v_u64m1x3_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u64m1x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei8_v_u64m1x3_m (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u64m1x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u64m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vloxseg3ei8_v_u64m1x3_m_vl31 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg3ei8_v_u64m1x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei8_v_u64m1x4 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u64m1x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u64m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei8_v_u64m1x4_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u64m1x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei8_v_u64m1x4_m (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u64m1x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u64m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vloxseg4ei8_v_u64m1x4_m_vl31 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg4ei8_v_u64m1x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei8_v_u64m1x5 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u64m1x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u64m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei8_v_u64m1x5_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u64m1x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei8_v_u64m1x5_m (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u64m1x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u64m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vloxseg5ei8_v_u64m1x5_m_vl31 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg5ei8_v_u64m1x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei8_v_u64m1x6 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u64m1x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u64m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei8_v_u64m1x6_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u64m1x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei8_v_u64m1x6_m (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u64m1x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u64m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vloxseg6ei8_v_u64m1x6_m_vl31 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg6ei8_v_u64m1x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei8_v_u64m1x7 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u64m1x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u64m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei8_v_u64m1x7_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u64m1x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei8_v_u64m1x7_m (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u64m1x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u64m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vloxseg7ei8_v_u64m1x7_m_vl31 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg7ei8_v_u64m1x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei8_v_u64m1x8 (uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u64m1x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u64m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei8_v_u64m1x8_vl31 (uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u64m1x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei8_v_u64m1x8_m (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u64m1x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u64m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vloxseg8ei8_v_u64m1x8_m_vl31 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint8mf8_t bindex)
{
  return vloxseg8ei8_v_u64m1x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei8_v_u8mf4x2 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf4x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei8_v_u8mf4x2_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u8mf4x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei8_v_u8mf4x2_m (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf4x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vloxseg2ei8_v_u8mf4x2_m_vl31 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u8mf4x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u8mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei8_v_u8mf4x3 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf4x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u8mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei8_v_u8mf4x3_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u8mf4x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei8_v_u8mf4x3_m (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf4x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u8mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vloxseg3ei8_v_u8mf4x3_m_vl31 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u8mf4x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u8mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei8_v_u8mf4x4 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf4x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u8mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei8_v_u8mf4x4_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u8mf4x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei8_v_u8mf4x4_m (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf4x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u8mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vloxseg4ei8_v_u8mf4x4_m_vl31 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u8mf4x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u8mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei8_v_u8mf4x5 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf4x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u8mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei8_v_u8mf4x5_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u8mf4x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei8_v_u8mf4x5_m (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf4x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u8mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vloxseg5ei8_v_u8mf4x5_m_vl31 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u8mf4x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u8mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei8_v_u8mf4x6 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf4x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u8mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei8_v_u8mf4x6_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u8mf4x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u8mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei8_v_u8mf4x6_m (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf4x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u8mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vloxseg6ei8_v_u8mf4x6_m_vl31 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u8mf4x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u8mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei8_v_u8mf4x7 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf4x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u8mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei8_v_u8mf4x7_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u8mf4x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u8mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei8_v_u8mf4x7_m (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf4x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u8mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vloxseg7ei8_v_u8mf4x7_m_vl31 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u8mf4x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u8mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei8_v_u8mf4x8 (uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf4x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u8mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei8_v_u8mf4x8_vl31 (uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u8mf4x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u8mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei8_v_u8mf4x8_m (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf4x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u8mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vloxseg8ei8_v_u8mf4x8_m_vl31 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u8mf4x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei8_v_u16mf2x2 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16mf2x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u16mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei8_v_u16mf2x2_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u16mf2x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei8_v_u16mf2x2_m (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16mf2x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u16mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vloxseg2ei8_v_u16mf2x2_m_vl31 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u16mf2x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei8_v_u16mf2x3 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16mf2x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u16mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei8_v_u16mf2x3_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u16mf2x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei8_v_u16mf2x3_m (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16mf2x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u16mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vloxseg3ei8_v_u16mf2x3_m_vl31 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u16mf2x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei8_v_u16mf2x4 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16mf2x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u16mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei8_v_u16mf2x4_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u16mf2x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei8_v_u16mf2x4_m (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16mf2x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u16mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vloxseg4ei8_v_u16mf2x4_m_vl31 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u16mf2x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei8_v_u16mf2x5 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16mf2x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u16mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei8_v_u16mf2x5_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u16mf2x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei8_v_u16mf2x5_m (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16mf2x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u16mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vloxseg5ei8_v_u16mf2x5_m_vl31 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u16mf2x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei8_v_u16mf2x6 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16mf2x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u16mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei8_v_u16mf2x6_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u16mf2x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei8_v_u16mf2x6_m (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16mf2x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u16mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vloxseg6ei8_v_u16mf2x6_m_vl31 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u16mf2x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei8_v_u16mf2x7 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16mf2x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u16mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei8_v_u16mf2x7_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u16mf2x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei8_v_u16mf2x7_m (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16mf2x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u16mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vloxseg7ei8_v_u16mf2x7_m_vl31 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u16mf2x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei8_v_u16mf2x8 (uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16mf2x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u16mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei8_v_u16mf2x8_vl31 (uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u16mf2x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei8_v_u16mf2x8_m (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16mf2x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u16mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vloxseg8ei8_v_u16mf2x8_m_vl31 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u16mf2x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei8_v_u32m1x2 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m1x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u32m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei8_v_u32m1x2_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u32m1x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei8_v_u32m1x2_m (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m1x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u32m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vloxseg2ei8_v_u32m1x2_m_vl31 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u32m1x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei8_v_u32m1x3 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32m1x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u32m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei8_v_u32m1x3_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u32m1x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei8_v_u32m1x3_m (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32m1x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u32m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vloxseg3ei8_v_u32m1x3_m_vl31 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u32m1x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei8_v_u32m1x4 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32m1x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u32m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei8_v_u32m1x4_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u32m1x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei8_v_u32m1x4_m (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32m1x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u32m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vloxseg4ei8_v_u32m1x4_m_vl31 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u32m1x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei8_v_u32m1x5 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u32m1x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u32m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei8_v_u32m1x5_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u32m1x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei8_v_u32m1x5_m (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u32m1x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u32m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vloxseg5ei8_v_u32m1x5_m_vl31 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg5ei8_v_u32m1x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei8_v_u32m1x6 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u32m1x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u32m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei8_v_u32m1x6_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u32m1x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei8_v_u32m1x6_m (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u32m1x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u32m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vloxseg6ei8_v_u32m1x6_m_vl31 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg6ei8_v_u32m1x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei8_v_u32m1x7 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u32m1x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u32m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei8_v_u32m1x7_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u32m1x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei8_v_u32m1x7_m (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u32m1x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u32m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vloxseg7ei8_v_u32m1x7_m_vl31 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg7ei8_v_u32m1x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei8_v_u32m1x8 (uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u32m1x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u32m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei8_v_u32m1x8_vl31 (uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u32m1x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei8_v_u32m1x8_m (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u32m1x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u32m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vloxseg8ei8_v_u32m1x8_m_vl31 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint8mf4_t bindex)
{
  return vloxseg8ei8_v_u32m1x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei8_v_u64m2x2 (uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m2x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u64m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei8_v_u64m2x2_vl31 (uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u64m2x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei8_v_u64m2x2_m (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m2x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u64m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vloxseg2ei8_v_u64m2x2_m_vl31 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg2ei8_v_u64m2x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei8_v_u64m2x3 (uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u64m2x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u64m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei8_v_u64m2x3_vl31 (uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u64m2x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei8_v_u64m2x3_m (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u64m2x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u64m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vloxseg3ei8_v_u64m2x3_m_vl31 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg3ei8_v_u64m2x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei8_v_u64m2x4 (uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u64m2x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u64m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei8_v_u64m2x4_vl31 (uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u64m2x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei8_v_u64m2x4_m (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u64m2x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u64m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vloxseg4ei8_v_u64m2x4_m_vl31 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint8mf4_t bindex)
{
  return vloxseg4ei8_v_u64m2x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei8_v_u8mf2x2 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf2x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei8_v_u8mf2x2_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u8mf2x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei8_v_u8mf2x2_m (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8mf2x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vloxseg2ei8_v_u8mf2x2_m_vl31 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u8mf2x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u8mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei8_v_u8mf2x3 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf2x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u8mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei8_v_u8mf2x3_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u8mf2x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u8mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei8_v_u8mf2x3_m (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8mf2x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u8mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vloxseg3ei8_v_u8mf2x3_m_vl31 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u8mf2x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u8mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei8_v_u8mf2x4 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf2x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u8mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei8_v_u8mf2x4_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u8mf2x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u8mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei8_v_u8mf2x4_m (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8mf2x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u8mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vloxseg4ei8_v_u8mf2x4_m_vl31 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u8mf2x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u8mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei8_v_u8mf2x5 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf2x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u8mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei8_v_u8mf2x5_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u8mf2x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u8mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei8_v_u8mf2x5_m (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8mf2x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u8mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vloxseg5ei8_v_u8mf2x5_m_vl31 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u8mf2x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u8mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei8_v_u8mf2x6 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf2x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u8mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei8_v_u8mf2x6_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u8mf2x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u8mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei8_v_u8mf2x6_m (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8mf2x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u8mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vloxseg6ei8_v_u8mf2x6_m_vl31 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u8mf2x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u8mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei8_v_u8mf2x7 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf2x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u8mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei8_v_u8mf2x7_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u8mf2x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u8mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei8_v_u8mf2x7_m (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8mf2x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u8mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vloxseg7ei8_v_u8mf2x7_m_vl31 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u8mf2x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u8mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei8_v_u8mf2x8 (uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf2x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u8mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei8_v_u8mf2x8_vl31 (uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u8mf2x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u8mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei8_v_u8mf2x8_m (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8mf2x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u8mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vloxseg8ei8_v_u8mf2x8_m_vl31 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u8mf2x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei8_v_u16m1x2 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m1x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u16m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei8_v_u16m1x2_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u16m1x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei8_v_u16m1x2_m (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m1x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u16m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vloxseg2ei8_v_u16m1x2_m_vl31 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u16m1x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei8_v_u16m1x3 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16m1x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u16m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei8_v_u16m1x3_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u16m1x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei8_v_u16m1x3_m (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16m1x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u16m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vloxseg3ei8_v_u16m1x3_m_vl31 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u16m1x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei8_v_u16m1x4 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16m1x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u16m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei8_v_u16m1x4_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u16m1x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei8_v_u16m1x4_m (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16m1x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u16m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vloxseg4ei8_v_u16m1x4_m_vl31 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u16m1x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei8_v_u16m1x5 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16m1x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u16m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei8_v_u16m1x5_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u16m1x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei8_v_u16m1x5_m (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u16m1x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u16m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vloxseg5ei8_v_u16m1x5_m_vl31 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg5ei8_v_u16m1x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei8_v_u16m1x6 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16m1x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u16m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei8_v_u16m1x6_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u16m1x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei8_v_u16m1x6_m (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u16m1x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u16m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vloxseg6ei8_v_u16m1x6_m_vl31 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg6ei8_v_u16m1x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei8_v_u16m1x7 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16m1x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u16m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei8_v_u16m1x7_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u16m1x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei8_v_u16m1x7_m (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u16m1x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u16m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vloxseg7ei8_v_u16m1x7_m_vl31 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg7ei8_v_u16m1x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei8_v_u16m1x8 (uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16m1x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u16m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei8_v_u16m1x8_vl31 (uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u16m1x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei8_v_u16m1x8_m (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u16m1x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u16m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vloxseg8ei8_v_u16m1x8_m_vl31 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint8mf2_t bindex)
{
  return vloxseg8ei8_v_u16m1x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei8_v_u32m2x2 (uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m2x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u32m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei8_v_u32m2x2_vl31 (uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u32m2x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei8_v_u32m2x2_m (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m2x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u32m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vloxseg2ei8_v_u32m2x2_m_vl31 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u32m2x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei8_v_u32m2x3 (uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32m2x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u32m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei8_v_u32m2x3_vl31 (uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u32m2x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei8_v_u32m2x3_m (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u32m2x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u32m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vloxseg3ei8_v_u32m2x3_m_vl31 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg3ei8_v_u32m2x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei8_v_u32m2x4 (uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32m2x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u32m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei8_v_u32m2x4_vl31 (uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u32m2x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei8_v_u32m2x4_m (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u32m2x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u32m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vloxseg4ei8_v_u32m2x4_m_vl31 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint8mf2_t bindex)
{
  return vloxseg4ei8_v_u32m2x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei8_v_u64m4x2 (uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m4x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u64m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei8_v_u64m4x2_vl31 (uint64_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u64m4x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei8_v_u64m4x2_m (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u64m4x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u64m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vloxseg2ei8_v_u64m4x2_m_vl31 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint8mf2_t bindex)
{
  return vloxseg2ei8_v_u64m4x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei8_v_u8m1x2 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m1x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei8_v_u8m1x2_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u8m1x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei8_v_u8m1x2_m (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m1x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vloxseg2ei8_v_u8m1x2_m_vl31 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u8m1x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u8m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei8_v_u8m1x3 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8m1x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u8m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei8_v_u8m1x3_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u8m1x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u8m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei8_v_u8m1x3_m (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8m1x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u8m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vloxseg3ei8_v_u8m1x3_m_vl31 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u8m1x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u8m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei8_v_u8m1x4 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8m1x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u8m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei8_v_u8m1x4_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u8m1x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u8m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei8_v_u8m1x4_m (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8m1x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u8m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vloxseg4ei8_v_u8m1x4_m_vl31 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u8m1x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u8m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei8_v_u8m1x5 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8m1x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u8m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei8_v_u8m1x5_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg5ei8_v_u8m1x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei8_v_u8m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei8_v_u8m1x5_m (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg5ei8_v_u8m1x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei8_v_u8m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vloxseg5ei8_v_u8m1x5_m_vl31 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg5ei8_v_u8m1x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u8m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei8_v_u8m1x6 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8m1x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u8m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei8_v_u8m1x6_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg6ei8_v_u8m1x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei8_v_u8m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei8_v_u8m1x6_m (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg6ei8_v_u8m1x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei8_v_u8m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vloxseg6ei8_v_u8m1x6_m_vl31 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg6ei8_v_u8m1x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u8m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei8_v_u8m1x7 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8m1x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u8m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei8_v_u8m1x7_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg7ei8_v_u8m1x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei8_v_u8m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei8_v_u8m1x7_m (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg7ei8_v_u8m1x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei8_v_u8m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vloxseg7ei8_v_u8m1x7_m_vl31 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg7ei8_v_u8m1x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u8m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei8_v_u8m1x8 (uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8m1x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u8m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei8_v_u8m1x8_vl31 (uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg8ei8_v_u8m1x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei8_v_u8m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei8_v_u8m1x8_m (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg8ei8_v_u8m1x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei8_v_u8m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vloxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vloxseg8ei8_v_u8m1x8_m_vl31 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint8m1_t bindex)
{
  return vloxseg8ei8_v_u8m1x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei8_v_u16m2x2 (uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m2x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u16m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei8_v_u16m2x2_vl31 (uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u16m2x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei8_v_u16m2x2_m (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m2x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u16m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vloxseg2ei8_v_u16m2x2_m_vl31 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u16m2x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei8_v_u16m2x3 (uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16m2x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u16m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei8_v_u16m2x3_vl31 (uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u16m2x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei8_v_u16m2x3_m (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u16m2x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u16m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vloxseg3ei8_v_u16m2x3_m_vl31 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg3ei8_v_u16m2x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei8_v_u16m2x4 (uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16m2x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u16m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei8_v_u16m2x4_vl31 (uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u16m2x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei8_v_u16m2x4_m (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u16m2x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u16m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vloxseg4ei8_v_u16m2x4_m_vl31 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint8m1_t bindex)
{
  return vloxseg4ei8_v_u16m2x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei8_v_u32m4x2 (uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m4x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u32m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei8_v_u32m4x2_vl31 (uint32_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u32m4x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei8_v_u32m4x2_m (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u32m4x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u32m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vloxseg2ei8_v_u32m4x2_m_vl31 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint8m1_t bindex)
{
  return vloxseg2ei8_v_u32m4x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x2_t
test_vloxseg2ei8_v_u8m2x2 (uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m2x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x2_t
test_vloxseg2ei8_v_u8m2x2_vl31 (uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u8m2x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vloxseg2ei8_v_u8m2x2_m (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m2x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vloxseg2ei8_v_u8m2x2_m_vl31 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u8m2x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u8m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x3_t
test_vloxseg3ei8_v_u8m2x3 (uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8m2x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u8m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x3_t
test_vloxseg3ei8_v_u8m2x3_vl31 (uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg3ei8_v_u8m2x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei8_v_u8m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vloxseg3ei8_v_u8m2x3_m (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg3ei8_v_u8m2x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei8_v_u8m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vloxseg3ei8_v_u8m2x3_m_vl31 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg3ei8_v_u8m2x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u8m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x4_t
test_vloxseg4ei8_v_u8m2x4 (uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8m2x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u8m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2x4_t
test_vloxseg4ei8_v_u8m2x4_vl31 (uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg4ei8_v_u8m2x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei8_v_u8m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vloxseg4ei8_v_u8m2x4_m (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg4ei8_v_u8m2x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei8_v_u8m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vloxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vloxseg4ei8_v_u8m2x4_m_vl31 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint8m2_t bindex)
{
  return vloxseg4ei8_v_u8m2x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4x2_t
test_vloxseg2ei8_v_u16m4x2 (uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m4x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u16m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m4x2_t
test_vloxseg2ei8_v_u16m4x2_vl31 (uint16_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u16m4x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vloxseg2ei8_v_u16m4x2_m (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u16m4x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u16m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vloxseg2ei8_v_u16m4x2_m_vl31 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint8m2_t bindex)
{
  return vloxseg2ei8_v_u16m4x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4x2_t
test_vloxseg2ei8_v_u8m4x2 (uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m4x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vuint8m4x2_t
test_vloxseg2ei8_v_u8m4x2_vl31 (uint8_t *base, vuint8m4_t bindex)
{
  return vloxseg2ei8_v_u8m4x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei8_v_u8m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vloxseg2ei8_v_u8m4x2_m (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint8m4_t bindex, size_t vl)
{
  return vloxseg2ei8_v_u8m4x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei8_v_u8m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vloxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vloxseg2ei8_v_u8m4x2_m_vl31 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint8m4_t bindex)
{
  return vloxseg2ei8_v_u8m4x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei16_v_u8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei16_v_u8mf8x2 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8mf8x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei16_v_u8mf8x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei16_v_u8mf8x2_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u8mf8x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei16_v_u8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei16_v_u8mf8x2_m (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u8mf8x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei16_v_u8mf8x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vloxseg2ei16_v_u8mf8x2_m_vl31 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u8mf8x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei16_v_u8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei16_v_u8mf8x3 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8mf8x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei16_v_u8mf8x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei16_v_u8mf8x3_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u8mf8x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei16_v_u8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei16_v_u8mf8x3_m (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u8mf8x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei16_v_u8mf8x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vloxseg3ei16_v_u8mf8x3_m_vl31 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u8mf8x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei16_v_u8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei16_v_u8mf8x4 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8mf8x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei16_v_u8mf8x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei16_v_u8mf8x4_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u8mf8x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei16_v_u8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei16_v_u8mf8x4_m (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u8mf8x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei16_v_u8mf8x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vloxseg4ei16_v_u8mf8x4_m_vl31 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u8mf8x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei16_v_u8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei16_v_u8mf8x5 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u8mf8x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei16_v_u8mf8x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei16_v_u8mf8x5_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u8mf8x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei16_v_u8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei16_v_u8mf8x5_m (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u8mf8x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei16_v_u8mf8x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vloxseg5ei16_v_u8mf8x5_m_vl31 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u8mf8x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei16_v_u8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei16_v_u8mf8x6 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u8mf8x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei16_v_u8mf8x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei16_v_u8mf8x6_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u8mf8x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei16_v_u8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei16_v_u8mf8x6_m (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u8mf8x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei16_v_u8mf8x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vloxseg6ei16_v_u8mf8x6_m_vl31 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u8mf8x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei16_v_u8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei16_v_u8mf8x7 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u8mf8x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei16_v_u8mf8x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei16_v_u8mf8x7_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u8mf8x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei16_v_u8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei16_v_u8mf8x7_m (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u8mf8x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei16_v_u8mf8x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vloxseg7ei16_v_u8mf8x7_m_vl31 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u8mf8x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei16_v_u8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei16_v_u8mf8x8 (uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u8mf8x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei16_v_u8mf8x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei16_v_u8mf8x8_vl31 (uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u8mf8x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei16_v_u8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei16_v_u8mf8x8_m (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u8mf8x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei16_v_u8mf8x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vloxseg8ei16_v_u8mf8x8_m_vl31 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u8mf8x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei16_v_u16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei16_v_u16mf4x2 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16mf4x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei16_v_u16mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei16_v_u16mf4x2_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u16mf4x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei16_v_u16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei16_v_u16mf4x2_m (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u16mf4x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei16_v_u16mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vloxseg2ei16_v_u16mf4x2_m_vl31 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u16mf4x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei16_v_u16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei16_v_u16mf4x3 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u16mf4x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei16_v_u16mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei16_v_u16mf4x3_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u16mf4x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei16_v_u16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei16_v_u16mf4x3_m (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u16mf4x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei16_v_u16mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vloxseg3ei16_v_u16mf4x3_m_vl31 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u16mf4x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei16_v_u16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei16_v_u16mf4x4 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u16mf4x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei16_v_u16mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei16_v_u16mf4x4_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u16mf4x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei16_v_u16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei16_v_u16mf4x4_m (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u16mf4x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei16_v_u16mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vloxseg4ei16_v_u16mf4x4_m_vl31 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u16mf4x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei16_v_u16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei16_v_u16mf4x5 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u16mf4x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei16_v_u16mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei16_v_u16mf4x5_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u16mf4x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei16_v_u16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei16_v_u16mf4x5_m (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u16mf4x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei16_v_u16mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vloxseg5ei16_v_u16mf4x5_m_vl31 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u16mf4x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei16_v_u16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei16_v_u16mf4x6 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u16mf4x6 (base, bindex, vl);
}

/*
** test_vloxseg6ei16_v_u16mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei16_v_u16mf4x6_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u16mf4x6 (base, bindex, 31);
}

/*
** test_vloxseg6ei16_v_u16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei16_v_u16mf4x6_m (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u16mf4x6_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg6ei16_v_u16mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vloxseg6ei16_v_u16mf4x6_m_vl31 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg6ei16_v_u16mf4x6_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg7ei16_v_u16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei16_v_u16mf4x7 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u16mf4x7 (base, bindex, vl);
}

/*
** test_vloxseg7ei16_v_u16mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei16_v_u16mf4x7_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u16mf4x7 (base, bindex, 31);
}

/*
** test_vloxseg7ei16_v_u16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei16_v_u16mf4x7_m (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg7ei16_v_u16mf4x7_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg7ei16_v_u16mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vloxseg7ei16_v_u16mf4x7_m_vl31 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg7ei16_v_u16mf4x7_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg8ei16_v_u16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei16_v_u16mf4x8 (uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u16mf4x8 (base, bindex, vl);
}

/*
** test_vloxseg8ei16_v_u16mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei16_v_u16mf4x8_vl31 (uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u16mf4x8 (base, bindex, 31);
}

/*
** test_vloxseg8ei16_v_u16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei16_v_u16mf4x8_m (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg8ei16_v_u16mf4x8_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg8ei16_v_u16mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vloxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vloxseg8ei16_v_u16mf4x8_m_vl31 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint16mf4_t bindex)
{
  return vloxseg8ei16_v_u16mf4x8_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg2ei16_v_u32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei16_v_u32mf2x2 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u32mf2x2 (base, bindex, vl);
}

/*
** test_vloxseg2ei16_v_u32mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei16_v_u32mf2x2_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u32mf2x2 (base, bindex, 31);
}

/*
** test_vloxseg2ei16_v_u32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei16_v_u32mf2x2_m (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg2ei16_v_u32mf2x2_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg2ei16_v_u32mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vloxseg2ei16_v_u32mf2x2_m_vl31 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg2ei16_v_u32mf2x2_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg3ei16_v_u32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei16_v_u32mf2x3 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u32mf2x3 (base, bindex, vl);
}

/*
** test_vloxseg3ei16_v_u32mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei16_v_u32mf2x3_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u32mf2x3 (base, bindex, 31);
}

/*
** test_vloxseg3ei16_v_u32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei16_v_u32mf2x3_m (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg3ei16_v_u32mf2x3_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg3ei16_v_u32mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vloxseg3ei16_v_u32mf2x3_m_vl31 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg3ei16_v_u32mf2x3_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg4ei16_v_u32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei16_v_u32mf2x4 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u32mf2x4 (base, bindex, vl);
}

/*
** test_vloxseg4ei16_v_u32mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei16_v_u32mf2x4_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u32mf2x4 (base, bindex, 31);
}

/*
** test_vloxseg4ei16_v_u32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei16_v_u32mf2x4_m (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg4ei16_v_u32mf2x4_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg4ei16_v_u32mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vloxseg4ei16_v_u32mf2x4_m_vl31 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg4ei16_v_u32mf2x4_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg5ei16_v_u32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei16_v_u32mf2x5 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u32mf2x5 (base, bindex, vl);
}

/*
** test_vloxseg5ei16_v_u32mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei16_v_u32mf2x5_vl31 (uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u32mf2x5 (base, bindex, 31);
}

/*
** test_vloxseg5ei16_v_u32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei16_v_u32mf2x5_m (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg5ei16_v_u32mf2x5_m (mask, dest, base, bindex, vl);
}

/*
** test_vloxseg5ei16_v_u32mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vloxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vloxseg5ei16_v_u32mf2x5_m_vl31 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint16mf4_t bindex)
{
  return vloxseg5ei16_v_u32mf2x5_m (mask, dest, base, bindex, 31);
}

/*
** test_vloxseg6ei16_v_u32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vloxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vuint32mf2x6_t
test_vloxseg6ei16_v_u32mf2x6 (uint32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vloxseg6ei16_v_u32mf2x6 (base, bindex, vl);
}
