/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vluxseg7ei16_v_u64m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei16_v_u64m1x7_tama_vl32 (vbool64_t mask, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u64m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u64m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei16_v_u64m1x7_tamu_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u64m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u64m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei16_v_u64m1x7_tuma_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u64m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u64m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei16_v_u64m1x7_tumu_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_u64m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u64m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei16_v_u64m1x8_tama_vl32 (vbool64_t mask, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u64m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u64m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei16_v_u64m1x8_tamu_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u64m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u64m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei16_v_u64m1x8_tuma_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u64m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u64m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei16_v_u64m1x8_tumu_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_u64m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei16_v_u8mf4x2_tama_vl32 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u8mf4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei16_v_u8mf4x2_tamu_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u8mf4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei16_v_u8mf4x2_tuma_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u8mf4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei16_v_u8mf4x2_tumu_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u8mf4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf4x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei16_v_u8mf4x3_tama_vl32 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u8mf4x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf4x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei16_v_u8mf4x3_tamu_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u8mf4x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf4x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei16_v_u8mf4x3_tuma_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u8mf4x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf4x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei16_v_u8mf4x3_tumu_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u8mf4x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf4x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei16_v_u8mf4x4_tama_vl32 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u8mf4x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf4x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei16_v_u8mf4x4_tamu_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u8mf4x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf4x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei16_v_u8mf4x4_tuma_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u8mf4x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf4x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei16_v_u8mf4x4_tumu_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u8mf4x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf4x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei16_v_u8mf4x5_tama_vl32 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u8mf4x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf4x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei16_v_u8mf4x5_tamu_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u8mf4x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf4x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei16_v_u8mf4x5_tuma_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u8mf4x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf4x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei16_v_u8mf4x5_tumu_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u8mf4x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf4x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei16_v_u8mf4x6_tama_vl32 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u8mf4x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf4x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei16_v_u8mf4x6_tamu_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u8mf4x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf4x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei16_v_u8mf4x6_tuma_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u8mf4x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf4x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei16_v_u8mf4x6_tumu_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u8mf4x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf4x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei16_v_u8mf4x7_tama_vl32 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u8mf4x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf4x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei16_v_u8mf4x7_tamu_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u8mf4x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf4x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei16_v_u8mf4x7_tuma_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u8mf4x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf4x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei16_v_u8mf4x7_tumu_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u8mf4x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf4x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei16_v_u8mf4x8_tama_vl32 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u8mf4x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf4x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei16_v_u8mf4x8_tamu_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u8mf4x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf4x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei16_v_u8mf4x8_tuma_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u8mf4x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf4x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei16_v_u8mf4x8_tumu_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u8mf4x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei16_v_u16mf2x2_tama_vl32 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u16mf2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei16_v_u16mf2x2_tamu_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u16mf2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei16_v_u16mf2x2_tuma_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u16mf2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei16_v_u16mf2x2_tumu_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u16mf2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei16_v_u16mf2x3_tama_vl32 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u16mf2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei16_v_u16mf2x3_tamu_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u16mf2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei16_v_u16mf2x3_tuma_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u16mf2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei16_v_u16mf2x3_tumu_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u16mf2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei16_v_u16mf2x4_tama_vl32 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u16mf2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei16_v_u16mf2x4_tamu_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u16mf2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei16_v_u16mf2x4_tuma_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u16mf2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei16_v_u16mf2x4_tumu_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u16mf2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei16_v_u16mf2x5_tama_vl32 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u16mf2x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei16_v_u16mf2x5_tamu_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u16mf2x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei16_v_u16mf2x5_tuma_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u16mf2x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei16_v_u16mf2x5_tumu_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u16mf2x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei16_v_u16mf2x6_tama_vl32 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u16mf2x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei16_v_u16mf2x6_tamu_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u16mf2x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei16_v_u16mf2x6_tuma_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u16mf2x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei16_v_u16mf2x6_tumu_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u16mf2x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei16_v_u16mf2x7_tama_vl32 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u16mf2x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei16_v_u16mf2x7_tamu_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u16mf2x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei16_v_u16mf2x7_tuma_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u16mf2x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei16_v_u16mf2x7_tumu_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u16mf2x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei16_v_u16mf2x8_tama_vl32 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u16mf2x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei16_v_u16mf2x8_tamu_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u16mf2x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei16_v_u16mf2x8_tuma_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u16mf2x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei16_v_u16mf2x8_tumu_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u16mf2x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei16_v_u32m1x2_tama_vl32 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u32m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei16_v_u32m1x2_tamu_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u32m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei16_v_u32m1x2_tuma_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u32m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei16_v_u32m1x2_tumu_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u32m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei16_v_u32m1x3_tama_vl32 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u32m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei16_v_u32m1x3_tamu_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u32m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei16_v_u32m1x3_tuma_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u32m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei16_v_u32m1x3_tumu_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u32m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei16_v_u32m1x4_tama_vl32 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u32m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei16_v_u32m1x4_tamu_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u32m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei16_v_u32m1x4_tuma_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u32m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei16_v_u32m1x4_tumu_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u32m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u32m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei16_v_u32m1x5_tama_vl32 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u32m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u32m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei16_v_u32m1x5_tamu_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u32m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u32m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei16_v_u32m1x5_tuma_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u32m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u32m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei16_v_u32m1x5_tumu_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_u32m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u32m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei16_v_u32m1x6_tama_vl32 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u32m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u32m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei16_v_u32m1x6_tamu_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u32m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u32m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei16_v_u32m1x6_tuma_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u32m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u32m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei16_v_u32m1x6_tumu_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_u32m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u32m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei16_v_u32m1x7_tama_vl32 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u32m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u32m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei16_v_u32m1x7_tamu_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u32m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u32m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei16_v_u32m1x7_tuma_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u32m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u32m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei16_v_u32m1x7_tumu_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_u32m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u32m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei16_v_u32m1x8_tama_vl32 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u32m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u32m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei16_v_u32m1x8_tamu_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u32m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u32m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei16_v_u32m1x8_tuma_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u32m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u32m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei16_v_u32m1x8_tumu_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_u32m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei16_v_u64m2x2_tama_vl32 (vbool32_t mask, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u64m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei16_v_u64m2x2_tamu_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u64m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei16_v_u64m2x2_tuma_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u64m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei16_v_u64m2x2_tumu_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_u64m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u64m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei16_v_u64m2x3_tama_vl32 (vbool32_t mask, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u64m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u64m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei16_v_u64m2x3_tamu_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u64m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u64m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei16_v_u64m2x3_tuma_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u64m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u64m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei16_v_u64m2x3_tumu_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_u64m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u64m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei16_v_u64m2x4_tama_vl32 (vbool32_t mask, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u64m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u64m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei16_v_u64m2x4_tamu_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u64m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u64m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei16_v_u64m2x4_tuma_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u64m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u64m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei16_v_u64m2x4_tumu_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_u64m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei16_v_u8mf2x2_tama_vl32 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u8mf2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei16_v_u8mf2x2_tamu_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u8mf2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei16_v_u8mf2x2_tuma_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u8mf2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei16_v_u8mf2x2_tumu_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u8mf2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei16_v_u8mf2x3_tama_vl32 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u8mf2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei16_v_u8mf2x3_tamu_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u8mf2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei16_v_u8mf2x3_tuma_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u8mf2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei16_v_u8mf2x3_tumu_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u8mf2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei16_v_u8mf2x4_tama_vl32 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u8mf2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei16_v_u8mf2x4_tamu_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u8mf2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei16_v_u8mf2x4_tuma_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u8mf2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei16_v_u8mf2x4_tumu_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u8mf2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei16_v_u8mf2x5_tama_vl32 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u8mf2x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei16_v_u8mf2x5_tamu_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u8mf2x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei16_v_u8mf2x5_tuma_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u8mf2x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei16_v_u8mf2x5_tumu_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u8mf2x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei16_v_u8mf2x6_tama_vl32 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u8mf2x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei16_v_u8mf2x6_tamu_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u8mf2x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei16_v_u8mf2x6_tuma_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u8mf2x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei16_v_u8mf2x6_tumu_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u8mf2x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei16_v_u8mf2x7_tama_vl32 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u8mf2x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei16_v_u8mf2x7_tamu_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u8mf2x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei16_v_u8mf2x7_tuma_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u8mf2x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei16_v_u8mf2x7_tumu_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u8mf2x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei16_v_u8mf2x8_tama_vl32 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u8mf2x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei16_v_u8mf2x8_tamu_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u8mf2x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei16_v_u8mf2x8_tuma_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u8mf2x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei16_v_u8mf2x8_tumu_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u8mf2x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei16_v_u16m1x2_tama_vl32 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u16m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei16_v_u16m1x2_tamu_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u16m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei16_v_u16m1x2_tuma_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u16m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei16_v_u16m1x2_tumu_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u16m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei16_v_u16m1x3_tama_vl32 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u16m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei16_v_u16m1x3_tamu_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u16m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei16_v_u16m1x3_tuma_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u16m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei16_v_u16m1x3_tumu_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u16m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei16_v_u16m1x4_tama_vl32 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u16m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei16_v_u16m1x4_tamu_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u16m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei16_v_u16m1x4_tuma_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u16m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei16_v_u16m1x4_tumu_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u16m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei16_v_u16m1x5_tama_vl32 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u16m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei16_v_u16m1x5_tamu_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u16m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei16_v_u16m1x5_tuma_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u16m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u16m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei16_v_u16m1x5_tumu_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_u16m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei16_v_u16m1x6_tama_vl32 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u16m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei16_v_u16m1x6_tamu_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u16m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei16_v_u16m1x6_tuma_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u16m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u16m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei16_v_u16m1x6_tumu_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_u16m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei16_v_u16m1x7_tama_vl32 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u16m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei16_v_u16m1x7_tamu_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u16m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei16_v_u16m1x7_tuma_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u16m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u16m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei16_v_u16m1x7_tumu_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_u16m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei16_v_u16m1x8_tama_vl32 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u16m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei16_v_u16m1x8_tamu_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u16m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei16_v_u16m1x8_tuma_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u16m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u16m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei16_v_u16m1x8_tumu_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_u16m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei16_v_u32m2x2_tama_vl32 (vbool16_t mask, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u32m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei16_v_u32m2x2_tamu_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u32m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei16_v_u32m2x2_tuma_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u32m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei16_v_u32m2x2_tumu_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u32m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei16_v_u32m2x3_tama_vl32 (vbool16_t mask, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u32m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei16_v_u32m2x3_tamu_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u32m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei16_v_u32m2x3_tuma_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u32m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u32m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei16_v_u32m2x3_tumu_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_u32m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei16_v_u32m2x4_tama_vl32 (vbool16_t mask, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u32m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei16_v_u32m2x4_tamu_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u32m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei16_v_u32m2x4_tuma_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u32m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u32m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei16_v_u32m2x4_tumu_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_u32m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei16_v_u64m4x2_tama_vl32 (vbool16_t mask, uint64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u64m4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei16_v_u64m4x2_tamu_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u64m4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei16_v_u64m4x2_tuma_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u64m4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u64m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei16_v_u64m4x2_tumu_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_u64m4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei16_v_u8m1x2_tama_vl32 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u8m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei16_v_u8m1x2_tamu_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u8m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei16_v_u8m1x2_tuma_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u8m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei16_v_u8m1x2_tumu_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u8m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei16_v_u8m1x3_tama_vl32 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u8m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei16_v_u8m1x3_tamu_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u8m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei16_v_u8m1x3_tuma_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u8m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei16_v_u8m1x3_tumu_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u8m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei16_v_u8m1x4_tama_vl32 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u8m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei16_v_u8m1x4_tamu_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u8m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei16_v_u8m1x4_tuma_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u8m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei16_v_u8m1x4_tumu_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u8m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei16_v_u8m1x5_tama_vl32 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_u8m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei16_v_u8m1x5_tamu_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_u8m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei16_v_u8m1x5_tuma_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_u8m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei16_v_u8m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei16_v_u8m1x5_tumu_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg5ei16_v_u8m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei16_v_u8m1x6_tama_vl32 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_u8m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei16_v_u8m1x6_tamu_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_u8m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei16_v_u8m1x6_tuma_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_u8m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei16_v_u8m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei16_v_u8m1x6_tumu_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg6ei16_v_u8m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei16_v_u8m1x7_tama_vl32 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_u8m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei16_v_u8m1x7_tamu_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_u8m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei16_v_u8m1x7_tuma_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_u8m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei16_v_u8m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei16_v_u8m1x7_tumu_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg7ei16_v_u8m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei16_v_u8m1x8_tama_vl32 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_u8m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei16_v_u8m1x8_tamu_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_u8m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei16_v_u8m1x8_tuma_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_u8m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei16_v_u8m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei16_v_u8m1x8_tumu_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint16m2_t bindex)
{
  return vluxseg8ei16_v_u8m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei16_v_u16m2x2_tama_vl32 (vbool8_t mask, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u16m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei16_v_u16m2x2_tamu_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u16m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei16_v_u16m2x2_tuma_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u16m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei16_v_u16m2x2_tumu_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u16m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei16_v_u16m2x3_tama_vl32 (vbool8_t mask, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u16m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei16_v_u16m2x3_tamu_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u16m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei16_v_u16m2x3_tuma_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u16m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u16m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei16_v_u16m2x3_tumu_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_u16m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei16_v_u16m2x4_tama_vl32 (vbool8_t mask, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u16m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei16_v_u16m2x4_tamu_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u16m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei16_v_u16m2x4_tuma_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u16m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u16m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei16_v_u16m2x4_tumu_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_u16m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei16_v_u32m4x2_tama_vl32 (vbool8_t mask, uint32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u32m4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei16_v_u32m4x2_tamu_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u32m4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei16_v_u32m4x2_tuma_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u32m4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u32m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei16_v_u32m4x2_tumu_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_u32m4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei16_v_u8m2x2_tama_vl32 (vbool4_t mask, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u8m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei16_v_u8m2x2_tamu_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u8m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei16_v_u8m2x2_tuma_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u8m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei16_v_u8m2x2_tumu_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u8m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei16_v_u8m2x3_tama_vl32 (vbool4_t mask, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_u8m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei16_v_u8m2x3_tamu_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_u8m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei16_v_u8m2x3_tuma_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_u8m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei16_v_u8m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei16_v_u8m2x3_tumu_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg3ei16_v_u8m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei16_v_u8m2x4_tama_vl32 (vbool4_t mask, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_u8m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei16_v_u8m2x4_tamu_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_u8m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei16_v_u8m2x4_tuma_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_u8m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei16_v_u8m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei16_v_u8m2x4_tumu_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint16m4_t bindex)
{
  return vluxseg4ei16_v_u8m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei16_v_u16m4x2_tama_vl32 (vbool4_t mask, uint16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u16m4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei16_v_u16m4x2_tamu_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u16m4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei16_v_u16m4x2_tuma_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u16m4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u16m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei16_v_u16m4x2_tumu_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_u16m4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vluxseg2ei16_v_u8m4x2_tama_vl32 (vbool2_t mask, uint8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_u8m4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vluxseg2ei16_v_u8m4x2_tamu_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_u8m4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vluxseg2ei16_v_u8m4x2_tuma_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_u8m4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei16_v_u8m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m4x2_t
test_vluxseg2ei16_v_u8m4x2_tumu_vl32 (vbool2_t mask, vuint8m4x2_t dest, uint8_t *base, vuint16m8_t bindex)
{
  return vluxseg2ei16_v_u8m4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf8x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei32_v_u8mf8x2_tama_vl32 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u8mf8x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf8x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei32_v_u8mf8x2_tamu_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u8mf8x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf8x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei32_v_u8mf8x2_tuma_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u8mf8x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf8x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei32_v_u8mf8x2_tumu_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u8mf8x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf8x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei32_v_u8mf8x3_tama_vl32 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u8mf8x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf8x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei32_v_u8mf8x3_tamu_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u8mf8x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf8x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei32_v_u8mf8x3_tuma_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u8mf8x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf8x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei32_v_u8mf8x3_tumu_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u8mf8x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf8x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei32_v_u8mf8x4_tama_vl32 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u8mf8x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf8x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei32_v_u8mf8x4_tamu_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u8mf8x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf8x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei32_v_u8mf8x4_tuma_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u8mf8x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf8x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei32_v_u8mf8x4_tumu_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u8mf8x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf8x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei32_v_u8mf8x5_tama_vl32 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u8mf8x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf8x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei32_v_u8mf8x5_tamu_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u8mf8x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf8x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei32_v_u8mf8x5_tuma_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u8mf8x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf8x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei32_v_u8mf8x5_tumu_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u8mf8x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf8x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei32_v_u8mf8x6_tama_vl32 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u8mf8x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf8x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei32_v_u8mf8x6_tamu_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u8mf8x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf8x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei32_v_u8mf8x6_tuma_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u8mf8x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf8x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei32_v_u8mf8x6_tumu_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u8mf8x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf8x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei32_v_u8mf8x7_tama_vl32 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u8mf8x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf8x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei32_v_u8mf8x7_tamu_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u8mf8x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf8x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei32_v_u8mf8x7_tuma_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u8mf8x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf8x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei32_v_u8mf8x7_tumu_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u8mf8x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf8x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei32_v_u8mf8x8_tama_vl32 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u8mf8x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf8x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei32_v_u8mf8x8_tamu_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u8mf8x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf8x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei32_v_u8mf8x8_tuma_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u8mf8x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf8x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei32_v_u8mf8x8_tumu_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u8mf8x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei32_v_u16mf4x2_tama_vl32 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u16mf4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei32_v_u16mf4x2_tamu_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u16mf4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei32_v_u16mf4x2_tuma_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u16mf4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei32_v_u16mf4x2_tumu_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u16mf4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf4x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei32_v_u16mf4x3_tama_vl32 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u16mf4x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf4x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei32_v_u16mf4x3_tamu_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u16mf4x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf4x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei32_v_u16mf4x3_tuma_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u16mf4x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf4x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei32_v_u16mf4x3_tumu_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u16mf4x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf4x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei32_v_u16mf4x4_tama_vl32 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u16mf4x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf4x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei32_v_u16mf4x4_tamu_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u16mf4x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf4x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei32_v_u16mf4x4_tuma_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u16mf4x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf4x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei32_v_u16mf4x4_tumu_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u16mf4x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf4x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei32_v_u16mf4x5_tama_vl32 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u16mf4x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf4x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei32_v_u16mf4x5_tamu_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u16mf4x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf4x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei32_v_u16mf4x5_tuma_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u16mf4x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf4x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei32_v_u16mf4x5_tumu_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u16mf4x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf4x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei32_v_u16mf4x6_tama_vl32 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u16mf4x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf4x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei32_v_u16mf4x6_tamu_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u16mf4x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf4x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei32_v_u16mf4x6_tuma_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u16mf4x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf4x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei32_v_u16mf4x6_tumu_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u16mf4x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf4x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei32_v_u16mf4x7_tama_vl32 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u16mf4x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf4x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei32_v_u16mf4x7_tamu_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u16mf4x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf4x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei32_v_u16mf4x7_tuma_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u16mf4x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf4x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei32_v_u16mf4x7_tumu_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u16mf4x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf4x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei32_v_u16mf4x8_tama_vl32 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u16mf4x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf4x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei32_v_u16mf4x8_tamu_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u16mf4x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf4x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei32_v_u16mf4x8_tuma_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u16mf4x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf4x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei32_v_u16mf4x8_tumu_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u16mf4x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei32_v_u32mf2x2_tama_vl32 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u32mf2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei32_v_u32mf2x2_tamu_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u32mf2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei32_v_u32mf2x2_tuma_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u32mf2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei32_v_u32mf2x2_tumu_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u32mf2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei32_v_u32mf2x3_tama_vl32 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u32mf2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei32_v_u32mf2x3_tamu_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u32mf2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei32_v_u32mf2x3_tuma_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u32mf2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei32_v_u32mf2x3_tumu_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u32mf2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei32_v_u32mf2x4_tama_vl32 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u32mf2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei32_v_u32mf2x4_tamu_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u32mf2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei32_v_u32mf2x4_tuma_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u32mf2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei32_v_u32mf2x4_tumu_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u32mf2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei32_v_u32mf2x5_tama_vl32 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u32mf2x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei32_v_u32mf2x5_tamu_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u32mf2x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei32_v_u32mf2x5_tuma_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u32mf2x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei32_v_u32mf2x5_tumu_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u32mf2x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei32_v_u32mf2x6_tama_vl32 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u32mf2x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei32_v_u32mf2x6_tamu_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u32mf2x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei32_v_u32mf2x6_tuma_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u32mf2x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei32_v_u32mf2x6_tumu_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u32mf2x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei32_v_u32mf2x7_tama_vl32 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u32mf2x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei32_v_u32mf2x7_tamu_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u32mf2x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei32_v_u32mf2x7_tuma_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u32mf2x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei32_v_u32mf2x7_tumu_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u32mf2x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei32_v_u32mf2x8_tama_vl32 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u32mf2x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei32_v_u32mf2x8_tamu_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u32mf2x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei32_v_u32mf2x8_tuma_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u32mf2x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei32_v_u32mf2x8_tumu_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u32mf2x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei32_v_u64m1x2_tama_vl32 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u64m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei32_v_u64m1x2_tamu_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u64m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei32_v_u64m1x2_tuma_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u64m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei32_v_u64m1x2_tumu_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_u64m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei32_v_u64m1x3_tama_vl32 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u64m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei32_v_u64m1x3_tamu_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u64m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei32_v_u64m1x3_tuma_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u64m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei32_v_u64m1x3_tumu_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_u64m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei32_v_u64m1x4_tama_vl32 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u64m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei32_v_u64m1x4_tamu_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u64m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei32_v_u64m1x4_tuma_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u64m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei32_v_u64m1x4_tumu_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_u64m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u64m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei32_v_u64m1x5_tama_vl32 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u64m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u64m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei32_v_u64m1x5_tamu_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u64m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u64m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei32_v_u64m1x5_tuma_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u64m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u64m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei32_v_u64m1x5_tumu_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_u64m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u64m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei32_v_u64m1x6_tama_vl32 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u64m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u64m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei32_v_u64m1x6_tamu_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u64m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u64m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei32_v_u64m1x6_tuma_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u64m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u64m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei32_v_u64m1x6_tumu_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_u64m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u64m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei32_v_u64m1x7_tama_vl32 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u64m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u64m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei32_v_u64m1x7_tamu_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u64m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u64m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei32_v_u64m1x7_tuma_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u64m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u64m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei32_v_u64m1x7_tumu_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_u64m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u64m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei32_v_u64m1x8_tama_vl32 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u64m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u64m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei32_v_u64m1x8_tamu_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u64m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u64m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei32_v_u64m1x8_tuma_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u64m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u64m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei32_v_u64m1x8_tumu_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_u64m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei32_v_u8mf4x2_tama_vl32 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u8mf4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei32_v_u8mf4x2_tamu_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u8mf4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei32_v_u8mf4x2_tuma_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u8mf4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei32_v_u8mf4x2_tumu_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u8mf4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf4x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei32_v_u8mf4x3_tama_vl32 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u8mf4x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf4x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei32_v_u8mf4x3_tamu_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u8mf4x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf4x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei32_v_u8mf4x3_tuma_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u8mf4x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf4x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei32_v_u8mf4x3_tumu_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u8mf4x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf4x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei32_v_u8mf4x4_tama_vl32 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u8mf4x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf4x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei32_v_u8mf4x4_tamu_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u8mf4x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf4x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei32_v_u8mf4x4_tuma_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u8mf4x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf4x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei32_v_u8mf4x4_tumu_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u8mf4x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf4x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei32_v_u8mf4x5_tama_vl32 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u8mf4x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf4x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei32_v_u8mf4x5_tamu_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u8mf4x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf4x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei32_v_u8mf4x5_tuma_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u8mf4x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf4x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei32_v_u8mf4x5_tumu_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u8mf4x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf4x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei32_v_u8mf4x6_tama_vl32 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u8mf4x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf4x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei32_v_u8mf4x6_tamu_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u8mf4x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf4x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei32_v_u8mf4x6_tuma_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u8mf4x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf4x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei32_v_u8mf4x6_tumu_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u8mf4x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf4x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei32_v_u8mf4x7_tama_vl32 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u8mf4x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf4x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei32_v_u8mf4x7_tamu_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u8mf4x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf4x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei32_v_u8mf4x7_tuma_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u8mf4x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf4x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei32_v_u8mf4x7_tumu_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u8mf4x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf4x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei32_v_u8mf4x8_tama_vl32 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u8mf4x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf4x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei32_v_u8mf4x8_tamu_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u8mf4x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf4x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei32_v_u8mf4x8_tuma_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u8mf4x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf4x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei32_v_u8mf4x8_tumu_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u8mf4x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei32_v_u16mf2x2_tama_vl32 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u16mf2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei32_v_u16mf2x2_tamu_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u16mf2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei32_v_u16mf2x2_tuma_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u16mf2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei32_v_u16mf2x2_tumu_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u16mf2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei32_v_u16mf2x3_tama_vl32 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u16mf2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei32_v_u16mf2x3_tamu_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u16mf2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei32_v_u16mf2x3_tuma_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u16mf2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei32_v_u16mf2x3_tumu_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u16mf2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei32_v_u16mf2x4_tama_vl32 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u16mf2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei32_v_u16mf2x4_tamu_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u16mf2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei32_v_u16mf2x4_tuma_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u16mf2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei32_v_u16mf2x4_tumu_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u16mf2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei32_v_u16mf2x5_tama_vl32 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u16mf2x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei32_v_u16mf2x5_tamu_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u16mf2x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei32_v_u16mf2x5_tuma_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u16mf2x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei32_v_u16mf2x5_tumu_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u16mf2x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei32_v_u16mf2x6_tama_vl32 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u16mf2x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei32_v_u16mf2x6_tamu_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u16mf2x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei32_v_u16mf2x6_tuma_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u16mf2x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei32_v_u16mf2x6_tumu_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u16mf2x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei32_v_u16mf2x7_tama_vl32 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u16mf2x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei32_v_u16mf2x7_tamu_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u16mf2x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei32_v_u16mf2x7_tuma_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u16mf2x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei32_v_u16mf2x7_tumu_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u16mf2x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei32_v_u16mf2x8_tama_vl32 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u16mf2x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei32_v_u16mf2x8_tamu_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u16mf2x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei32_v_u16mf2x8_tuma_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u16mf2x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei32_v_u16mf2x8_tumu_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u16mf2x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei32_v_u32m1x2_tama_vl32 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u32m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei32_v_u32m1x2_tamu_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u32m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei32_v_u32m1x2_tuma_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u32m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei32_v_u32m1x2_tumu_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u32m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei32_v_u32m1x3_tama_vl32 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u32m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei32_v_u32m1x3_tamu_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u32m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei32_v_u32m1x3_tuma_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u32m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei32_v_u32m1x3_tumu_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u32m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei32_v_u32m1x4_tama_vl32 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u32m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei32_v_u32m1x4_tamu_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u32m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei32_v_u32m1x4_tuma_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u32m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei32_v_u32m1x4_tumu_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u32m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei32_v_u32m1x5_tama_vl32 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u32m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei32_v_u32m1x5_tamu_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u32m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei32_v_u32m1x5_tuma_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u32m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u32m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei32_v_u32m1x5_tumu_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_u32m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei32_v_u32m1x6_tama_vl32 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u32m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei32_v_u32m1x6_tamu_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u32m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei32_v_u32m1x6_tuma_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u32m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u32m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei32_v_u32m1x6_tumu_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_u32m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei32_v_u32m1x7_tama_vl32 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u32m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei32_v_u32m1x7_tamu_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u32m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei32_v_u32m1x7_tuma_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u32m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u32m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei32_v_u32m1x7_tumu_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_u32m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei32_v_u32m1x8_tama_vl32 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u32m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei32_v_u32m1x8_tamu_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u32m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei32_v_u32m1x8_tuma_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u32m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u32m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei32_v_u32m1x8_tumu_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_u32m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei32_v_u64m2x2_tama_vl32 (vbool32_t mask, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u64m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei32_v_u64m2x2_tamu_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u64m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei32_v_u64m2x2_tuma_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u64m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei32_v_u64m2x2_tumu_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_u64m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei32_v_u64m2x3_tama_vl32 (vbool32_t mask, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u64m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei32_v_u64m2x3_tamu_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u64m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei32_v_u64m2x3_tuma_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u64m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u64m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei32_v_u64m2x3_tumu_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_u64m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei32_v_u64m2x4_tama_vl32 (vbool32_t mask, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u64m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei32_v_u64m2x4_tamu_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u64m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei32_v_u64m2x4_tuma_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u64m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u64m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei32_v_u64m2x4_tumu_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_u64m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei32_v_u8mf2x2_tama_vl32 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u8mf2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei32_v_u8mf2x2_tamu_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u8mf2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei32_v_u8mf2x2_tuma_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u8mf2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei32_v_u8mf2x2_tumu_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u8mf2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei32_v_u8mf2x3_tama_vl32 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u8mf2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei32_v_u8mf2x3_tamu_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u8mf2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei32_v_u8mf2x3_tuma_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u8mf2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei32_v_u8mf2x3_tumu_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u8mf2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei32_v_u8mf2x4_tama_vl32 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u8mf2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei32_v_u8mf2x4_tamu_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u8mf2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei32_v_u8mf2x4_tuma_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u8mf2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei32_v_u8mf2x4_tumu_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u8mf2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei32_v_u8mf2x5_tama_vl32 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u8mf2x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei32_v_u8mf2x5_tamu_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u8mf2x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei32_v_u8mf2x5_tuma_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u8mf2x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei32_v_u8mf2x5_tumu_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u8mf2x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei32_v_u8mf2x6_tama_vl32 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u8mf2x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei32_v_u8mf2x6_tamu_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u8mf2x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei32_v_u8mf2x6_tuma_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u8mf2x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei32_v_u8mf2x6_tumu_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u8mf2x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei32_v_u8mf2x7_tama_vl32 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u8mf2x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei32_v_u8mf2x7_tamu_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u8mf2x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei32_v_u8mf2x7_tuma_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u8mf2x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei32_v_u8mf2x7_tumu_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u8mf2x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei32_v_u8mf2x8_tama_vl32 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u8mf2x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei32_v_u8mf2x8_tamu_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u8mf2x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei32_v_u8mf2x8_tuma_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u8mf2x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei32_v_u8mf2x8_tumu_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u8mf2x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei32_v_u16m1x2_tama_vl32 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u16m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei32_v_u16m1x2_tamu_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u16m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei32_v_u16m1x2_tuma_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u16m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei32_v_u16m1x2_tumu_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u16m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei32_v_u16m1x3_tama_vl32 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u16m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei32_v_u16m1x3_tamu_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u16m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei32_v_u16m1x3_tuma_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u16m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei32_v_u16m1x3_tumu_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u16m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei32_v_u16m1x4_tama_vl32 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u16m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei32_v_u16m1x4_tamu_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u16m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei32_v_u16m1x4_tuma_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u16m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei32_v_u16m1x4_tumu_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u16m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei32_v_u16m1x5_tama_vl32 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u16m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei32_v_u16m1x5_tamu_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u16m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei32_v_u16m1x5_tuma_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u16m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u16m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei32_v_u16m1x5_tumu_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_u16m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei32_v_u16m1x6_tama_vl32 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u16m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei32_v_u16m1x6_tamu_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u16m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei32_v_u16m1x6_tuma_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u16m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u16m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei32_v_u16m1x6_tumu_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_u16m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei32_v_u16m1x7_tama_vl32 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u16m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei32_v_u16m1x7_tamu_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u16m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei32_v_u16m1x7_tuma_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u16m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u16m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei32_v_u16m1x7_tumu_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_u16m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei32_v_u16m1x8_tama_vl32 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u16m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei32_v_u16m1x8_tamu_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u16m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei32_v_u16m1x8_tuma_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u16m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u16m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei32_v_u16m1x8_tumu_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_u16m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei32_v_u32m2x2_tama_vl32 (vbool16_t mask, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u32m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei32_v_u32m2x2_tamu_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u32m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei32_v_u32m2x2_tuma_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u32m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei32_v_u32m2x2_tumu_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u32m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei32_v_u32m2x3_tama_vl32 (vbool16_t mask, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u32m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei32_v_u32m2x3_tamu_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u32m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei32_v_u32m2x3_tuma_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u32m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u32m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei32_v_u32m2x3_tumu_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_u32m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei32_v_u32m2x4_tama_vl32 (vbool16_t mask, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u32m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei32_v_u32m2x4_tamu_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u32m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei32_v_u32m2x4_tuma_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u32m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u32m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei32_v_u32m2x4_tumu_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_u32m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei32_v_u64m4x2_tama_vl32 (vbool16_t mask, uint64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u64m4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei32_v_u64m4x2_tamu_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u64m4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei32_v_u64m4x2_tuma_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u64m4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u64m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei32_v_u64m4x2_tumu_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_u64m4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei32_v_u8m1x2_tama_vl32 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u8m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei32_v_u8m1x2_tamu_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u8m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei32_v_u8m1x2_tuma_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u8m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei32_v_u8m1x2_tumu_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u8m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei32_v_u8m1x3_tama_vl32 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u8m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei32_v_u8m1x3_tamu_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u8m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei32_v_u8m1x3_tuma_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u8m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei32_v_u8m1x3_tumu_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u8m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei32_v_u8m1x4_tama_vl32 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u8m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei32_v_u8m1x4_tamu_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u8m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei32_v_u8m1x4_tuma_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u8m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei32_v_u8m1x4_tumu_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u8m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei32_v_u8m1x5_tama_vl32 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_u8m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei32_v_u8m1x5_tamu_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_u8m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei32_v_u8m1x5_tuma_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_u8m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei32_v_u8m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei32_v_u8m1x5_tumu_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg5ei32_v_u8m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei32_v_u8m1x6_tama_vl32 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_u8m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei32_v_u8m1x6_tamu_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_u8m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei32_v_u8m1x6_tuma_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_u8m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei32_v_u8m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei32_v_u8m1x6_tumu_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg6ei32_v_u8m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei32_v_u8m1x7_tama_vl32 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_u8m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei32_v_u8m1x7_tamu_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_u8m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei32_v_u8m1x7_tuma_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_u8m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei32_v_u8m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei32_v_u8m1x7_tumu_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg7ei32_v_u8m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei32_v_u8m1x8_tama_vl32 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_u8m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei32_v_u8m1x8_tamu_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_u8m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei32_v_u8m1x8_tuma_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_u8m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei32_v_u8m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei32_v_u8m1x8_tumu_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint32m4_t bindex)
{
  return vluxseg8ei32_v_u8m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei32_v_u16m2x2_tama_vl32 (vbool8_t mask, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u16m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei32_v_u16m2x2_tamu_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u16m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei32_v_u16m2x2_tuma_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u16m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei32_v_u16m2x2_tumu_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u16m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei32_v_u16m2x3_tama_vl32 (vbool8_t mask, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u16m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei32_v_u16m2x3_tamu_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u16m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei32_v_u16m2x3_tuma_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u16m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u16m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei32_v_u16m2x3_tumu_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_u16m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei32_v_u16m2x4_tama_vl32 (vbool8_t mask, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u16m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei32_v_u16m2x4_tamu_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u16m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei32_v_u16m2x4_tuma_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u16m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u16m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei32_v_u16m2x4_tumu_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_u16m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei32_v_u32m4x2_tama_vl32 (vbool8_t mask, uint32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u32m4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei32_v_u32m4x2_tamu_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u32m4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei32_v_u32m4x2_tuma_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u32m4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u32m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei32_v_u32m4x2_tumu_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_u32m4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei32_v_u8m2x2_tama_vl32 (vbool4_t mask, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u8m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei32_v_u8m2x2_tamu_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u8m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei32_v_u8m2x2_tuma_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u8m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u8m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x2_t
test_vluxseg2ei32_v_u8m2x2_tumu_vl32 (vbool4_t mask, vuint8m2x2_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u8m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei32_v_u8m2x3_tama_vl32 (vbool4_t mask, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_u8m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei32_v_u8m2x3_tamu_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_u8m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei32_v_u8m2x3_tuma_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_u8m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei32_v_u8m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x3_t
test_vluxseg3ei32_v_u8m2x3_tumu_vl32 (vbool4_t mask, vuint8m2x3_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg3ei32_v_u8m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei32_v_u8m2x4_tama_vl32 (vbool4_t mask, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_u8m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei32_v_u8m2x4_tamu_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_u8m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei32_v_u8m2x4_tuma_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_u8m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei32_v_u8m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m2x4_t
test_vluxseg4ei32_v_u8m2x4_tumu_vl32 (vbool4_t mask, vuint8m2x4_t dest, uint8_t *base, vuint32m8_t bindex)
{
  return vluxseg4ei32_v_u8m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei32_v_u16m4x2_tama_vl32 (vbool4_t mask, uint16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u16m4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei32_v_u16m4x2_tamu_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u16m4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei32_v_u16m4x2_tuma_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u16m4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei32_v_u16m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m4x2_t
test_vluxseg2ei32_v_u16m4x2_tumu_vl32 (vbool4_t mask, vuint16m4x2_t dest, uint16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_u16m4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf8x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei64_v_u8mf8x2_tama_vl32 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u8mf8x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf8x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei64_v_u8mf8x2_tamu_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u8mf8x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf8x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei64_v_u8mf8x2_tuma_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u8mf8x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf8x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x2_t
test_vluxseg2ei64_v_u8mf8x2_tumu_vl32 (vbool64_t mask, vuint8mf8x2_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u8mf8x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf8x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei64_v_u8mf8x3_tama_vl32 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u8mf8x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf8x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei64_v_u8mf8x3_tamu_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u8mf8x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf8x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei64_v_u8mf8x3_tuma_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u8mf8x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf8x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x3_t
test_vluxseg3ei64_v_u8mf8x3_tumu_vl32 (vbool64_t mask, vuint8mf8x3_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u8mf8x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf8x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei64_v_u8mf8x4_tama_vl32 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u8mf8x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf8x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei64_v_u8mf8x4_tamu_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u8mf8x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf8x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei64_v_u8mf8x4_tuma_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u8mf8x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf8x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x4_t
test_vluxseg4ei64_v_u8mf8x4_tumu_vl32 (vbool64_t mask, vuint8mf8x4_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u8mf8x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf8x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei64_v_u8mf8x5_tama_vl32 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u8mf8x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf8x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei64_v_u8mf8x5_tamu_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u8mf8x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf8x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei64_v_u8mf8x5_tuma_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u8mf8x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf8x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x5_t
test_vluxseg5ei64_v_u8mf8x5_tumu_vl32 (vbool64_t mask, vuint8mf8x5_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u8mf8x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf8x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei64_v_u8mf8x6_tama_vl32 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u8mf8x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf8x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei64_v_u8mf8x6_tamu_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u8mf8x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf8x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei64_v_u8mf8x6_tuma_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u8mf8x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf8x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x6_t
test_vluxseg6ei64_v_u8mf8x6_tumu_vl32 (vbool64_t mask, vuint8mf8x6_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u8mf8x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf8x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei64_v_u8mf8x7_tama_vl32 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u8mf8x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf8x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei64_v_u8mf8x7_tamu_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u8mf8x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf8x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei64_v_u8mf8x7_tuma_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u8mf8x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf8x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x7_t
test_vluxseg7ei64_v_u8mf8x7_tumu_vl32 (vbool64_t mask, vuint8mf8x7_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u8mf8x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf8x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei64_v_u8mf8x8_tama_vl32 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u8mf8x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf8x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei64_v_u8mf8x8_tamu_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u8mf8x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf8x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei64_v_u8mf8x8_tuma_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u8mf8x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf8x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf8x8_t
test_vluxseg8ei64_v_u8mf8x8_tumu_vl32 (vbool64_t mask, vuint8mf8x8_t dest, uint8_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u8mf8x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei64_v_u16mf4x2_tama_vl32 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u16mf4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei64_v_u16mf4x2_tamu_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u16mf4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei64_v_u16mf4x2_tuma_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u16mf4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x2_t
test_vluxseg2ei64_v_u16mf4x2_tumu_vl32 (vbool64_t mask, vuint16mf4x2_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u16mf4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf4x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei64_v_u16mf4x3_tama_vl32 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u16mf4x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf4x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei64_v_u16mf4x3_tamu_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u16mf4x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf4x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei64_v_u16mf4x3_tuma_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u16mf4x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf4x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x3_t
test_vluxseg3ei64_v_u16mf4x3_tumu_vl32 (vbool64_t mask, vuint16mf4x3_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u16mf4x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf4x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei64_v_u16mf4x4_tama_vl32 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u16mf4x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf4x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei64_v_u16mf4x4_tamu_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u16mf4x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf4x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei64_v_u16mf4x4_tuma_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u16mf4x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf4x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x4_t
test_vluxseg4ei64_v_u16mf4x4_tumu_vl32 (vbool64_t mask, vuint16mf4x4_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u16mf4x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf4x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei64_v_u16mf4x5_tama_vl32 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u16mf4x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf4x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei64_v_u16mf4x5_tamu_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u16mf4x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf4x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei64_v_u16mf4x5_tuma_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u16mf4x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf4x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x5_t
test_vluxseg5ei64_v_u16mf4x5_tumu_vl32 (vbool64_t mask, vuint16mf4x5_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u16mf4x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf4x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei64_v_u16mf4x6_tama_vl32 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u16mf4x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf4x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei64_v_u16mf4x6_tamu_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u16mf4x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf4x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei64_v_u16mf4x6_tuma_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u16mf4x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf4x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x6_t
test_vluxseg6ei64_v_u16mf4x6_tumu_vl32 (vbool64_t mask, vuint16mf4x6_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u16mf4x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf4x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei64_v_u16mf4x7_tama_vl32 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u16mf4x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf4x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei64_v_u16mf4x7_tamu_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u16mf4x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf4x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei64_v_u16mf4x7_tuma_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u16mf4x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf4x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x7_t
test_vluxseg7ei64_v_u16mf4x7_tumu_vl32 (vbool64_t mask, vuint16mf4x7_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u16mf4x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf4x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei64_v_u16mf4x8_tama_vl32 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u16mf4x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf4x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei64_v_u16mf4x8_tamu_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u16mf4x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf4x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei64_v_u16mf4x8_tuma_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u16mf4x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf4x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint16mf4x8_t
test_vluxseg8ei64_v_u16mf4x8_tumu_vl32 (vbool64_t mask, vuint16mf4x8_t dest, uint16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u16mf4x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei64_v_u32mf2x2_tama_vl32 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u32mf2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei64_v_u32mf2x2_tamu_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u32mf2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei64_v_u32mf2x2_tuma_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u32mf2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x2_t
test_vluxseg2ei64_v_u32mf2x2_tumu_vl32 (vbool64_t mask, vuint32mf2x2_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u32mf2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei64_v_u32mf2x3_tama_vl32 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u32mf2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei64_v_u32mf2x3_tamu_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u32mf2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei64_v_u32mf2x3_tuma_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u32mf2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x3_t
test_vluxseg3ei64_v_u32mf2x3_tumu_vl32 (vbool64_t mask, vuint32mf2x3_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u32mf2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei64_v_u32mf2x4_tama_vl32 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u32mf2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei64_v_u32mf2x4_tamu_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u32mf2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei64_v_u32mf2x4_tuma_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u32mf2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x4_t
test_vluxseg4ei64_v_u32mf2x4_tumu_vl32 (vbool64_t mask, vuint32mf2x4_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u32mf2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei64_v_u32mf2x5_tama_vl32 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u32mf2x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei64_v_u32mf2x5_tamu_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u32mf2x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei64_v_u32mf2x5_tuma_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u32mf2x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x5_t
test_vluxseg5ei64_v_u32mf2x5_tumu_vl32 (vbool64_t mask, vuint32mf2x5_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u32mf2x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei64_v_u32mf2x6_tama_vl32 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u32mf2x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei64_v_u32mf2x6_tamu_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u32mf2x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei64_v_u32mf2x6_tuma_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u32mf2x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x6_t
test_vluxseg6ei64_v_u32mf2x6_tumu_vl32 (vbool64_t mask, vuint32mf2x6_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u32mf2x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei64_v_u32mf2x7_tama_vl32 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u32mf2x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei64_v_u32mf2x7_tamu_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u32mf2x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei64_v_u32mf2x7_tuma_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u32mf2x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x7_t
test_vluxseg7ei64_v_u32mf2x7_tumu_vl32 (vbool64_t mask, vuint32mf2x7_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u32mf2x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei64_v_u32mf2x8_tama_vl32 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u32mf2x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei64_v_u32mf2x8_tamu_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u32mf2x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei64_v_u32mf2x8_tuma_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u32mf2x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint32mf2x8_t
test_vluxseg8ei64_v_u32mf2x8_tumu_vl32 (vbool64_t mask, vuint32mf2x8_t dest, uint32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u32mf2x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei64_v_u64m1x2_tama_vl32 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u64m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei64_v_u64m1x2_tamu_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u64m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei64_v_u64m1x2_tuma_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u64m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x2_t
test_vluxseg2ei64_v_u64m1x2_tumu_vl32 (vbool64_t mask, vuint64m1x2_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_u64m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei64_v_u64m1x3_tama_vl32 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u64m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei64_v_u64m1x3_tamu_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u64m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei64_v_u64m1x3_tuma_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u64m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x3_t
test_vluxseg3ei64_v_u64m1x3_tumu_vl32 (vbool64_t mask, vuint64m1x3_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_u64m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei64_v_u64m1x4_tama_vl32 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u64m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei64_v_u64m1x4_tamu_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u64m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei64_v_u64m1x4_tuma_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u64m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x4_t
test_vluxseg4ei64_v_u64m1x4_tumu_vl32 (vbool64_t mask, vuint64m1x4_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_u64m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u64m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei64_v_u64m1x5_tama_vl32 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u64m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u64m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei64_v_u64m1x5_tamu_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u64m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u64m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei64_v_u64m1x5_tuma_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u64m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u64m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x5_t
test_vluxseg5ei64_v_u64m1x5_tumu_vl32 (vbool64_t mask, vuint64m1x5_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_u64m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u64m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei64_v_u64m1x6_tama_vl32 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u64m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u64m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei64_v_u64m1x6_tamu_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u64m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u64m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei64_v_u64m1x6_tuma_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u64m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u64m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x6_t
test_vluxseg6ei64_v_u64m1x6_tumu_vl32 (vbool64_t mask, vuint64m1x6_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_u64m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u64m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei64_v_u64m1x7_tama_vl32 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u64m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u64m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei64_v_u64m1x7_tamu_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u64m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u64m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei64_v_u64m1x7_tuma_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u64m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u64m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x7_t
test_vluxseg7ei64_v_u64m1x7_tumu_vl32 (vbool64_t mask, vuint64m1x7_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_u64m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u64m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei64_v_u64m1x8_tama_vl32 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u64m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u64m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei64_v_u64m1x8_tamu_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u64m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u64m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei64_v_u64m1x8_tuma_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u64m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u64m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vuint64m1x8_t
test_vluxseg8ei64_v_u64m1x8_tumu_vl32 (vbool64_t mask, vuint64m1x8_t dest, uint64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_u64m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei64_v_u8mf4x2_tama_vl32 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u8mf4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei64_v_u8mf4x2_tamu_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u8mf4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei64_v_u8mf4x2_tuma_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u8mf4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x2_t
test_vluxseg2ei64_v_u8mf4x2_tumu_vl32 (vbool32_t mask, vuint8mf4x2_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u8mf4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf4x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei64_v_u8mf4x3_tama_vl32 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u8mf4x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf4x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei64_v_u8mf4x3_tamu_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u8mf4x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf4x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei64_v_u8mf4x3_tuma_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u8mf4x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf4x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x3_t
test_vluxseg3ei64_v_u8mf4x3_tumu_vl32 (vbool32_t mask, vuint8mf4x3_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u8mf4x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf4x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei64_v_u8mf4x4_tama_vl32 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u8mf4x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf4x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei64_v_u8mf4x4_tamu_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u8mf4x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf4x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei64_v_u8mf4x4_tuma_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u8mf4x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf4x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x4_t
test_vluxseg4ei64_v_u8mf4x4_tumu_vl32 (vbool32_t mask, vuint8mf4x4_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u8mf4x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf4x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei64_v_u8mf4x5_tama_vl32 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u8mf4x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf4x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei64_v_u8mf4x5_tamu_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u8mf4x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf4x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei64_v_u8mf4x5_tuma_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u8mf4x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf4x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x5_t
test_vluxseg5ei64_v_u8mf4x5_tumu_vl32 (vbool32_t mask, vuint8mf4x5_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u8mf4x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf4x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei64_v_u8mf4x6_tama_vl32 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u8mf4x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf4x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei64_v_u8mf4x6_tamu_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u8mf4x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf4x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei64_v_u8mf4x6_tuma_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u8mf4x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf4x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x6_t
test_vluxseg6ei64_v_u8mf4x6_tumu_vl32 (vbool32_t mask, vuint8mf4x6_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u8mf4x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf4x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei64_v_u8mf4x7_tama_vl32 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u8mf4x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf4x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei64_v_u8mf4x7_tamu_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u8mf4x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf4x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei64_v_u8mf4x7_tuma_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u8mf4x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf4x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x7_t
test_vluxseg7ei64_v_u8mf4x7_tumu_vl32 (vbool32_t mask, vuint8mf4x7_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u8mf4x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf4x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei64_v_u8mf4x8_tama_vl32 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u8mf4x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf4x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei64_v_u8mf4x8_tamu_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u8mf4x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf4x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei64_v_u8mf4x8_tuma_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u8mf4x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf4x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint8mf4x8_t
test_vluxseg8ei64_v_u8mf4x8_tumu_vl32 (vbool32_t mask, vuint8mf4x8_t dest, uint8_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u8mf4x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei64_v_u16mf2x2_tama_vl32 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u16mf2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei64_v_u16mf2x2_tamu_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u16mf2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei64_v_u16mf2x2_tuma_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u16mf2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x2_t
test_vluxseg2ei64_v_u16mf2x2_tumu_vl32 (vbool32_t mask, vuint16mf2x2_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u16mf2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei64_v_u16mf2x3_tama_vl32 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u16mf2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei64_v_u16mf2x3_tamu_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u16mf2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei64_v_u16mf2x3_tuma_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u16mf2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x3_t
test_vluxseg3ei64_v_u16mf2x3_tumu_vl32 (vbool32_t mask, vuint16mf2x3_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u16mf2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei64_v_u16mf2x4_tama_vl32 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u16mf2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei64_v_u16mf2x4_tamu_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u16mf2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei64_v_u16mf2x4_tuma_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u16mf2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x4_t
test_vluxseg4ei64_v_u16mf2x4_tumu_vl32 (vbool32_t mask, vuint16mf2x4_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u16mf2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei64_v_u16mf2x5_tama_vl32 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u16mf2x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei64_v_u16mf2x5_tamu_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u16mf2x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei64_v_u16mf2x5_tuma_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u16mf2x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x5_t
test_vluxseg5ei64_v_u16mf2x5_tumu_vl32 (vbool32_t mask, vuint16mf2x5_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u16mf2x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei64_v_u16mf2x6_tama_vl32 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u16mf2x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei64_v_u16mf2x6_tamu_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u16mf2x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei64_v_u16mf2x6_tuma_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u16mf2x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x6_t
test_vluxseg6ei64_v_u16mf2x6_tumu_vl32 (vbool32_t mask, vuint16mf2x6_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u16mf2x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei64_v_u16mf2x7_tama_vl32 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u16mf2x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei64_v_u16mf2x7_tamu_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u16mf2x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei64_v_u16mf2x7_tuma_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u16mf2x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x7_t
test_vluxseg7ei64_v_u16mf2x7_tumu_vl32 (vbool32_t mask, vuint16mf2x7_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u16mf2x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei64_v_u16mf2x8_tama_vl32 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u16mf2x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei64_v_u16mf2x8_tamu_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u16mf2x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei64_v_u16mf2x8_tuma_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u16mf2x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint16mf2x8_t
test_vluxseg8ei64_v_u16mf2x8_tumu_vl32 (vbool32_t mask, vuint16mf2x8_t dest, uint16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u16mf2x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei64_v_u32m1x2_tama_vl32 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u32m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei64_v_u32m1x2_tamu_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u32m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei64_v_u32m1x2_tuma_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u32m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x2_t
test_vluxseg2ei64_v_u32m1x2_tumu_vl32 (vbool32_t mask, vuint32m1x2_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u32m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei64_v_u32m1x3_tama_vl32 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u32m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei64_v_u32m1x3_tamu_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u32m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei64_v_u32m1x3_tuma_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u32m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x3_t
test_vluxseg3ei64_v_u32m1x3_tumu_vl32 (vbool32_t mask, vuint32m1x3_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u32m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei64_v_u32m1x4_tama_vl32 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u32m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei64_v_u32m1x4_tamu_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u32m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei64_v_u32m1x4_tuma_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u32m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x4_t
test_vluxseg4ei64_v_u32m1x4_tumu_vl32 (vbool32_t mask, vuint32m1x4_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u32m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei64_v_u32m1x5_tama_vl32 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u32m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei64_v_u32m1x5_tamu_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u32m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei64_v_u32m1x5_tuma_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u32m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u32m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x5_t
test_vluxseg5ei64_v_u32m1x5_tumu_vl32 (vbool32_t mask, vuint32m1x5_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_u32m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei64_v_u32m1x6_tama_vl32 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u32m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei64_v_u32m1x6_tamu_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u32m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei64_v_u32m1x6_tuma_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u32m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u32m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x6_t
test_vluxseg6ei64_v_u32m1x6_tumu_vl32 (vbool32_t mask, vuint32m1x6_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_u32m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei64_v_u32m1x7_tama_vl32 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u32m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei64_v_u32m1x7_tamu_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u32m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei64_v_u32m1x7_tuma_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u32m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u32m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x7_t
test_vluxseg7ei64_v_u32m1x7_tumu_vl32 (vbool32_t mask, vuint32m1x7_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_u32m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei64_v_u32m1x8_tama_vl32 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u32m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei64_v_u32m1x8_tamu_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u32m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei64_v_u32m1x8_tuma_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u32m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u32m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint32m1x8_t
test_vluxseg8ei64_v_u32m1x8_tumu_vl32 (vbool32_t mask, vuint32m1x8_t dest, uint32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_u32m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei64_v_u64m2x2_tama_vl32 (vbool32_t mask, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u64m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei64_v_u64m2x2_tamu_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u64m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei64_v_u64m2x2_tuma_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u64m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x2_t
test_vluxseg2ei64_v_u64m2x2_tumu_vl32 (vbool32_t mask, vuint64m2x2_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_u64m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei64_v_u64m2x3_tama_vl32 (vbool32_t mask, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u64m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei64_v_u64m2x3_tamu_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u64m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei64_v_u64m2x3_tuma_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u64m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u64m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x3_t
test_vluxseg3ei64_v_u64m2x3_tumu_vl32 (vbool32_t mask, vuint64m2x3_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_u64m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei64_v_u64m2x4_tama_vl32 (vbool32_t mask, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u64m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei64_v_u64m2x4_tamu_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u64m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei64_v_u64m2x4_tuma_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u64m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u64m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vuint64m2x4_t
test_vluxseg4ei64_v_u64m2x4_tumu_vl32 (vbool32_t mask, vuint64m2x4_t dest, uint64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_u64m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei64_v_u8mf2x2_tama_vl32 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u8mf2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei64_v_u8mf2x2_tamu_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u8mf2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei64_v_u8mf2x2_tuma_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u8mf2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8mf2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x2_t
test_vluxseg2ei64_v_u8mf2x2_tumu_vl32 (vbool16_t mask, vuint8mf2x2_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u8mf2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei64_v_u8mf2x3_tama_vl32 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u8mf2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei64_v_u8mf2x3_tamu_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u8mf2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei64_v_u8mf2x3_tuma_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u8mf2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8mf2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x3_t
test_vluxseg3ei64_v_u8mf2x3_tumu_vl32 (vbool16_t mask, vuint8mf2x3_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u8mf2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei64_v_u8mf2x4_tama_vl32 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u8mf2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei64_v_u8mf2x4_tamu_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u8mf2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei64_v_u8mf2x4_tuma_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u8mf2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8mf2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x4_t
test_vluxseg4ei64_v_u8mf2x4_tumu_vl32 (vbool16_t mask, vuint8mf2x4_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u8mf2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf2x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei64_v_u8mf2x5_tama_vl32 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u8mf2x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf2x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei64_v_u8mf2x5_tamu_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u8mf2x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf2x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei64_v_u8mf2x5_tuma_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u8mf2x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8mf2x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x5_t
test_vluxseg5ei64_v_u8mf2x5_tumu_vl32 (vbool16_t mask, vuint8mf2x5_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u8mf2x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf2x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei64_v_u8mf2x6_tama_vl32 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u8mf2x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf2x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei64_v_u8mf2x6_tamu_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u8mf2x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf2x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei64_v_u8mf2x6_tuma_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u8mf2x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8mf2x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x6_t
test_vluxseg6ei64_v_u8mf2x6_tumu_vl32 (vbool16_t mask, vuint8mf2x6_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u8mf2x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf2x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei64_v_u8mf2x7_tama_vl32 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u8mf2x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf2x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei64_v_u8mf2x7_tamu_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u8mf2x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf2x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei64_v_u8mf2x7_tuma_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u8mf2x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8mf2x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x7_t
test_vluxseg7ei64_v_u8mf2x7_tumu_vl32 (vbool16_t mask, vuint8mf2x7_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u8mf2x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf2x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei64_v_u8mf2x8_tama_vl32 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u8mf2x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf2x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei64_v_u8mf2x8_tamu_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u8mf2x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf2x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei64_v_u8mf2x8_tuma_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u8mf2x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8mf2x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint8mf2x8_t
test_vluxseg8ei64_v_u8mf2x8_tumu_vl32 (vbool16_t mask, vuint8mf2x8_t dest, uint8_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u8mf2x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei64_v_u16m1x2_tama_vl32 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u16m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei64_v_u16m1x2_tamu_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u16m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei64_v_u16m1x2_tuma_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u16m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x2_t
test_vluxseg2ei64_v_u16m1x2_tumu_vl32 (vbool16_t mask, vuint16m1x2_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u16m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei64_v_u16m1x3_tama_vl32 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u16m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei64_v_u16m1x3_tamu_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u16m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei64_v_u16m1x3_tuma_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u16m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x3_t
test_vluxseg3ei64_v_u16m1x3_tumu_vl32 (vbool16_t mask, vuint16m1x3_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u16m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei64_v_u16m1x4_tama_vl32 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u16m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei64_v_u16m1x4_tamu_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u16m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei64_v_u16m1x4_tuma_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u16m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x4_t
test_vluxseg4ei64_v_u16m1x4_tumu_vl32 (vbool16_t mask, vuint16m1x4_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u16m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei64_v_u16m1x5_tama_vl32 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u16m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei64_v_u16m1x5_tamu_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u16m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei64_v_u16m1x5_tuma_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u16m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u16m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x5_t
test_vluxseg5ei64_v_u16m1x5_tumu_vl32 (vbool16_t mask, vuint16m1x5_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_u16m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei64_v_u16m1x6_tama_vl32 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u16m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei64_v_u16m1x6_tamu_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u16m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei64_v_u16m1x6_tuma_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u16m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u16m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x6_t
test_vluxseg6ei64_v_u16m1x6_tumu_vl32 (vbool16_t mask, vuint16m1x6_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_u16m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei64_v_u16m1x7_tama_vl32 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u16m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei64_v_u16m1x7_tamu_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u16m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei64_v_u16m1x7_tuma_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u16m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u16m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x7_t
test_vluxseg7ei64_v_u16m1x7_tumu_vl32 (vbool16_t mask, vuint16m1x7_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_u16m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei64_v_u16m1x8_tama_vl32 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u16m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei64_v_u16m1x8_tamu_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u16m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei64_v_u16m1x8_tuma_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u16m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u16m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint16m1x8_t
test_vluxseg8ei64_v_u16m1x8_tumu_vl32 (vbool16_t mask, vuint16m1x8_t dest, uint16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_u16m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei64_v_u32m2x2_tama_vl32 (vbool16_t mask, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u32m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei64_v_u32m2x2_tamu_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u32m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei64_v_u32m2x2_tuma_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u32m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x2_t
test_vluxseg2ei64_v_u32m2x2_tumu_vl32 (vbool16_t mask, vuint32m2x2_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u32m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei64_v_u32m2x3_tama_vl32 (vbool16_t mask, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u32m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei64_v_u32m2x3_tamu_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u32m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei64_v_u32m2x3_tuma_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u32m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u32m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x3_t
test_vluxseg3ei64_v_u32m2x3_tumu_vl32 (vbool16_t mask, vuint32m2x3_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_u32m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei64_v_u32m2x4_tama_vl32 (vbool16_t mask, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u32m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei64_v_u32m2x4_tamu_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u32m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei64_v_u32m2x4_tuma_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u32m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u32m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint32m2x4_t
test_vluxseg4ei64_v_u32m2x4_tumu_vl32 (vbool16_t mask, vuint32m2x4_t dest, uint32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_u32m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei64_v_u64m4x2_tama_vl32 (vbool16_t mask, uint64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u64m4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei64_v_u64m4x2_tamu_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u64m4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei64_v_u64m4x2_tuma_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u64m4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u64m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vuint64m4x2_t
test_vluxseg2ei64_v_u64m4x2_tumu_vl32 (vbool16_t mask, vuint64m4x2_t dest, uint64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_u64m4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8m1x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei64_v_u8m1x2_tama_vl32 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u8m1x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8m1x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei64_v_u8m1x2_tamu_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u8m1x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8m1x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei64_v_u8m1x2_tuma_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u8m1x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u8m1x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x2_t
test_vluxseg2ei64_v_u8m1x2_tumu_vl32 (vbool8_t mask, vuint8m1x2_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u8m1x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8m1x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei64_v_u8m1x3_tama_vl32 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u8m1x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8m1x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei64_v_u8m1x3_tamu_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u8m1x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8m1x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei64_v_u8m1x3_tuma_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u8m1x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u8m1x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x3_t
test_vluxseg3ei64_v_u8m1x3_tumu_vl32 (vbool8_t mask, vuint8m1x3_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u8m1x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8m1x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei64_v_u8m1x4_tama_vl32 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u8m1x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8m1x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei64_v_u8m1x4_tamu_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u8m1x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8m1x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei64_v_u8m1x4_tuma_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u8m1x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u8m1x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x4_t
test_vluxseg4ei64_v_u8m1x4_tumu_vl32 (vbool8_t mask, vuint8m1x4_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u8m1x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8m1x5_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei64_v_u8m1x5_tama_vl32 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_u8m1x5_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8m1x5_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei64_v_u8m1x5_tamu_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_u8m1x5_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8m1x5_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei64_v_u8m1x5_tuma_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_u8m1x5_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg5ei64_v_u8m1x5_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x5_t
test_vluxseg5ei64_v_u8m1x5_tumu_vl32 (vbool8_t mask, vuint8m1x5_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg5ei64_v_u8m1x5_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8m1x6_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei64_v_u8m1x6_tama_vl32 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_u8m1x6_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8m1x6_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei64_v_u8m1x6_tamu_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_u8m1x6_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8m1x6_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei64_v_u8m1x6_tuma_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_u8m1x6_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg6ei64_v_u8m1x6_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x6_t
test_vluxseg6ei64_v_u8m1x6_tumu_vl32 (vbool8_t mask, vuint8m1x6_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg6ei64_v_u8m1x6_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8m1x7_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei64_v_u8m1x7_tama_vl32 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_u8m1x7_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8m1x7_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei64_v_u8m1x7_tamu_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_u8m1x7_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8m1x7_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei64_v_u8m1x7_tuma_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_u8m1x7_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg7ei64_v_u8m1x7_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x7_t
test_vluxseg7ei64_v_u8m1x7_tumu_vl32 (vbool8_t mask, vuint8m1x7_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg7ei64_v_u8m1x7_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8m1x8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei64_v_u8m1x8_tama_vl32 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_u8m1x8_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8m1x8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei64_v_u8m1x8_tamu_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_u8m1x8_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8m1x8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei64_v_u8m1x8_tuma_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_u8m1x8_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg8ei64_v_u8m1x8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint8m1x8_t
test_vluxseg8ei64_v_u8m1x8_tumu_vl32 (vbool8_t mask, vuint8m1x8_t dest, uint8_t *base, vuint64m8_t bindex)
{
  return vluxseg8ei64_v_u8m1x8_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16m2x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei64_v_u16m2x2_tama_vl32 (vbool8_t mask, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u16m2x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16m2x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei64_v_u16m2x2_tamu_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u16m2x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16m2x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei64_v_u16m2x2_tuma_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u16m2x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u16m2x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x2_t
test_vluxseg2ei64_v_u16m2x2_tumu_vl32 (vbool8_t mask, vuint16m2x2_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u16m2x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16m2x3_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei64_v_u16m2x3_tama_vl32 (vbool8_t mask, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u16m2x3_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16m2x3_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei64_v_u16m2x3_tamu_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u16m2x3_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16m2x3_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei64_v_u16m2x3_tuma_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u16m2x3_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg3ei64_v_u16m2x3_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x3_t
test_vluxseg3ei64_v_u16m2x3_tumu_vl32 (vbool8_t mask, vuint16m2x3_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_u16m2x3_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16m2x4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei64_v_u16m2x4_tama_vl32 (vbool8_t mask, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u16m2x4_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16m2x4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei64_v_u16m2x4_tamu_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u16m2x4_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16m2x4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei64_v_u16m2x4_tuma_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u16m2x4_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg4ei64_v_u16m2x4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint16m2x4_t
test_vluxseg4ei64_v_u16m2x4_tumu_vl32 (vbool8_t mask, vuint16m2x4_t dest, uint16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_u16m2x4_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m4x2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei64_v_u32m4x2_tama_vl32 (vbool8_t mask, uint32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u32m4x2_tama (mask, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m4x2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei64_v_u32m4x2_tamu_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u32m4x2_tamu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m4x2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei64_v_u32m4x2_tuma_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u32m4x2_tuma (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei64_v_u32m4x2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vuint32m4x2_t
test_vluxseg2ei64_v_u32m4x2_tumu_vl32 (vbool8_t mask, vuint32m4x2_t dest, uint32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_u32m4x2_tumu (mask, dest, base, bindex, 32);
}

/*
** test_vluxseg2ei8_v_f16mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei8_v_f16mf4x2_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16mf4x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f16mf4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei8_v_f16mf4x2_ta_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f16mf4x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei8_v_f16mf4x2_tu (vfloat16mf4x2_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16mf4x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f16mf4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei8_v_f16mf4x2_tu_vl31 (vfloat16mf4x2_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f16mf4x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f16mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei8_v_f16mf4x3_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16mf4x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f16mf4x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei8_v_f16mf4x3_ta_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f16mf4x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei8_v_f16mf4x3_tu (vfloat16mf4x3_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16mf4x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f16mf4x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei8_v_f16mf4x3_tu_vl31 (vfloat16mf4x3_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f16mf4x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f16mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei8_v_f16mf4x4_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16mf4x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f16mf4x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei8_v_f16mf4x4_ta_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f16mf4x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei8_v_f16mf4x4_tu (vfloat16mf4x4_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16mf4x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f16mf4x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei8_v_f16mf4x4_tu_vl31 (vfloat16mf4x4_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f16mf4x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f16mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei8_v_f16mf4x5_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16mf4x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f16mf4x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei8_v_f16mf4x5_ta_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f16mf4x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei8_v_f16mf4x5_tu (vfloat16mf4x5_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16mf4x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f16mf4x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei8_v_f16mf4x5_tu_vl31 (vfloat16mf4x5_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f16mf4x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f16mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei8_v_f16mf4x6_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16mf4x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f16mf4x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei8_v_f16mf4x6_ta_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f16mf4x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei8_v_f16mf4x6_tu (vfloat16mf4x6_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16mf4x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f16mf4x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei8_v_f16mf4x6_tu_vl31 (vfloat16mf4x6_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f16mf4x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f16mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei8_v_f16mf4x7_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16mf4x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f16mf4x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei8_v_f16mf4x7_ta_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f16mf4x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei8_v_f16mf4x7_tu (vfloat16mf4x7_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16mf4x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f16mf4x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei8_v_f16mf4x7_tu_vl31 (vfloat16mf4x7_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f16mf4x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f16mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei8_v_f16mf4x8_ta (float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16mf4x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f16mf4x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei8_v_f16mf4x8_ta_vl31 (float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f16mf4x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei8_v_f16mf4x8_tu (vfloat16mf4x8_t dest, float16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16mf4x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f16mf4x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei8_v_f16mf4x8_tu_vl31 (vfloat16mf4x8_t dest, float16_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f16mf4x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f32mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei8_v_f32mf2x2_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32mf2x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f32mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei8_v_f32mf2x2_ta_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f32mf2x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei8_v_f32mf2x2_tu (vfloat32mf2x2_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32mf2x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f32mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei8_v_f32mf2x2_tu_vl31 (vfloat32mf2x2_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f32mf2x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f32mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei8_v_f32mf2x3_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32mf2x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f32mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei8_v_f32mf2x3_ta_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f32mf2x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei8_v_f32mf2x3_tu (vfloat32mf2x3_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32mf2x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f32mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei8_v_f32mf2x3_tu_vl31 (vfloat32mf2x3_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f32mf2x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f32mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei8_v_f32mf2x4_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32mf2x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f32mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei8_v_f32mf2x4_ta_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f32mf2x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei8_v_f32mf2x4_tu (vfloat32mf2x4_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32mf2x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f32mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei8_v_f32mf2x4_tu_vl31 (vfloat32mf2x4_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f32mf2x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f32mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei8_v_f32mf2x5_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f32mf2x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f32mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei8_v_f32mf2x5_ta_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f32mf2x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei8_v_f32mf2x5_tu (vfloat32mf2x5_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f32mf2x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f32mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei8_v_f32mf2x5_tu_vl31 (vfloat32mf2x5_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f32mf2x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f32mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei8_v_f32mf2x6_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f32mf2x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f32mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei8_v_f32mf2x6_ta_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f32mf2x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei8_v_f32mf2x6_tu (vfloat32mf2x6_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f32mf2x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f32mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei8_v_f32mf2x6_tu_vl31 (vfloat32mf2x6_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f32mf2x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f32mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei8_v_f32mf2x7_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f32mf2x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f32mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei8_v_f32mf2x7_ta_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f32mf2x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei8_v_f32mf2x7_tu (vfloat32mf2x7_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f32mf2x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f32mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei8_v_f32mf2x7_tu_vl31 (vfloat32mf2x7_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f32mf2x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f32mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei8_v_f32mf2x8_ta (float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f32mf2x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f32mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei8_v_f32mf2x8_ta_vl31 (float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f32mf2x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei8_v_f32mf2x8_tu (vfloat32mf2x8_t dest, float32_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f32mf2x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f32mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei8_v_f32mf2x8_tu_vl31 (vfloat32mf2x8_t dest, float32_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f32mf2x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f64m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei8_v_f64m1x2_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m1x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f64m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei8_v_f64m1x2_ta_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f64m1x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei8_v_f64m1x2_tu (vfloat64m1x2_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m1x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f64m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei8_v_f64m1x2_tu_vl31 (vfloat64m1x2_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_f64m1x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f64m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei8_v_f64m1x3_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f64m1x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f64m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei8_v_f64m1x3_ta_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f64m1x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei8_v_f64m1x3_tu (vfloat64m1x3_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f64m1x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f64m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei8_v_f64m1x3_tu_vl31 (vfloat64m1x3_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_f64m1x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f64m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei8_v_f64m1x4_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f64m1x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f64m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei8_v_f64m1x4_ta_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f64m1x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei8_v_f64m1x4_tu (vfloat64m1x4_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f64m1x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f64m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei8_v_f64m1x4_tu_vl31 (vfloat64m1x4_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_f64m1x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f64m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei8_v_f64m1x5_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f64m1x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f64m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei8_v_f64m1x5_ta_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f64m1x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei8_v_f64m1x5_tu (vfloat64m1x5_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f64m1x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f64m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei8_v_f64m1x5_tu_vl31 (vfloat64m1x5_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_f64m1x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f64m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei8_v_f64m1x6_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f64m1x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f64m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei8_v_f64m1x6_ta_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f64m1x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei8_v_f64m1x6_tu (vfloat64m1x6_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f64m1x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f64m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei8_v_f64m1x6_tu_vl31 (vfloat64m1x6_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_f64m1x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f64m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei8_v_f64m1x7_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f64m1x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f64m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei8_v_f64m1x7_ta_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f64m1x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei8_v_f64m1x7_tu (vfloat64m1x7_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f64m1x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f64m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei8_v_f64m1x7_tu_vl31 (vfloat64m1x7_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_f64m1x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f64m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei8_v_f64m1x8_ta (float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f64m1x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f64m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei8_v_f64m1x8_ta_vl31 (float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f64m1x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei8_v_f64m1x8_tu (vfloat64m1x8_t dest, float64_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f64m1x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f64m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei8_v_f64m1x8_tu_vl31 (vfloat64m1x8_t dest, float64_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_f64m1x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f16mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei8_v_f16mf2x2_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16mf2x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f16mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei8_v_f16mf2x2_ta_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f16mf2x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei8_v_f16mf2x2_tu (vfloat16mf2x2_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16mf2x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f16mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei8_v_f16mf2x2_tu_vl31 (vfloat16mf2x2_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f16mf2x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f16mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei8_v_f16mf2x3_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16mf2x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f16mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei8_v_f16mf2x3_ta_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f16mf2x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei8_v_f16mf2x3_tu (vfloat16mf2x3_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16mf2x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f16mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei8_v_f16mf2x3_tu_vl31 (vfloat16mf2x3_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f16mf2x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f16mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei8_v_f16mf2x4_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16mf2x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f16mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei8_v_f16mf2x4_ta_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f16mf2x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei8_v_f16mf2x4_tu (vfloat16mf2x4_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16mf2x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f16mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei8_v_f16mf2x4_tu_vl31 (vfloat16mf2x4_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f16mf2x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f16mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei8_v_f16mf2x5_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16mf2x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f16mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei8_v_f16mf2x5_ta_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_f16mf2x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei8_v_f16mf2x5_tu (vfloat16mf2x5_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16mf2x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f16mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei8_v_f16mf2x5_tu_vl31 (vfloat16mf2x5_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_f16mf2x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f16mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei8_v_f16mf2x6_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16mf2x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f16mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei8_v_f16mf2x6_ta_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_f16mf2x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei8_v_f16mf2x6_tu (vfloat16mf2x6_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16mf2x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f16mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei8_v_f16mf2x6_tu_vl31 (vfloat16mf2x6_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_f16mf2x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f16mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei8_v_f16mf2x7_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16mf2x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f16mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei8_v_f16mf2x7_ta_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_f16mf2x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei8_v_f16mf2x7_tu (vfloat16mf2x7_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16mf2x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f16mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei8_v_f16mf2x7_tu_vl31 (vfloat16mf2x7_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_f16mf2x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f16mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei8_v_f16mf2x8_ta (float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16mf2x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f16mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei8_v_f16mf2x8_ta_vl31 (float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_f16mf2x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei8_v_f16mf2x8_tu (vfloat16mf2x8_t dest, float16_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16mf2x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f16mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei8_v_f16mf2x8_tu_vl31 (vfloat16mf2x8_t dest, float16_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_f16mf2x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f32m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei8_v_f32m1x2_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m1x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f32m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei8_v_f32m1x2_ta_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f32m1x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei8_v_f32m1x2_tu (vfloat32m1x2_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m1x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f32m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei8_v_f32m1x2_tu_vl31 (vfloat32m1x2_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f32m1x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f32m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei8_v_f32m1x3_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32m1x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f32m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei8_v_f32m1x3_ta_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f32m1x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei8_v_f32m1x3_tu (vfloat32m1x3_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32m1x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f32m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei8_v_f32m1x3_tu_vl31 (vfloat32m1x3_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f32m1x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f32m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei8_v_f32m1x4_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32m1x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f32m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei8_v_f32m1x4_ta_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f32m1x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei8_v_f32m1x4_tu (vfloat32m1x4_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32m1x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f32m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei8_v_f32m1x4_tu_vl31 (vfloat32m1x4_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f32m1x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f32m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei8_v_f32m1x5_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f32m1x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f32m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei8_v_f32m1x5_ta_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_f32m1x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei8_v_f32m1x5_tu (vfloat32m1x5_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f32m1x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f32m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei8_v_f32m1x5_tu_vl31 (vfloat32m1x5_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg5ei8_v_f32m1x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f32m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei8_v_f32m1x6_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f32m1x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f32m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei8_v_f32m1x6_ta_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_f32m1x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei8_v_f32m1x6_tu (vfloat32m1x6_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f32m1x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f32m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei8_v_f32m1x6_tu_vl31 (vfloat32m1x6_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg6ei8_v_f32m1x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f32m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei8_v_f32m1x7_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f32m1x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f32m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei8_v_f32m1x7_ta_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_f32m1x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei8_v_f32m1x7_tu (vfloat32m1x7_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f32m1x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f32m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei8_v_f32m1x7_tu_vl31 (vfloat32m1x7_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg7ei8_v_f32m1x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f32m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei8_v_f32m1x8_ta (float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f32m1x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f32m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei8_v_f32m1x8_ta_vl31 (float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_f32m1x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei8_v_f32m1x8_tu (vfloat32m1x8_t dest, float32_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f32m1x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f32m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei8_v_f32m1x8_tu_vl31 (vfloat32m1x8_t dest, float32_t *base, vuint8mf4_t bindex)
{
  return vluxseg8ei8_v_f32m1x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f64m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei8_v_f64m2x2_ta (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m2x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f64m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei8_v_f64m2x2_ta_vl31 (float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f64m2x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei8_v_f64m2x2_tu (vfloat64m2x2_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m2x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f64m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei8_v_f64m2x2_tu_vl31 (vfloat64m2x2_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg2ei8_v_f64m2x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f64m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei8_v_f64m2x3_ta (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f64m2x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f64m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei8_v_f64m2x3_ta_vl31 (float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f64m2x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei8_v_f64m2x3_tu (vfloat64m2x3_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f64m2x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f64m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei8_v_f64m2x3_tu_vl31 (vfloat64m2x3_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg3ei8_v_f64m2x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f64m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei8_v_f64m2x4_ta (float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f64m2x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f64m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei8_v_f64m2x4_ta_vl31 (float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f64m2x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei8_v_f64m2x4_tu (vfloat64m2x4_t dest, float64_t *base, vuint8mf4_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f64m2x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f64m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei8_v_f64m2x4_tu_vl31 (vfloat64m2x4_t dest, float64_t *base, vuint8mf4_t bindex)
{
  return vluxseg4ei8_v_f64m2x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f16m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei8_v_f16m1x2_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m1x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f16m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei8_v_f16m1x2_ta_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f16m1x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei8_v_f16m1x2_tu (vfloat16m1x2_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m1x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f16m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei8_v_f16m1x2_tu_vl31 (vfloat16m1x2_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f16m1x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f16m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei8_v_f16m1x3_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16m1x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f16m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei8_v_f16m1x3_ta_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_f16m1x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei8_v_f16m1x3_tu (vfloat16m1x3_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16m1x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f16m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei8_v_f16m1x3_tu_vl31 (vfloat16m1x3_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_f16m1x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f16m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei8_v_f16m1x4_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16m1x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f16m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei8_v_f16m1x4_ta_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_f16m1x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei8_v_f16m1x4_tu (vfloat16m1x4_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16m1x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f16m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei8_v_f16m1x4_tu_vl31 (vfloat16m1x4_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_f16m1x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f16m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei8_v_f16m1x5_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16m1x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f16m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei8_v_f16m1x5_ta_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_f16m1x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_f16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei8_v_f16m1x5_tu (vfloat16m1x5_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg5ei8_v_f16m1x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_f16m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei8_v_f16m1x5_tu_vl31 (vfloat16m1x5_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg5ei8_v_f16m1x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f16m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei8_v_f16m1x6_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16m1x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f16m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei8_v_f16m1x6_ta_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_f16m1x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_f16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei8_v_f16m1x6_tu (vfloat16m1x6_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg6ei8_v_f16m1x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_f16m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei8_v_f16m1x6_tu_vl31 (vfloat16m1x6_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg6ei8_v_f16m1x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f16m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei8_v_f16m1x7_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16m1x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f16m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei8_v_f16m1x7_ta_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_f16m1x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_f16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei8_v_f16m1x7_tu (vfloat16m1x7_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg7ei8_v_f16m1x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_f16m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei8_v_f16m1x7_tu_vl31 (vfloat16m1x7_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg7ei8_v_f16m1x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f16m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei8_v_f16m1x8_ta (float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16m1x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f16m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei8_v_f16m1x8_ta_vl31 (float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_f16m1x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_f16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei8_v_f16m1x8_tu (vfloat16m1x8_t dest, float16_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg8ei8_v_f16m1x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_f16m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei8_v_f16m1x8_tu_vl31 (vfloat16m1x8_t dest, float16_t *base, vuint8mf2_t bindex)
{
  return vluxseg8ei8_v_f16m1x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f32m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei8_v_f32m2x2_ta (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m2x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f32m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei8_v_f32m2x2_ta_vl31 (float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f32m2x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei8_v_f32m2x2_tu (vfloat32m2x2_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m2x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f32m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei8_v_f32m2x2_tu_vl31 (vfloat32m2x2_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f32m2x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f32m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei8_v_f32m2x3_ta (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32m2x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f32m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei8_v_f32m2x3_ta_vl31 (float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_f32m2x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei8_v_f32m2x3_tu (vfloat32m2x3_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f32m2x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f32m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei8_v_f32m2x3_tu_vl31 (vfloat32m2x3_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg3ei8_v_f32m2x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f32m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei8_v_f32m2x4_ta (float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32m2x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f32m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei8_v_f32m2x4_ta_vl31 (float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_f32m2x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei8_v_f32m2x4_tu (vfloat32m2x4_t dest, float32_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f32m2x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f32m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei8_v_f32m2x4_tu_vl31 (vfloat32m2x4_t dest, float32_t *base, vuint8mf2_t bindex)
{
  return vluxseg4ei8_v_f32m2x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f64m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei8_v_f64m4x2_ta (float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m4x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f64m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei8_v_f64m4x2_ta_vl31 (float64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f64m4x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei8_v_f64m4x2_tu (vfloat64m4x2_t dest, float64_t *base, vuint8mf2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f64m4x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f64m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei8_v_f64m4x2_tu_vl31 (vfloat64m4x2_t dest, float64_t *base, vuint8mf2_t bindex)
{
  return vluxseg2ei8_v_f64m4x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f16m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei8_v_f16m2x2_ta (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m2x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f16m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei8_v_f16m2x2_ta_vl31 (float16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_f16m2x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei8_v_f16m2x2_tu (vfloat16m2x2_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m2x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f16m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei8_v_f16m2x2_tu_vl31 (vfloat16m2x2_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_f16m2x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f16m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei8_v_f16m2x3_ta (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16m2x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f16m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei8_v_f16m2x3_ta_vl31 (float16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_f16m2x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_f16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei8_v_f16m2x3_tu (vfloat16m2x3_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg3ei8_v_f16m2x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_f16m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei8_v_f16m2x3_tu_vl31 (vfloat16m2x3_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vluxseg3ei8_v_f16m2x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f16m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei8_v_f16m2x4_ta (float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16m2x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f16m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei8_v_f16m2x4_ta_vl31 (float16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_f16m2x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_f16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei8_v_f16m2x4_tu (vfloat16m2x4_t dest, float16_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg4ei8_v_f16m2x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_f16m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei8_v_f16m2x4_tu_vl31 (vfloat16m2x4_t dest, float16_t *base, vuint8m1_t bindex)
{
  return vluxseg4ei8_v_f16m2x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f32m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei8_v_f32m4x2_ta (float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m4x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f32m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei8_v_f32m4x2_ta_vl31 (float32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_f32m4x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei8_v_f32m4x2_tu (vfloat32m4x2_t dest, float32_t *base, vuint8m1_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f32m4x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f32m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei8_v_f32m4x2_tu_vl31 (vfloat32m4x2_t dest, float32_t *base, vuint8m1_t bindex)
{
  return vluxseg2ei8_v_f32m4x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f16m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei8_v_f16m4x2_ta (float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m4x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f16m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei8_v_f16m4x2_ta_vl31 (float16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_f16m4x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_f16m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei8_v_f16m4x2_tu (vfloat16m4x2_t dest, float16_t *base, vuint8m2_t bindex, size_t vl)
{
  return vluxseg2ei8_v_f16m4x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_f16m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei8_v_f16m4x2_tu_vl31 (vfloat16m4x2_t dest, float16_t *base, vuint8m2_t bindex)
{
  return vluxseg2ei8_v_f16m4x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16mf4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei16_v_f16mf4x2_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf4x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16mf4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei16_v_f16mf4x2_ta_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f16mf4x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16mf4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei16_v_f16mf4x2_tu (vfloat16mf4x2_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf4x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16mf4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei16_v_f16mf4x2_tu_vl31 (vfloat16mf4x2_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f16mf4x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16mf4x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei16_v_f16mf4x3_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf4x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16mf4x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei16_v_f16mf4x3_ta_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f16mf4x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16mf4x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei16_v_f16mf4x3_tu (vfloat16mf4x3_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf4x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16mf4x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei16_v_f16mf4x3_tu_vl31 (vfloat16mf4x3_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f16mf4x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16mf4x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei16_v_f16mf4x4_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf4x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16mf4x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei16_v_f16mf4x4_ta_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f16mf4x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16mf4x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei16_v_f16mf4x4_tu (vfloat16mf4x4_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf4x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16mf4x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei16_v_f16mf4x4_tu_vl31 (vfloat16mf4x4_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f16mf4x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf4x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_ta_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f16mf4x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_tu (vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf4x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_tu_vl31 (vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f16mf4x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf4x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_ta_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f16mf4x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_tu (vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf4x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_tu_vl31 (vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f16mf4x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf4x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_ta_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f16mf4x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_tu (vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf4x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_tu_vl31 (vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f16mf4x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_ta (float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf4x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_ta_vl31 (float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f16mf4x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_tu (vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf4x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_tu_vl31 (vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f16mf4x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32mf2x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_ta_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f32mf2x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_tu (vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32mf2x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_tu_vl31 (vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f32mf2x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32mf2x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_ta_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f32mf2x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_tu (vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32mf2x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_tu_vl31 (vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f32mf2x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32mf2x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_ta_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f32mf2x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_tu (vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32mf2x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_tu_vl31 (vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f32mf2x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32mf2x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_ta_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f32mf2x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_tu (vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32mf2x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_tu_vl31 (vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f32mf2x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32mf2x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_ta_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f32mf2x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_tu (vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32mf2x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_tu_vl31 (vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f32mf2x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32mf2x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_ta_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f32mf2x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_tu (vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32mf2x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_tu_vl31 (vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f32mf2x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_ta (float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32mf2x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_ta_vl31 (float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f32mf2x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_tu (vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32mf2x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_tu_vl31 (vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f32mf2x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m1x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_ta_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f64m1x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_tu (vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m1x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_tu_vl31 (vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f64m1x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m1x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_ta_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f64m1x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_tu (vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m1x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_tu_vl31 (vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f64m1x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m1x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_ta_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f64m1x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_tu (vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m1x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_tu_vl31 (vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f64m1x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f64m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f64m1x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f64m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_ta_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f64m1x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f64m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_tu (vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f64m1x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f64m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_tu_vl31 (vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f64m1x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f64m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f64m1x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f64m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_ta_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f64m1x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f64m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_tu (vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f64m1x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f64m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_tu_vl31 (vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f64m1x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f64m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f64m1x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f64m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_ta_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f64m1x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f64m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_tu (vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f64m1x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f64m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_tu_vl31 (vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f64m1x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f64m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_ta (float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f64m1x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f64m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_ta_vl31 (float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f64m1x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f64m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_tu (vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f64m1x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f64m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_tu_vl31 (vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f64m1x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf2x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_ta_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f16mf2x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_tu (vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf2x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_tu_vl31 (vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f16mf2x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf2x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_ta_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f16mf2x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_tu (vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf2x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_tu_vl31 (vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f16mf2x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf2x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_ta_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f16mf2x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_tu (vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf2x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_tu_vl31 (vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f16mf2x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf2x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_ta_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f16mf2x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_tu (vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf2x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_tu_vl31 (vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f16mf2x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf2x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_ta_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f16mf2x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_tu (vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf2x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_tu_vl31 (vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f16mf2x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf2x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_ta_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f16mf2x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_tu (vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf2x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_tu_vl31 (vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f16mf2x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_ta (float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf2x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_ta_vl31 (float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f16mf2x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_tu (vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf2x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_tu_vl31 (vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f16mf2x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m1x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_ta_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f32m1x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_tu (vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m1x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_tu_vl31 (vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f32m1x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m1x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_ta_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f32m1x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_tu (vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m1x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_tu_vl31 (vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f32m1x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m1x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_ta_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f32m1x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_tu (vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m1x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_tu_vl31 (vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f32m1x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32m1x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_ta_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f32m1x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_tu (vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32m1x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_tu_vl31 (vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f32m1x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32m1x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_ta_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f32m1x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_tu (vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32m1x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_tu_vl31 (vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f32m1x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32m1x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_ta_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f32m1x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_tu (vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32m1x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_tu_vl31 (vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f32m1x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_ta (float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32m1x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_ta_vl31 (float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f32m1x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_tu (vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32m1x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_tu_vl31 (vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f32m1x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_ta (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m2x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_ta_vl31 (float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f64m2x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_tu (vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m2x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_tu_vl31 (vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f64m2x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_ta (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m2x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_ta_vl31 (float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f64m2x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_tu (vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m2x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_tu_vl31 (vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f64m2x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_ta (float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m2x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_ta_vl31 (float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f64m2x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_tu (vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m2x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_tu_vl31 (vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f64m2x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m1x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m1x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m1x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_ta_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f16m1x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m1x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_tu (vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m1x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m1x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_tu_vl31 (vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f16m1x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m1x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m1x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m1x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_ta_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f16m1x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m1x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_tu (vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m1x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m1x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_tu_vl31 (vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f16m1x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m1x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m1x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m1x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_ta_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f16m1x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m1x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_tu (vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m1x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m1x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_tu_vl31 (vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f16m1x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16m1x5_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16m1x5_ta (base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16m1x5_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_ta_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_f16m1x5_ta (base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16m1x5_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_tu (vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16m1x5_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16m1x5_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_tu_vl31 (vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_f16m1x5_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16m1x6_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16m1x6_ta (base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16m1x6_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_ta_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_f16m1x6_ta (base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16m1x6_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_tu (vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16m1x6_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16m1x6_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_tu_vl31 (vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_f16m1x6_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16m1x7_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16m1x7_ta (base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16m1x7_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_ta_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_f16m1x7_ta (base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16m1x7_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_tu (vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16m1x7_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16m1x7_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_tu_vl31 (vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_f16m1x7_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16m1x8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_ta (float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16m1x8_ta (base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16m1x8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_ta_vl31 (float16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_f16m1x8_ta (base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16m1x8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_tu (vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16m1x8_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16m1x8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_tu_vl31 (vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_f16m1x8_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_ta (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m2x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_ta_vl31 (float32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f32m2x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_tu (vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m2x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_tu_vl31 (vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f32m2x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_ta (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m2x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_ta_vl31 (float32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f32m2x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_tu (vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m2x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_tu_vl31 (vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f32m2x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_ta (float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m2x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_ta_vl31 (float32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f32m2x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_tu (vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m2x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_tu_vl31 (vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f32m2x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_ta (float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m4x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_ta_vl31 (float64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f64m4x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_tu (vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m4x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_tu_vl31 (vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f64m4x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m2x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_ta (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m2x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m2x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_ta_vl31 (float16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f16m2x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m2x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_tu (vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m2x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m2x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_tu_vl31 (vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f16m2x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m2x3_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_ta (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m2x3_ta (base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m2x3_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_ta_vl31 (float16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_f16m2x3_ta (base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m2x3_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_tu (vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m2x3_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m2x3_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_tu_vl31 (vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_f16m2x3_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m2x4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_ta (float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m2x4_ta (base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m2x4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_ta_vl31 (float16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_f16m2x4_ta (base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m2x4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_tu (vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m2x4_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m2x4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_tu_vl31 (vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_f16m2x4_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_ta (float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m4x2_ta (base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m4x2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_ta_vl31 (float32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f32m4x2_ta (base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m4x2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_tu (vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m4x2_tu (dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m4x2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_tu_vl31 (vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f32m4x2_tu (dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m4x2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_ta (float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m4x2_ta (base, bindex, vl);
}
