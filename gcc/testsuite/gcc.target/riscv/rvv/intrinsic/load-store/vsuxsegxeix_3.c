/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vsuxseg8ei16_v_u64m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u64m1x8_m_vl31 (vbool64_t mask, uint64_t *base, vuint16mf4_t bindex, vuint64m1x8_t v0)
{
  vsuxseg8ei16_v_u64m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u8mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8mf4x2 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u8mf4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u8mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8mf4x2_vl31 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x2_t v0)
{
  vsuxseg2ei16_v_u8mf4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8mf4x2_m (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u8mf4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u8mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8mf4x2_m_vl31 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x2_t v0)
{
  vsuxseg2ei16_v_u8mf4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u8mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8mf4x3 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u8mf4x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u8mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8mf4x3_vl31 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x3_t v0)
{
  vsuxseg3ei16_v_u8mf4x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8mf4x3_m (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u8mf4x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u8mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8mf4x3_m_vl31 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x3_t v0)
{
  vsuxseg3ei16_v_u8mf4x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u8mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8mf4x4 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u8mf4x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u8mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8mf4x4_vl31 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x4_t v0)
{
  vsuxseg4ei16_v_u8mf4x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8mf4x4_m (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u8mf4x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u8mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8mf4x4_m_vl31 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x4_t v0)
{
  vsuxseg4ei16_v_u8mf4x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u8mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8mf4x5 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u8mf4x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u8mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8mf4x5_vl31 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x5_t v0)
{
  vsuxseg5ei16_v_u8mf4x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8mf4x5_m (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u8mf4x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u8mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8mf4x5_m_vl31 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x5_t v0)
{
  vsuxseg5ei16_v_u8mf4x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u8mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8mf4x6 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u8mf4x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u8mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8mf4x6_vl31 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x6_t v0)
{
  vsuxseg6ei16_v_u8mf4x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u8mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8mf4x6_m (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u8mf4x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u8mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8mf4x6_m_vl31 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x6_t v0)
{
  vsuxseg6ei16_v_u8mf4x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u8mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8mf4x7 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u8mf4x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u8mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8mf4x7_vl31 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x7_t v0)
{
  vsuxseg7ei16_v_u8mf4x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u8mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8mf4x7_m (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u8mf4x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u8mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8mf4x7_m_vl31 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x7_t v0)
{
  vsuxseg7ei16_v_u8mf4x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u8mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8mf4x8 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u8mf4x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u8mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8mf4x8_vl31 (uint8_t *base, vuint16mf2_t bindex, vuint8mf4x8_t v0)
{
  vsuxseg8ei16_v_u8mf4x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u8mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8mf4x8_m (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u8mf4x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u8mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8mf4x8_m_vl31 (vbool32_t mask, uint8_t *base, vuint16mf2_t bindex, vuint8mf4x8_t v0)
{
  vsuxseg8ei16_v_u8mf4x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16mf2x2 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u16mf2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u16mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16mf2x2_vl31 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x2_t v0)
{
  vsuxseg2ei16_v_u16mf2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16mf2x2_m (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u16mf2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u16mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16mf2x2_m_vl31 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x2_t v0)
{
  vsuxseg2ei16_v_u16mf2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16mf2x3 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u16mf2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u16mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16mf2x3_vl31 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x3_t v0)
{
  vsuxseg3ei16_v_u16mf2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16mf2x3_m (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u16mf2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u16mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16mf2x3_m_vl31 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x3_t v0)
{
  vsuxseg3ei16_v_u16mf2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16mf2x4 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u16mf2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u16mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16mf2x4_vl31 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x4_t v0)
{
  vsuxseg4ei16_v_u16mf2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16mf2x4_m (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u16mf2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u16mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16mf2x4_m_vl31 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x4_t v0)
{
  vsuxseg4ei16_v_u16mf2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u16mf2x5 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u16mf2x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u16mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u16mf2x5_vl31 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x5_t v0)
{
  vsuxseg5ei16_v_u16mf2x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u16mf2x5_m (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u16mf2x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u16mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u16mf2x5_m_vl31 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x5_t v0)
{
  vsuxseg5ei16_v_u16mf2x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u16mf2x6 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u16mf2x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u16mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u16mf2x6_vl31 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x6_t v0)
{
  vsuxseg6ei16_v_u16mf2x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u16mf2x6_m (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u16mf2x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u16mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u16mf2x6_m_vl31 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x6_t v0)
{
  vsuxseg6ei16_v_u16mf2x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u16mf2x7 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u16mf2x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u16mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u16mf2x7_vl31 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x7_t v0)
{
  vsuxseg7ei16_v_u16mf2x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u16mf2x7_m (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u16mf2x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u16mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u16mf2x7_m_vl31 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x7_t v0)
{
  vsuxseg7ei16_v_u16mf2x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u16mf2x8 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u16mf2x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u16mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u16mf2x8_vl31 (uint16_t *base, vuint16mf2_t bindex, vuint16mf2x8_t v0)
{
  vsuxseg8ei16_v_u16mf2x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u16mf2x8_m (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u16mf2x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u16mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u16mf2x8_m_vl31 (vbool32_t mask, uint16_t *base, vuint16mf2_t bindex, vuint16mf2x8_t v0)
{
  vsuxseg8ei16_v_u16mf2x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m1x2 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u32m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u32m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m1x2_vl31 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x2_t v0)
{
  vsuxseg2ei16_v_u32m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m1x2_m (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u32m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u32m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m1x2_m_vl31 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x2_t v0)
{
  vsuxseg2ei16_v_u32m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u32m1x3 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u32m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u32m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u32m1x3_vl31 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x3_t v0)
{
  vsuxseg3ei16_v_u32m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u32m1x3_m (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u32m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u32m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u32m1x3_m_vl31 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x3_t v0)
{
  vsuxseg3ei16_v_u32m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u32m1x4 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u32m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u32m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u32m1x4_vl31 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x4_t v0)
{
  vsuxseg4ei16_v_u32m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u32m1x4_m (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u32m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u32m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u32m1x4_m_vl31 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x4_t v0)
{
  vsuxseg4ei16_v_u32m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u32m1x5 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u32m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u32m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u32m1x5_vl31 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x5_t v0)
{
  vsuxseg5ei16_v_u32m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u32m1x5_m (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u32m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u32m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u32m1x5_m_vl31 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x5_t v0)
{
  vsuxseg5ei16_v_u32m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u32m1x6 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u32m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u32m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u32m1x6_vl31 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x6_t v0)
{
  vsuxseg6ei16_v_u32m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u32m1x6_m (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u32m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u32m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u32m1x6_m_vl31 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x6_t v0)
{
  vsuxseg6ei16_v_u32m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u32m1x7 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u32m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u32m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u32m1x7_vl31 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x7_t v0)
{
  vsuxseg7ei16_v_u32m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u32m1x7_m (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u32m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u32m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u32m1x7_m_vl31 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x7_t v0)
{
  vsuxseg7ei16_v_u32m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u32m1x8 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u32m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u32m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u32m1x8_vl31 (uint32_t *base, vuint16mf2_t bindex, vuint32m1x8_t v0)
{
  vsuxseg8ei16_v_u32m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u32m1x8_m (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u32m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u32m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u32m1x8_m_vl31 (vbool32_t mask, uint32_t *base, vuint16mf2_t bindex, vuint32m1x8_t v0)
{
  vsuxseg8ei16_v_u32m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u64m2x2 (uint64_t *base, vuint16mf2_t bindex, vuint64m2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u64m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u64m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u64m2x2_vl31 (uint64_t *base, vuint16mf2_t bindex, vuint64m2x2_t v0)
{
  vsuxseg2ei16_v_u64m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u64m2x2_m (vbool32_t mask, uint64_t *base, vuint16mf2_t bindex, vuint64m2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u64m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u64m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u64m2x2_m_vl31 (vbool32_t mask, uint64_t *base, vuint16mf2_t bindex, vuint64m2x2_t v0)
{
  vsuxseg2ei16_v_u64m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u64m2x3 (uint64_t *base, vuint16mf2_t bindex, vuint64m2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u64m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u64m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u64m2x3_vl31 (uint64_t *base, vuint16mf2_t bindex, vuint64m2x3_t v0)
{
  vsuxseg3ei16_v_u64m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u64m2x3_m (vbool32_t mask, uint64_t *base, vuint16mf2_t bindex, vuint64m2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u64m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u64m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u64m2x3_m_vl31 (vbool32_t mask, uint64_t *base, vuint16mf2_t bindex, vuint64m2x3_t v0)
{
  vsuxseg3ei16_v_u64m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u64m2x4 (uint64_t *base, vuint16mf2_t bindex, vuint64m2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u64m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u64m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u64m2x4_vl31 (uint64_t *base, vuint16mf2_t bindex, vuint64m2x4_t v0)
{
  vsuxseg4ei16_v_u64m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u64m2x4_m (vbool32_t mask, uint64_t *base, vuint16mf2_t bindex, vuint64m2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u64m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u64m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u64m2x4_m_vl31 (vbool32_t mask, uint64_t *base, vuint16mf2_t bindex, vuint64m2x4_t v0)
{
  vsuxseg4ei16_v_u64m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u8mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8mf2x2 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u8mf2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u8mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8mf2x2_vl31 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x2_t v0)
{
  vsuxseg2ei16_v_u8mf2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u8mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8mf2x2_m (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u8mf2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u8mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8mf2x2_m_vl31 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x2_t v0)
{
  vsuxseg2ei16_v_u8mf2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u8mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8mf2x3 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u8mf2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u8mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8mf2x3_vl31 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x3_t v0)
{
  vsuxseg3ei16_v_u8mf2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u8mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8mf2x3_m (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u8mf2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u8mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8mf2x3_m_vl31 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x3_t v0)
{
  vsuxseg3ei16_v_u8mf2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u8mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8mf2x4 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u8mf2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u8mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8mf2x4_vl31 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x4_t v0)
{
  vsuxseg4ei16_v_u8mf2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u8mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8mf2x4_m (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u8mf2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u8mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8mf2x4_m_vl31 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x4_t v0)
{
  vsuxseg4ei16_v_u8mf2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u8mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8mf2x5 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u8mf2x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u8mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8mf2x5_vl31 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x5_t v0)
{
  vsuxseg5ei16_v_u8mf2x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u8mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8mf2x5_m (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u8mf2x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u8mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8mf2x5_m_vl31 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x5_t v0)
{
  vsuxseg5ei16_v_u8mf2x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u8mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8mf2x6 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u8mf2x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u8mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8mf2x6_vl31 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x6_t v0)
{
  vsuxseg6ei16_v_u8mf2x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u8mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8mf2x6_m (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u8mf2x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u8mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8mf2x6_m_vl31 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x6_t v0)
{
  vsuxseg6ei16_v_u8mf2x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u8mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8mf2x7 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u8mf2x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u8mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8mf2x7_vl31 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x7_t v0)
{
  vsuxseg7ei16_v_u8mf2x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u8mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8mf2x7_m (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u8mf2x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u8mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8mf2x7_m_vl31 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x7_t v0)
{
  vsuxseg7ei16_v_u8mf2x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u8mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8mf2x8 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u8mf2x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u8mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8mf2x8_vl31 (uint8_t *base, vuint16m1_t bindex, vuint8mf2x8_t v0)
{
  vsuxseg8ei16_v_u8mf2x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u8mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8mf2x8_m (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u8mf2x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u8mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8mf2x8_m_vl31 (vbool16_t mask, uint8_t *base, vuint16m1_t bindex, vuint8mf2x8_t v0)
{
  vsuxseg8ei16_v_u8mf2x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m1x2 (uint16_t *base, vuint16m1_t bindex, vuint16m1x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u16m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u16m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m1x2_vl31 (uint16_t *base, vuint16m1_t bindex, vuint16m1x2_t v0)
{
  vsuxseg2ei16_v_u16m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m1x2_m (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u16m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u16m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m1x2_m_vl31 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x2_t v0)
{
  vsuxseg2ei16_v_u16m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16m1x3 (uint16_t *base, vuint16m1_t bindex, vuint16m1x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u16m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u16m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16m1x3_vl31 (uint16_t *base, vuint16m1_t bindex, vuint16m1x3_t v0)
{
  vsuxseg3ei16_v_u16m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16m1x3_m (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u16m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u16m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16m1x3_m_vl31 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x3_t v0)
{
  vsuxseg3ei16_v_u16m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16m1x4 (uint16_t *base, vuint16m1_t bindex, vuint16m1x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u16m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u16m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16m1x4_vl31 (uint16_t *base, vuint16m1_t bindex, vuint16m1x4_t v0)
{
  vsuxseg4ei16_v_u16m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16m1x4_m (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u16m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u16m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16m1x4_m_vl31 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x4_t v0)
{
  vsuxseg4ei16_v_u16m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u16m1x5 (uint16_t *base, vuint16m1_t bindex, vuint16m1x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u16m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u16m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u16m1x5_vl31 (uint16_t *base, vuint16m1_t bindex, vuint16m1x5_t v0)
{
  vsuxseg5ei16_v_u16m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u16m1x5_m (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u16m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u16m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u16m1x5_m_vl31 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x5_t v0)
{
  vsuxseg5ei16_v_u16m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u16m1x6 (uint16_t *base, vuint16m1_t bindex, vuint16m1x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u16m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u16m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u16m1x6_vl31 (uint16_t *base, vuint16m1_t bindex, vuint16m1x6_t v0)
{
  vsuxseg6ei16_v_u16m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u16m1x6_m (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u16m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u16m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u16m1x6_m_vl31 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x6_t v0)
{
  vsuxseg6ei16_v_u16m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u16m1x7 (uint16_t *base, vuint16m1_t bindex, vuint16m1x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u16m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u16m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u16m1x7_vl31 (uint16_t *base, vuint16m1_t bindex, vuint16m1x7_t v0)
{
  vsuxseg7ei16_v_u16m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u16m1x7_m (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u16m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u16m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u16m1x7_m_vl31 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x7_t v0)
{
  vsuxseg7ei16_v_u16m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u16m1x8 (uint16_t *base, vuint16m1_t bindex, vuint16m1x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u16m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u16m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u16m1x8_vl31 (uint16_t *base, vuint16m1_t bindex, vuint16m1x8_t v0)
{
  vsuxseg8ei16_v_u16m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u16m1x8_m (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u16m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u16m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u16m1x8_m_vl31 (vbool16_t mask, uint16_t *base, vuint16m1_t bindex, vuint16m1x8_t v0)
{
  vsuxseg8ei16_v_u16m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m2x2 (uint32_t *base, vuint16m1_t bindex, vuint32m2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u32m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u32m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m2x2_vl31 (uint32_t *base, vuint16m1_t bindex, vuint32m2x2_t v0)
{
  vsuxseg2ei16_v_u32m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m2x2_m (vbool16_t mask, uint32_t *base, vuint16m1_t bindex, vuint32m2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u32m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u32m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m2x2_m_vl31 (vbool16_t mask, uint32_t *base, vuint16m1_t bindex, vuint32m2x2_t v0)
{
  vsuxseg2ei16_v_u32m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u32m2x3 (uint32_t *base, vuint16m1_t bindex, vuint32m2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u32m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u32m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u32m2x3_vl31 (uint32_t *base, vuint16m1_t bindex, vuint32m2x3_t v0)
{
  vsuxseg3ei16_v_u32m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u32m2x3_m (vbool16_t mask, uint32_t *base, vuint16m1_t bindex, vuint32m2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u32m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u32m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u32m2x3_m_vl31 (vbool16_t mask, uint32_t *base, vuint16m1_t bindex, vuint32m2x3_t v0)
{
  vsuxseg3ei16_v_u32m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u32m2x4 (uint32_t *base, vuint16m1_t bindex, vuint32m2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u32m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u32m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u32m2x4_vl31 (uint32_t *base, vuint16m1_t bindex, vuint32m2x4_t v0)
{
  vsuxseg4ei16_v_u32m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u32m2x4_m (vbool16_t mask, uint32_t *base, vuint16m1_t bindex, vuint32m2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u32m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u32m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u32m2x4_m_vl31 (vbool16_t mask, uint32_t *base, vuint16m1_t bindex, vuint32m2x4_t v0)
{
  vsuxseg4ei16_v_u32m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u64m4x2 (uint64_t *base, vuint16m1_t bindex, vuint64m4x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u64m4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u64m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u64m4x2_vl31 (uint64_t *base, vuint16m1_t bindex, vuint64m4x2_t v0)
{
  vsuxseg2ei16_v_u64m4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u64m4x2_m (vbool16_t mask, uint64_t *base, vuint16m1_t bindex, vuint64m4x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u64m4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u64m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u64m4x2_m_vl31 (vbool16_t mask, uint64_t *base, vuint16m1_t bindex, vuint64m4x2_t v0)
{
  vsuxseg2ei16_v_u64m4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u8m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m1x2 (uint8_t *base, vuint16m2_t bindex, vuint8m1x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u8m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u8m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m1x2_vl31 (uint8_t *base, vuint16m2_t bindex, vuint8m1x2_t v0)
{
  vsuxseg2ei16_v_u8m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u8m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m1x2_m (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u8m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u8m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m1x2_m_vl31 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x2_t v0)
{
  vsuxseg2ei16_v_u8m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u8m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8m1x3 (uint8_t *base, vuint16m2_t bindex, vuint8m1x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u8m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u8m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8m1x3_vl31 (uint8_t *base, vuint16m2_t bindex, vuint8m1x3_t v0)
{
  vsuxseg3ei16_v_u8m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u8m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8m1x3_m (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u8m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u8m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8m1x3_m_vl31 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x3_t v0)
{
  vsuxseg3ei16_v_u8m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u8m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8m1x4 (uint8_t *base, vuint16m2_t bindex, vuint8m1x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u8m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u8m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8m1x4_vl31 (uint8_t *base, vuint16m2_t bindex, vuint8m1x4_t v0)
{
  vsuxseg4ei16_v_u8m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u8m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8m1x4_m (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u8m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u8m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8m1x4_m_vl31 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x4_t v0)
{
  vsuxseg4ei16_v_u8m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u8m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8m1x5 (uint8_t *base, vuint16m2_t bindex, vuint8m1x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u8m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u8m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8m1x5_vl31 (uint8_t *base, vuint16m2_t bindex, vuint8m1x5_t v0)
{
  vsuxseg5ei16_v_u8m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei16_v_u8m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8m1x5_m (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x5_t v0, size_t vl)
{
  vsuxseg5ei16_v_u8m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei16_v_u8m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_u8m1x5_m_vl31 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x5_t v0)
{
  vsuxseg5ei16_v_u8m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u8m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8m1x6 (uint8_t *base, vuint16m2_t bindex, vuint8m1x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u8m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u8m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8m1x6_vl31 (uint8_t *base, vuint16m2_t bindex, vuint8m1x6_t v0)
{
  vsuxseg6ei16_v_u8m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei16_v_u8m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8m1x6_m (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x6_t v0, size_t vl)
{
  vsuxseg6ei16_v_u8m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei16_v_u8m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_u8m1x6_m_vl31 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x6_t v0)
{
  vsuxseg6ei16_v_u8m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u8m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8m1x7 (uint8_t *base, vuint16m2_t bindex, vuint8m1x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u8m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u8m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8m1x7_vl31 (uint8_t *base, vuint16m2_t bindex, vuint8m1x7_t v0)
{
  vsuxseg7ei16_v_u8m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei16_v_u8m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8m1x7_m (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x7_t v0, size_t vl)
{
  vsuxseg7ei16_v_u8m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei16_v_u8m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_u8m1x7_m_vl31 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x7_t v0)
{
  vsuxseg7ei16_v_u8m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u8m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8m1x8 (uint8_t *base, vuint16m2_t bindex, vuint8m1x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u8m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u8m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8m1x8_vl31 (uint8_t *base, vuint16m2_t bindex, vuint8m1x8_t v0)
{
  vsuxseg8ei16_v_u8m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei16_v_u8m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8m1x8_m (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x8_t v0, size_t vl)
{
  vsuxseg8ei16_v_u8m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei16_v_u8m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_u8m1x8_m_vl31 (vbool8_t mask, uint8_t *base, vuint16m2_t bindex, vuint8m1x8_t v0)
{
  vsuxseg8ei16_v_u8m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m2x2 (uint16_t *base, vuint16m2_t bindex, vuint16m2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u16m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u16m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m2x2_vl31 (uint16_t *base, vuint16m2_t bindex, vuint16m2x2_t v0)
{
  vsuxseg2ei16_v_u16m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m2x2_m (vbool8_t mask, uint16_t *base, vuint16m2_t bindex, vuint16m2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u16m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u16m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m2x2_m_vl31 (vbool8_t mask, uint16_t *base, vuint16m2_t bindex, vuint16m2x2_t v0)
{
  vsuxseg2ei16_v_u16m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16m2x3 (uint16_t *base, vuint16m2_t bindex, vuint16m2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u16m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u16m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16m2x3_vl31 (uint16_t *base, vuint16m2_t bindex, vuint16m2x3_t v0)
{
  vsuxseg3ei16_v_u16m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16m2x3_m (vbool8_t mask, uint16_t *base, vuint16m2_t bindex, vuint16m2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u16m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u16m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u16m2x3_m_vl31 (vbool8_t mask, uint16_t *base, vuint16m2_t bindex, vuint16m2x3_t v0)
{
  vsuxseg3ei16_v_u16m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16m2x4 (uint16_t *base, vuint16m2_t bindex, vuint16m2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u16m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u16m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16m2x4_vl31 (uint16_t *base, vuint16m2_t bindex, vuint16m2x4_t v0)
{
  vsuxseg4ei16_v_u16m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16m2x4_m (vbool8_t mask, uint16_t *base, vuint16m2_t bindex, vuint16m2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u16m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u16m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u16m2x4_m_vl31 (vbool8_t mask, uint16_t *base, vuint16m2_t bindex, vuint16m2x4_t v0)
{
  vsuxseg4ei16_v_u16m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m4x2 (uint32_t *base, vuint16m2_t bindex, vuint32m4x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u32m4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u32m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m4x2_vl31 (uint32_t *base, vuint16m2_t bindex, vuint32m4x2_t v0)
{
  vsuxseg2ei16_v_u32m4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m4x2_m (vbool8_t mask, uint32_t *base, vuint16m2_t bindex, vuint32m4x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u32m4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u32m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u32m4x2_m_vl31 (vbool8_t mask, uint32_t *base, vuint16m2_t bindex, vuint32m4x2_t v0)
{
  vsuxseg2ei16_v_u32m4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u8m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m2x2 (uint8_t *base, vuint16m4_t bindex, vuint8m2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u8m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u8m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m2x2_vl31 (uint8_t *base, vuint16m4_t bindex, vuint8m2x2_t v0)
{
  vsuxseg2ei16_v_u8m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u8m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m2x2_m (vbool4_t mask, uint8_t *base, vuint16m4_t bindex, vuint8m2x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u8m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u8m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m2x2_m_vl31 (vbool4_t mask, uint8_t *base, vuint16m4_t bindex, vuint8m2x2_t v0)
{
  vsuxseg2ei16_v_u8m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u8m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8m2x3 (uint8_t *base, vuint16m4_t bindex, vuint8m2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u8m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u8m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8m2x3_vl31 (uint8_t *base, vuint16m4_t bindex, vuint8m2x3_t v0)
{
  vsuxseg3ei16_v_u8m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei16_v_u8m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8m2x3_m (vbool4_t mask, uint8_t *base, vuint16m4_t bindex, vuint8m2x3_t v0, size_t vl)
{
  vsuxseg3ei16_v_u8m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei16_v_u8m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_u8m2x3_m_vl31 (vbool4_t mask, uint8_t *base, vuint16m4_t bindex, vuint8m2x3_t v0)
{
  vsuxseg3ei16_v_u8m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u8m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8m2x4 (uint8_t *base, vuint16m4_t bindex, vuint8m2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u8m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u8m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8m2x4_vl31 (uint8_t *base, vuint16m4_t bindex, vuint8m2x4_t v0)
{
  vsuxseg4ei16_v_u8m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei16_v_u8m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8m2x4_m (vbool4_t mask, uint8_t *base, vuint16m4_t bindex, vuint8m2x4_t v0, size_t vl)
{
  vsuxseg4ei16_v_u8m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei16_v_u8m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_u8m2x4_m_vl31 (vbool4_t mask, uint8_t *base, vuint16m4_t bindex, vuint8m2x4_t v0)
{
  vsuxseg4ei16_v_u8m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m4x2 (uint16_t *base, vuint16m4_t bindex, vuint16m4x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u16m4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u16m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m4x2_vl31 (uint16_t *base, vuint16m4_t bindex, vuint16m4x2_t v0)
{
  vsuxseg2ei16_v_u16m4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m4x2_m (vbool4_t mask, uint16_t *base, vuint16m4_t bindex, vuint16m4x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u16m4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u16m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u16m4x2_m_vl31 (vbool4_t mask, uint16_t *base, vuint16m4_t bindex, vuint16m4x2_t v0)
{
  vsuxseg2ei16_v_u16m4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u8m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m4x2 (uint8_t *base, vuint16m8_t bindex, vuint8m4x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u8m4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u8m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m4x2_vl31 (uint8_t *base, vuint16m8_t bindex, vuint8m4x2_t v0)
{
  vsuxseg2ei16_v_u8m4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei16_v_u8m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m4x2_m (vbool2_t mask, uint8_t *base, vuint16m8_t bindex, vuint8m4x2_t v0, size_t vl)
{
  vsuxseg2ei16_v_u8m4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei16_v_u8m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_u8m4x2_m_vl31 (vbool2_t mask, uint8_t *base, vuint16m8_t bindex, vuint8m4x2_t v0)
{
  vsuxseg2ei16_v_u8m4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf8x2 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u8mf8x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u8mf8x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf8x2_vl31 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x2_t v0)
{
  vsuxseg2ei32_v_u8mf8x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf8x2_m (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u8mf8x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u8mf8x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf8x2_m_vl31 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x2_t v0)
{
  vsuxseg2ei32_v_u8mf8x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf8x3 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u8mf8x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u8mf8x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf8x3_vl31 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x3_t v0)
{
  vsuxseg3ei32_v_u8mf8x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf8x3_m (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u8mf8x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u8mf8x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf8x3_m_vl31 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x3_t v0)
{
  vsuxseg3ei32_v_u8mf8x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf8x4 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u8mf8x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u8mf8x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf8x4_vl31 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x4_t v0)
{
  vsuxseg4ei32_v_u8mf8x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf8x4_m (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u8mf8x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u8mf8x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf8x4_m_vl31 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x4_t v0)
{
  vsuxseg4ei32_v_u8mf8x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf8x5 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u8mf8x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u8mf8x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf8x5_vl31 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x5_t v0)
{
  vsuxseg5ei32_v_u8mf8x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf8x5_m (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u8mf8x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u8mf8x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf8x5_m_vl31 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x5_t v0)
{
  vsuxseg5ei32_v_u8mf8x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf8x6 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u8mf8x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u8mf8x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf8x6_vl31 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x6_t v0)
{
  vsuxseg6ei32_v_u8mf8x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf8x6_m (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u8mf8x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u8mf8x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf8x6_m_vl31 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x6_t v0)
{
  vsuxseg6ei32_v_u8mf8x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf8x7 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u8mf8x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u8mf8x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf8x7_vl31 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x7_t v0)
{
  vsuxseg7ei32_v_u8mf8x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf8x7_m (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u8mf8x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u8mf8x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf8x7_m_vl31 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x7_t v0)
{
  vsuxseg7ei32_v_u8mf8x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf8x8 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u8mf8x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u8mf8x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf8x8_vl31 (uint8_t *base, vuint32mf2_t bindex, vuint8mf8x8_t v0)
{
  vsuxseg8ei32_v_u8mf8x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf8x8_m (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u8mf8x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u8mf8x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf8x8_m_vl31 (vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8x8_t v0)
{
  vsuxseg8ei32_v_u8mf8x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16mf4x2 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u16mf4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u16mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16mf4x2_vl31 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x2_t v0)
{
  vsuxseg2ei32_v_u16mf4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16mf4x2_m (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u16mf4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u16mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16mf4x2_m_vl31 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x2_t v0)
{
  vsuxseg2ei32_v_u16mf4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16mf4x3 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u16mf4x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u16mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16mf4x3_vl31 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x3_t v0)
{
  vsuxseg3ei32_v_u16mf4x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16mf4x3_m (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u16mf4x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u16mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16mf4x3_m_vl31 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x3_t v0)
{
  vsuxseg3ei32_v_u16mf4x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16mf4x4 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u16mf4x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u16mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16mf4x4_vl31 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x4_t v0)
{
  vsuxseg4ei32_v_u16mf4x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16mf4x4_m (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u16mf4x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u16mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16mf4x4_m_vl31 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x4_t v0)
{
  vsuxseg4ei32_v_u16mf4x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16mf4x5 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u16mf4x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u16mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16mf4x5_vl31 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x5_t v0)
{
  vsuxseg5ei32_v_u16mf4x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16mf4x5_m (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u16mf4x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u16mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16mf4x5_m_vl31 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x5_t v0)
{
  vsuxseg5ei32_v_u16mf4x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16mf4x6 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u16mf4x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u16mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16mf4x6_vl31 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x6_t v0)
{
  vsuxseg6ei32_v_u16mf4x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16mf4x6_m (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u16mf4x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u16mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16mf4x6_m_vl31 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x6_t v0)
{
  vsuxseg6ei32_v_u16mf4x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16mf4x7 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u16mf4x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u16mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16mf4x7_vl31 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x7_t v0)
{
  vsuxseg7ei32_v_u16mf4x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16mf4x7_m (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u16mf4x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u16mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16mf4x7_m_vl31 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x7_t v0)
{
  vsuxseg7ei32_v_u16mf4x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16mf4x8 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u16mf4x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u16mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16mf4x8_vl31 (uint16_t *base, vuint32mf2_t bindex, vuint16mf4x8_t v0)
{
  vsuxseg8ei32_v_u16mf4x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16mf4x8_m (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u16mf4x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u16mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16mf4x8_m_vl31 (vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4x8_t v0)
{
  vsuxseg8ei32_v_u16mf4x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32mf2x2 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u32mf2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u32mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32mf2x2_vl31 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x2_t v0)
{
  vsuxseg2ei32_v_u32mf2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32mf2x2_m (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u32mf2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u32mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32mf2x2_m_vl31 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x2_t v0)
{
  vsuxseg2ei32_v_u32mf2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32mf2x3 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u32mf2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u32mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32mf2x3_vl31 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x3_t v0)
{
  vsuxseg3ei32_v_u32mf2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32mf2x3_m (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u32mf2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u32mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32mf2x3_m_vl31 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x3_t v0)
{
  vsuxseg3ei32_v_u32mf2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32mf2x4 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u32mf2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u32mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32mf2x4_vl31 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x4_t v0)
{
  vsuxseg4ei32_v_u32mf2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32mf2x4_m (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u32mf2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u32mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32mf2x4_m_vl31 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x4_t v0)
{
  vsuxseg4ei32_v_u32mf2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u32mf2x5 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u32mf2x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u32mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u32mf2x5_vl31 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x5_t v0)
{
  vsuxseg5ei32_v_u32mf2x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u32mf2x5_m (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u32mf2x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u32mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u32mf2x5_m_vl31 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x5_t v0)
{
  vsuxseg5ei32_v_u32mf2x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u32mf2x6 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u32mf2x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u32mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u32mf2x6_vl31 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x6_t v0)
{
  vsuxseg6ei32_v_u32mf2x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u32mf2x6_m (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u32mf2x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u32mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u32mf2x6_m_vl31 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x6_t v0)
{
  vsuxseg6ei32_v_u32mf2x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u32mf2x7 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u32mf2x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u32mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u32mf2x7_vl31 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x7_t v0)
{
  vsuxseg7ei32_v_u32mf2x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u32mf2x7_m (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u32mf2x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u32mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u32mf2x7_m_vl31 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x7_t v0)
{
  vsuxseg7ei32_v_u32mf2x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u32mf2x8 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u32mf2x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u32mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u32mf2x8_vl31 (uint32_t *base, vuint32mf2_t bindex, vuint32mf2x8_t v0)
{
  vsuxseg8ei32_v_u32mf2x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u32mf2x8_m (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u32mf2x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u32mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u32mf2x8_m_vl31 (vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2x8_t v0)
{
  vsuxseg8ei32_v_u32mf2x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m1x2 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u64m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u64m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m1x2_vl31 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x2_t v0)
{
  vsuxseg2ei32_v_u64m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m1x2_m (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u64m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u64m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m1x2_m_vl31 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x2_t v0)
{
  vsuxseg2ei32_v_u64m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u64m1x3 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u64m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u64m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u64m1x3_vl31 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x3_t v0)
{
  vsuxseg3ei32_v_u64m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u64m1x3_m (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u64m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u64m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u64m1x3_m_vl31 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x3_t v0)
{
  vsuxseg3ei32_v_u64m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u64m1x4 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u64m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u64m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u64m1x4_vl31 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x4_t v0)
{
  vsuxseg4ei32_v_u64m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u64m1x4_m (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u64m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u64m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u64m1x4_m_vl31 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x4_t v0)
{
  vsuxseg4ei32_v_u64m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u64m1x5 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u64m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u64m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u64m1x5_vl31 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x5_t v0)
{
  vsuxseg5ei32_v_u64m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u64m1x5_m (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u64m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u64m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u64m1x5_m_vl31 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x5_t v0)
{
  vsuxseg5ei32_v_u64m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u64m1x6 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u64m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u64m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u64m1x6_vl31 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x6_t v0)
{
  vsuxseg6ei32_v_u64m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u64m1x6_m (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u64m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u64m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u64m1x6_m_vl31 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x6_t v0)
{
  vsuxseg6ei32_v_u64m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u64m1x7 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u64m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u64m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u64m1x7_vl31 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x7_t v0)
{
  vsuxseg7ei32_v_u64m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u64m1x7_m (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u64m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u64m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u64m1x7_m_vl31 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x7_t v0)
{
  vsuxseg7ei32_v_u64m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u64m1x8 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u64m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u64m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u64m1x8_vl31 (uint64_t *base, vuint32mf2_t bindex, vuint64m1x8_t v0)
{
  vsuxseg8ei32_v_u64m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u64m1x8_m (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u64m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u64m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u64m1x8_m_vl31 (vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1x8_t v0)
{
  vsuxseg8ei32_v_u64m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u8mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf4x2 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u8mf4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u8mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf4x2_vl31 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x2_t v0)
{
  vsuxseg2ei32_v_u8mf4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf4x2_m (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u8mf4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u8mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf4x2_m_vl31 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x2_t v0)
{
  vsuxseg2ei32_v_u8mf4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u8mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf4x3 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u8mf4x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u8mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf4x3_vl31 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x3_t v0)
{
  vsuxseg3ei32_v_u8mf4x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf4x3_m (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u8mf4x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u8mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf4x3_m_vl31 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x3_t v0)
{
  vsuxseg3ei32_v_u8mf4x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u8mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf4x4 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u8mf4x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u8mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf4x4_vl31 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x4_t v0)
{
  vsuxseg4ei32_v_u8mf4x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf4x4_m (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u8mf4x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u8mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf4x4_m_vl31 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x4_t v0)
{
  vsuxseg4ei32_v_u8mf4x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u8mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf4x5 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u8mf4x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u8mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf4x5_vl31 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x5_t v0)
{
  vsuxseg5ei32_v_u8mf4x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf4x5_m (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u8mf4x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u8mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf4x5_m_vl31 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x5_t v0)
{
  vsuxseg5ei32_v_u8mf4x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u8mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf4x6 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u8mf4x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u8mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf4x6_vl31 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x6_t v0)
{
  vsuxseg6ei32_v_u8mf4x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u8mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf4x6_m (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u8mf4x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u8mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf4x6_m_vl31 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x6_t v0)
{
  vsuxseg6ei32_v_u8mf4x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u8mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf4x7 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u8mf4x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u8mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf4x7_vl31 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x7_t v0)
{
  vsuxseg7ei32_v_u8mf4x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u8mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf4x7_m (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u8mf4x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u8mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf4x7_m_vl31 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x7_t v0)
{
  vsuxseg7ei32_v_u8mf4x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u8mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf4x8 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u8mf4x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u8mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf4x8_vl31 (uint8_t *base, vuint32m1_t bindex, vuint8mf4x8_t v0)
{
  vsuxseg8ei32_v_u8mf4x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u8mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf4x8_m (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u8mf4x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u8mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf4x8_m_vl31 (vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4x8_t v0)
{
  vsuxseg8ei32_v_u8mf4x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16mf2x2 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u16mf2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u16mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16mf2x2_vl31 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x2_t v0)
{
  vsuxseg2ei32_v_u16mf2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16mf2x2_m (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u16mf2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u16mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16mf2x2_m_vl31 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x2_t v0)
{
  vsuxseg2ei32_v_u16mf2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16mf2x3 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u16mf2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u16mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16mf2x3_vl31 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x3_t v0)
{
  vsuxseg3ei32_v_u16mf2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16mf2x3_m (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u16mf2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u16mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16mf2x3_m_vl31 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x3_t v0)
{
  vsuxseg3ei32_v_u16mf2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16mf2x4 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u16mf2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u16mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16mf2x4_vl31 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x4_t v0)
{
  vsuxseg4ei32_v_u16mf2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16mf2x4_m (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u16mf2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u16mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16mf2x4_m_vl31 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x4_t v0)
{
  vsuxseg4ei32_v_u16mf2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16mf2x5 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u16mf2x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u16mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16mf2x5_vl31 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x5_t v0)
{
  vsuxseg5ei32_v_u16mf2x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16mf2x5_m (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u16mf2x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u16mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16mf2x5_m_vl31 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x5_t v0)
{
  vsuxseg5ei32_v_u16mf2x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16mf2x6 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u16mf2x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u16mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16mf2x6_vl31 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x6_t v0)
{
  vsuxseg6ei32_v_u16mf2x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16mf2x6_m (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u16mf2x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u16mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16mf2x6_m_vl31 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x6_t v0)
{
  vsuxseg6ei32_v_u16mf2x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16mf2x7 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u16mf2x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u16mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16mf2x7_vl31 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x7_t v0)
{
  vsuxseg7ei32_v_u16mf2x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16mf2x7_m (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u16mf2x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u16mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16mf2x7_m_vl31 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x7_t v0)
{
  vsuxseg7ei32_v_u16mf2x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16mf2x8 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u16mf2x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u16mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16mf2x8_vl31 (uint16_t *base, vuint32m1_t bindex, vuint16mf2x8_t v0)
{
  vsuxseg8ei32_v_u16mf2x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16mf2x8_m (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u16mf2x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u16mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16mf2x8_m_vl31 (vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2x8_t v0)
{
  vsuxseg8ei32_v_u16mf2x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m1x2 (uint32_t *base, vuint32m1_t bindex, vuint32m1x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u32m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u32m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m1x2_vl31 (uint32_t *base, vuint32m1_t bindex, vuint32m1x2_t v0)
{
  vsuxseg2ei32_v_u32m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m1x2_m (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u32m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u32m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m1x2_m_vl31 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x2_t v0)
{
  vsuxseg2ei32_v_u32m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32m1x3 (uint32_t *base, vuint32m1_t bindex, vuint32m1x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u32m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u32m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32m1x3_vl31 (uint32_t *base, vuint32m1_t bindex, vuint32m1x3_t v0)
{
  vsuxseg3ei32_v_u32m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32m1x3_m (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u32m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u32m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32m1x3_m_vl31 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x3_t v0)
{
  vsuxseg3ei32_v_u32m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32m1x4 (uint32_t *base, vuint32m1_t bindex, vuint32m1x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u32m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u32m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32m1x4_vl31 (uint32_t *base, vuint32m1_t bindex, vuint32m1x4_t v0)
{
  vsuxseg4ei32_v_u32m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32m1x4_m (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u32m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u32m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32m1x4_m_vl31 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x4_t v0)
{
  vsuxseg4ei32_v_u32m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u32m1x5 (uint32_t *base, vuint32m1_t bindex, vuint32m1x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u32m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u32m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u32m1x5_vl31 (uint32_t *base, vuint32m1_t bindex, vuint32m1x5_t v0)
{
  vsuxseg5ei32_v_u32m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u32m1x5_m (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u32m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u32m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u32m1x5_m_vl31 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x5_t v0)
{
  vsuxseg5ei32_v_u32m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u32m1x6 (uint32_t *base, vuint32m1_t bindex, vuint32m1x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u32m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u32m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u32m1x6_vl31 (uint32_t *base, vuint32m1_t bindex, vuint32m1x6_t v0)
{
  vsuxseg6ei32_v_u32m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u32m1x6_m (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u32m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u32m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u32m1x6_m_vl31 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x6_t v0)
{
  vsuxseg6ei32_v_u32m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u32m1x7 (uint32_t *base, vuint32m1_t bindex, vuint32m1x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u32m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u32m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u32m1x7_vl31 (uint32_t *base, vuint32m1_t bindex, vuint32m1x7_t v0)
{
  vsuxseg7ei32_v_u32m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u32m1x7_m (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u32m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u32m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u32m1x7_m_vl31 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x7_t v0)
{
  vsuxseg7ei32_v_u32m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u32m1x8 (uint32_t *base, vuint32m1_t bindex, vuint32m1x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u32m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u32m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u32m1x8_vl31 (uint32_t *base, vuint32m1_t bindex, vuint32m1x8_t v0)
{
  vsuxseg8ei32_v_u32m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u32m1x8_m (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u32m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u32m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u32m1x8_m_vl31 (vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1x8_t v0)
{
  vsuxseg8ei32_v_u32m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m2x2 (uint64_t *base, vuint32m1_t bindex, vuint64m2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u64m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u64m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m2x2_vl31 (uint64_t *base, vuint32m1_t bindex, vuint64m2x2_t v0)
{
  vsuxseg2ei32_v_u64m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m2x2_m (vbool32_t mask, uint64_t *base, vuint32m1_t bindex, vuint64m2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u64m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u64m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m2x2_m_vl31 (vbool32_t mask, uint64_t *base, vuint32m1_t bindex, vuint64m2x2_t v0)
{
  vsuxseg2ei32_v_u64m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u64m2x3 (uint64_t *base, vuint32m1_t bindex, vuint64m2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u64m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u64m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u64m2x3_vl31 (uint64_t *base, vuint32m1_t bindex, vuint64m2x3_t v0)
{
  vsuxseg3ei32_v_u64m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u64m2x3_m (vbool32_t mask, uint64_t *base, vuint32m1_t bindex, vuint64m2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u64m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u64m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u64m2x3_m_vl31 (vbool32_t mask, uint64_t *base, vuint32m1_t bindex, vuint64m2x3_t v0)
{
  vsuxseg3ei32_v_u64m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u64m2x4 (uint64_t *base, vuint32m1_t bindex, vuint64m2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u64m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u64m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u64m2x4_vl31 (uint64_t *base, vuint32m1_t bindex, vuint64m2x4_t v0)
{
  vsuxseg4ei32_v_u64m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u64m2x4_m (vbool32_t mask, uint64_t *base, vuint32m1_t bindex, vuint64m2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u64m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u64m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u64m2x4_m_vl31 (vbool32_t mask, uint64_t *base, vuint32m1_t bindex, vuint64m2x4_t v0)
{
  vsuxseg4ei32_v_u64m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u8mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf2x2 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u8mf2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u8mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf2x2_vl31 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x2_t v0)
{
  vsuxseg2ei32_v_u8mf2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u8mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf2x2_m (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u8mf2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u8mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8mf2x2_m_vl31 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x2_t v0)
{
  vsuxseg2ei32_v_u8mf2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u8mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf2x3 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u8mf2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u8mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf2x3_vl31 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x3_t v0)
{
  vsuxseg3ei32_v_u8mf2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u8mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf2x3_m (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u8mf2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u8mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8mf2x3_m_vl31 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x3_t v0)
{
  vsuxseg3ei32_v_u8mf2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u8mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf2x4 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u8mf2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u8mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf2x4_vl31 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x4_t v0)
{
  vsuxseg4ei32_v_u8mf2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u8mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf2x4_m (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u8mf2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u8mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8mf2x4_m_vl31 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x4_t v0)
{
  vsuxseg4ei32_v_u8mf2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u8mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf2x5 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u8mf2x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u8mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf2x5_vl31 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x5_t v0)
{
  vsuxseg5ei32_v_u8mf2x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u8mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf2x5_m (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u8mf2x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u8mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8mf2x5_m_vl31 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x5_t v0)
{
  vsuxseg5ei32_v_u8mf2x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u8mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf2x6 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u8mf2x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u8mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf2x6_vl31 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x6_t v0)
{
  vsuxseg6ei32_v_u8mf2x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u8mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf2x6_m (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u8mf2x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u8mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8mf2x6_m_vl31 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x6_t v0)
{
  vsuxseg6ei32_v_u8mf2x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u8mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf2x7 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u8mf2x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u8mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf2x7_vl31 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x7_t v0)
{
  vsuxseg7ei32_v_u8mf2x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u8mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf2x7_m (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u8mf2x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u8mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8mf2x7_m_vl31 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x7_t v0)
{
  vsuxseg7ei32_v_u8mf2x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u8mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf2x8 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u8mf2x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u8mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf2x8_vl31 (uint8_t *base, vuint32m2_t bindex, vuint8mf2x8_t v0)
{
  vsuxseg8ei32_v_u8mf2x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u8mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf2x8_m (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u8mf2x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u8mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8mf2x8_m_vl31 (vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2x8_t v0)
{
  vsuxseg8ei32_v_u8mf2x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m1x2 (uint16_t *base, vuint32m2_t bindex, vuint16m1x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u16m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u16m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m1x2_vl31 (uint16_t *base, vuint32m2_t bindex, vuint16m1x2_t v0)
{
  vsuxseg2ei32_v_u16m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m1x2_m (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u16m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u16m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m1x2_m_vl31 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x2_t v0)
{
  vsuxseg2ei32_v_u16m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16m1x3 (uint16_t *base, vuint32m2_t bindex, vuint16m1x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u16m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u16m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16m1x3_vl31 (uint16_t *base, vuint32m2_t bindex, vuint16m1x3_t v0)
{
  vsuxseg3ei32_v_u16m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16m1x3_m (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u16m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u16m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16m1x3_m_vl31 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x3_t v0)
{
  vsuxseg3ei32_v_u16m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16m1x4 (uint16_t *base, vuint32m2_t bindex, vuint16m1x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u16m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u16m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16m1x4_vl31 (uint16_t *base, vuint32m2_t bindex, vuint16m1x4_t v0)
{
  vsuxseg4ei32_v_u16m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16m1x4_m (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u16m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u16m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16m1x4_m_vl31 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x4_t v0)
{
  vsuxseg4ei32_v_u16m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16m1x5 (uint16_t *base, vuint32m2_t bindex, vuint16m1x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u16m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u16m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16m1x5_vl31 (uint16_t *base, vuint32m2_t bindex, vuint16m1x5_t v0)
{
  vsuxseg5ei32_v_u16m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16m1x5_m (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u16m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u16m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u16m1x5_m_vl31 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x5_t v0)
{
  vsuxseg5ei32_v_u16m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16m1x6 (uint16_t *base, vuint32m2_t bindex, vuint16m1x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u16m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u16m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16m1x6_vl31 (uint16_t *base, vuint32m2_t bindex, vuint16m1x6_t v0)
{
  vsuxseg6ei32_v_u16m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16m1x6_m (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u16m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u16m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u16m1x6_m_vl31 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x6_t v0)
{
  vsuxseg6ei32_v_u16m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16m1x7 (uint16_t *base, vuint32m2_t bindex, vuint16m1x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u16m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u16m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16m1x7_vl31 (uint16_t *base, vuint32m2_t bindex, vuint16m1x7_t v0)
{
  vsuxseg7ei32_v_u16m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16m1x7_m (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u16m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u16m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u16m1x7_m_vl31 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x7_t v0)
{
  vsuxseg7ei32_v_u16m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16m1x8 (uint16_t *base, vuint32m2_t bindex, vuint16m1x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u16m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u16m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16m1x8_vl31 (uint16_t *base, vuint32m2_t bindex, vuint16m1x8_t v0)
{
  vsuxseg8ei32_v_u16m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16m1x8_m (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u16m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u16m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u16m1x8_m_vl31 (vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1x8_t v0)
{
  vsuxseg8ei32_v_u16m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m2x2 (uint32_t *base, vuint32m2_t bindex, vuint32m2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u32m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u32m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m2x2_vl31 (uint32_t *base, vuint32m2_t bindex, vuint32m2x2_t v0)
{
  vsuxseg2ei32_v_u32m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m2x2_m (vbool16_t mask, uint32_t *base, vuint32m2_t bindex, vuint32m2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u32m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u32m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m2x2_m_vl31 (vbool16_t mask, uint32_t *base, vuint32m2_t bindex, vuint32m2x2_t v0)
{
  vsuxseg2ei32_v_u32m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32m2x3 (uint32_t *base, vuint32m2_t bindex, vuint32m2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u32m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u32m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32m2x3_vl31 (uint32_t *base, vuint32m2_t bindex, vuint32m2x3_t v0)
{
  vsuxseg3ei32_v_u32m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32m2x3_m (vbool16_t mask, uint32_t *base, vuint32m2_t bindex, vuint32m2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u32m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u32m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u32m2x3_m_vl31 (vbool16_t mask, uint32_t *base, vuint32m2_t bindex, vuint32m2x3_t v0)
{
  vsuxseg3ei32_v_u32m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32m2x4 (uint32_t *base, vuint32m2_t bindex, vuint32m2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u32m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u32m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32m2x4_vl31 (uint32_t *base, vuint32m2_t bindex, vuint32m2x4_t v0)
{
  vsuxseg4ei32_v_u32m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32m2x4_m (vbool16_t mask, uint32_t *base, vuint32m2_t bindex, vuint32m2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u32m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u32m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u32m2x4_m_vl31 (vbool16_t mask, uint32_t *base, vuint32m2_t bindex, vuint32m2x4_t v0)
{
  vsuxseg4ei32_v_u32m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m4x2 (uint64_t *base, vuint32m2_t bindex, vuint64m4x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u64m4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u64m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m4x2_vl31 (uint64_t *base, vuint32m2_t bindex, vuint64m4x2_t v0)
{
  vsuxseg2ei32_v_u64m4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m4x2_m (vbool16_t mask, uint64_t *base, vuint32m2_t bindex, vuint64m4x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u64m4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u64m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u64m4x2_m_vl31 (vbool16_t mask, uint64_t *base, vuint32m2_t bindex, vuint64m4x2_t v0)
{
  vsuxseg2ei32_v_u64m4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u8m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8m1x2 (uint8_t *base, vuint32m4_t bindex, vuint8m1x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u8m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u8m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8m1x2_vl31 (uint8_t *base, vuint32m4_t bindex, vuint8m1x2_t v0)
{
  vsuxseg2ei32_v_u8m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u8m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8m1x2_m (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u8m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u8m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8m1x2_m_vl31 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x2_t v0)
{
  vsuxseg2ei32_v_u8m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u8m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8m1x3 (uint8_t *base, vuint32m4_t bindex, vuint8m1x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u8m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u8m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8m1x3_vl31 (uint8_t *base, vuint32m4_t bindex, vuint8m1x3_t v0)
{
  vsuxseg3ei32_v_u8m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u8m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8m1x3_m (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u8m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u8m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8m1x3_m_vl31 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x3_t v0)
{
  vsuxseg3ei32_v_u8m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u8m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8m1x4 (uint8_t *base, vuint32m4_t bindex, vuint8m1x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u8m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u8m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8m1x4_vl31 (uint8_t *base, vuint32m4_t bindex, vuint8m1x4_t v0)
{
  vsuxseg4ei32_v_u8m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u8m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8m1x4_m (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u8m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u8m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8m1x4_m_vl31 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x4_t v0)
{
  vsuxseg4ei32_v_u8m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u8m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8m1x5 (uint8_t *base, vuint32m4_t bindex, vuint8m1x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u8m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u8m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8m1x5_vl31 (uint8_t *base, vuint32m4_t bindex, vuint8m1x5_t v0)
{
  vsuxseg5ei32_v_u8m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei32_v_u8m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8m1x5_m (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x5_t v0, size_t vl)
{
  vsuxseg5ei32_v_u8m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei32_v_u8m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_u8m1x5_m_vl31 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x5_t v0)
{
  vsuxseg5ei32_v_u8m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u8m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8m1x6 (uint8_t *base, vuint32m4_t bindex, vuint8m1x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u8m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u8m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8m1x6_vl31 (uint8_t *base, vuint32m4_t bindex, vuint8m1x6_t v0)
{
  vsuxseg6ei32_v_u8m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei32_v_u8m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8m1x6_m (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x6_t v0, size_t vl)
{
  vsuxseg6ei32_v_u8m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei32_v_u8m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_u8m1x6_m_vl31 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x6_t v0)
{
  vsuxseg6ei32_v_u8m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u8m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8m1x7 (uint8_t *base, vuint32m4_t bindex, vuint8m1x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u8m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u8m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8m1x7_vl31 (uint8_t *base, vuint32m4_t bindex, vuint8m1x7_t v0)
{
  vsuxseg7ei32_v_u8m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei32_v_u8m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8m1x7_m (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x7_t v0, size_t vl)
{
  vsuxseg7ei32_v_u8m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei32_v_u8m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_u8m1x7_m_vl31 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x7_t v0)
{
  vsuxseg7ei32_v_u8m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u8m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8m1x8 (uint8_t *base, vuint32m4_t bindex, vuint8m1x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u8m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u8m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8m1x8_vl31 (uint8_t *base, vuint32m4_t bindex, vuint8m1x8_t v0)
{
  vsuxseg8ei32_v_u8m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei32_v_u8m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8m1x8_m (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x8_t v0, size_t vl)
{
  vsuxseg8ei32_v_u8m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei32_v_u8m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_u8m1x8_m_vl31 (vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1x8_t v0)
{
  vsuxseg8ei32_v_u8m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m2x2 (uint16_t *base, vuint32m4_t bindex, vuint16m2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u16m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u16m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m2x2_vl31 (uint16_t *base, vuint32m4_t bindex, vuint16m2x2_t v0)
{
  vsuxseg2ei32_v_u16m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m2x2_m (vbool8_t mask, uint16_t *base, vuint32m4_t bindex, vuint16m2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u16m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u16m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m2x2_m_vl31 (vbool8_t mask, uint16_t *base, vuint32m4_t bindex, vuint16m2x2_t v0)
{
  vsuxseg2ei32_v_u16m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16m2x3 (uint16_t *base, vuint32m4_t bindex, vuint16m2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u16m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u16m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16m2x3_vl31 (uint16_t *base, vuint32m4_t bindex, vuint16m2x3_t v0)
{
  vsuxseg3ei32_v_u16m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16m2x3_m (vbool8_t mask, uint16_t *base, vuint32m4_t bindex, vuint16m2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u16m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u16m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u16m2x3_m_vl31 (vbool8_t mask, uint16_t *base, vuint32m4_t bindex, vuint16m2x3_t v0)
{
  vsuxseg3ei32_v_u16m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16m2x4 (uint16_t *base, vuint32m4_t bindex, vuint16m2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u16m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u16m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16m2x4_vl31 (uint16_t *base, vuint32m4_t bindex, vuint16m2x4_t v0)
{
  vsuxseg4ei32_v_u16m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16m2x4_m (vbool8_t mask, uint16_t *base, vuint32m4_t bindex, vuint16m2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u16m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u16m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u16m2x4_m_vl31 (vbool8_t mask, uint16_t *base, vuint32m4_t bindex, vuint16m2x4_t v0)
{
  vsuxseg4ei32_v_u16m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m4x2 (uint32_t *base, vuint32m4_t bindex, vuint32m4x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u32m4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u32m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m4x2_vl31 (uint32_t *base, vuint32m4_t bindex, vuint32m4x2_t v0)
{
  vsuxseg2ei32_v_u32m4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m4x2_m (vbool8_t mask, uint32_t *base, vuint32m4_t bindex, vuint32m4x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u32m4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u32m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u32m4x2_m_vl31 (vbool8_t mask, uint32_t *base, vuint32m4_t bindex, vuint32m4x2_t v0)
{
  vsuxseg2ei32_v_u32m4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u8m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8m2x2 (uint8_t *base, vuint32m8_t bindex, vuint8m2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u8m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u8m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8m2x2_vl31 (uint8_t *base, vuint32m8_t bindex, vuint8m2x2_t v0)
{
  vsuxseg2ei32_v_u8m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u8m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8m2x2_m (vbool4_t mask, uint8_t *base, vuint32m8_t bindex, vuint8m2x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u8m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u8m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u8m2x2_m_vl31 (vbool4_t mask, uint8_t *base, vuint32m8_t bindex, vuint8m2x2_t v0)
{
  vsuxseg2ei32_v_u8m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u8m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8m2x3 (uint8_t *base, vuint32m8_t bindex, vuint8m2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u8m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u8m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8m2x3_vl31 (uint8_t *base, vuint32m8_t bindex, vuint8m2x3_t v0)
{
  vsuxseg3ei32_v_u8m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei32_v_u8m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8m2x3_m (vbool4_t mask, uint8_t *base, vuint32m8_t bindex, vuint8m2x3_t v0, size_t vl)
{
  vsuxseg3ei32_v_u8m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei32_v_u8m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_u8m2x3_m_vl31 (vbool4_t mask, uint8_t *base, vuint32m8_t bindex, vuint8m2x3_t v0)
{
  vsuxseg3ei32_v_u8m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u8m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8m2x4 (uint8_t *base, vuint32m8_t bindex, vuint8m2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u8m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u8m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8m2x4_vl31 (uint8_t *base, vuint32m8_t bindex, vuint8m2x4_t v0)
{
  vsuxseg4ei32_v_u8m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei32_v_u8m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8m2x4_m (vbool4_t mask, uint8_t *base, vuint32m8_t bindex, vuint8m2x4_t v0, size_t vl)
{
  vsuxseg4ei32_v_u8m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei32_v_u8m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_u8m2x4_m_vl31 (vbool4_t mask, uint8_t *base, vuint32m8_t bindex, vuint8m2x4_t v0)
{
  vsuxseg4ei32_v_u8m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u16m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m4x2 (uint16_t *base, vuint32m8_t bindex, vuint16m4x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u16m4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u16m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m4x2_vl31 (uint16_t *base, vuint32m8_t bindex, vuint16m4x2_t v0)
{
  vsuxseg2ei32_v_u16m4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei32_v_u16m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m4x2_m (vbool4_t mask, uint16_t *base, vuint32m8_t bindex, vuint16m4x2_t v0, size_t vl)
{
  vsuxseg2ei32_v_u16m4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei32_v_u16m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_u16m4x2_m_vl31 (vbool4_t mask, uint16_t *base, vuint32m8_t bindex, vuint16m4x2_t v0)
{
  vsuxseg2ei32_v_u16m4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u8mf8x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf8x2 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u8mf8x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u8mf8x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf8x2_vl31 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x2_t v0)
{
  vsuxseg2ei64_v_u8mf8x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u8mf8x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf8x2_m (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u8mf8x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u8mf8x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf8x2_m_vl31 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x2_t v0)
{
  vsuxseg2ei64_v_u8mf8x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u8mf8x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf8x3 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u8mf8x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u8mf8x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf8x3_vl31 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x3_t v0)
{
  vsuxseg3ei64_v_u8mf8x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u8mf8x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf8x3_m (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u8mf8x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u8mf8x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf8x3_m_vl31 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x3_t v0)
{
  vsuxseg3ei64_v_u8mf8x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u8mf8x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf8x4 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u8mf8x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u8mf8x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf8x4_vl31 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x4_t v0)
{
  vsuxseg4ei64_v_u8mf8x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u8mf8x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf8x4_m (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u8mf8x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u8mf8x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf8x4_m_vl31 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x4_t v0)
{
  vsuxseg4ei64_v_u8mf8x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u8mf8x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf8x5 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u8mf8x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u8mf8x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf8x5_vl31 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x5_t v0)
{
  vsuxseg5ei64_v_u8mf8x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u8mf8x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf8x5_m (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u8mf8x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u8mf8x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf8x5_m_vl31 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x5_t v0)
{
  vsuxseg5ei64_v_u8mf8x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u8mf8x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf8x6 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u8mf8x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u8mf8x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf8x6_vl31 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x6_t v0)
{
  vsuxseg6ei64_v_u8mf8x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u8mf8x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf8x6_m (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u8mf8x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u8mf8x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf8x6_m_vl31 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x6_t v0)
{
  vsuxseg6ei64_v_u8mf8x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u8mf8x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf8x7 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u8mf8x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u8mf8x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf8x7_vl31 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x7_t v0)
{
  vsuxseg7ei64_v_u8mf8x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u8mf8x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf8x7_m (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u8mf8x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u8mf8x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf8x7_m_vl31 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x7_t v0)
{
  vsuxseg7ei64_v_u8mf8x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u8mf8x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf8x8 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u8mf8x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u8mf8x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf8x8_vl31 (uint8_t *base, vuint64m1_t bindex, vuint8mf8x8_t v0)
{
  vsuxseg8ei64_v_u8mf8x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u8mf8x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf8x8_m (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u8mf8x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u8mf8x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf8x8_m_vl31 (vbool64_t mask, uint8_t *base, vuint64m1_t bindex, vuint8mf8x8_t v0)
{
  vsuxseg8ei64_v_u8mf8x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u16mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16mf4x2 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u16mf4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u16mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16mf4x2_vl31 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x2_t v0)
{
  vsuxseg2ei64_v_u16mf4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u16mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16mf4x2_m (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u16mf4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u16mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16mf4x2_m_vl31 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x2_t v0)
{
  vsuxseg2ei64_v_u16mf4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u16mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16mf4x3 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u16mf4x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u16mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16mf4x3_vl31 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x3_t v0)
{
  vsuxseg3ei64_v_u16mf4x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u16mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16mf4x3_m (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u16mf4x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u16mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16mf4x3_m_vl31 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x3_t v0)
{
  vsuxseg3ei64_v_u16mf4x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u16mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16mf4x4 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u16mf4x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u16mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16mf4x4_vl31 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x4_t v0)
{
  vsuxseg4ei64_v_u16mf4x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u16mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16mf4x4_m (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u16mf4x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u16mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16mf4x4_m_vl31 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x4_t v0)
{
  vsuxseg4ei64_v_u16mf4x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u16mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16mf4x5 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u16mf4x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u16mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16mf4x5_vl31 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x5_t v0)
{
  vsuxseg5ei64_v_u16mf4x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u16mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16mf4x5_m (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u16mf4x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u16mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16mf4x5_m_vl31 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x5_t v0)
{
  vsuxseg5ei64_v_u16mf4x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u16mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16mf4x6 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u16mf4x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u16mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16mf4x6_vl31 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x6_t v0)
{
  vsuxseg6ei64_v_u16mf4x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u16mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16mf4x6_m (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u16mf4x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u16mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16mf4x6_m_vl31 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x6_t v0)
{
  vsuxseg6ei64_v_u16mf4x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u16mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16mf4x7 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u16mf4x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u16mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16mf4x7_vl31 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x7_t v0)
{
  vsuxseg7ei64_v_u16mf4x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u16mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16mf4x7_m (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u16mf4x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u16mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16mf4x7_m_vl31 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x7_t v0)
{
  vsuxseg7ei64_v_u16mf4x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u16mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16mf4x8 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u16mf4x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u16mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16mf4x8_vl31 (uint16_t *base, vuint64m1_t bindex, vuint16mf4x8_t v0)
{
  vsuxseg8ei64_v_u16mf4x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u16mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16mf4x8_m (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u16mf4x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u16mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16mf4x8_m_vl31 (vbool64_t mask, uint16_t *base, vuint64m1_t bindex, vuint16mf4x8_t v0)
{
  vsuxseg8ei64_v_u16mf4x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u32mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32mf2x2 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u32mf2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u32mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32mf2x2_vl31 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x2_t v0)
{
  vsuxseg2ei64_v_u32mf2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u32mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32mf2x2_m (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u32mf2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u32mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32mf2x2_m_vl31 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x2_t v0)
{
  vsuxseg2ei64_v_u32mf2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u32mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32mf2x3 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u32mf2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u32mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32mf2x3_vl31 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x3_t v0)
{
  vsuxseg3ei64_v_u32mf2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u32mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32mf2x3_m (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u32mf2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u32mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32mf2x3_m_vl31 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x3_t v0)
{
  vsuxseg3ei64_v_u32mf2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u32mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32mf2x4 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u32mf2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u32mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32mf2x4_vl31 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x4_t v0)
{
  vsuxseg4ei64_v_u32mf2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u32mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32mf2x4_m (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u32mf2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u32mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32mf2x4_m_vl31 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x4_t v0)
{
  vsuxseg4ei64_v_u32mf2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u32mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u32mf2x5 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u32mf2x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u32mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u32mf2x5_vl31 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x5_t v0)
{
  vsuxseg5ei64_v_u32mf2x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u32mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u32mf2x5_m (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u32mf2x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u32mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u32mf2x5_m_vl31 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x5_t v0)
{
  vsuxseg5ei64_v_u32mf2x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u32mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u32mf2x6 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u32mf2x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u32mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u32mf2x6_vl31 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x6_t v0)
{
  vsuxseg6ei64_v_u32mf2x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u32mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u32mf2x6_m (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u32mf2x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u32mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u32mf2x6_m_vl31 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x6_t v0)
{
  vsuxseg6ei64_v_u32mf2x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u32mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u32mf2x7 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u32mf2x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u32mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u32mf2x7_vl31 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x7_t v0)
{
  vsuxseg7ei64_v_u32mf2x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u32mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u32mf2x7_m (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u32mf2x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u32mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u32mf2x7_m_vl31 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x7_t v0)
{
  vsuxseg7ei64_v_u32mf2x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u32mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u32mf2x8 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u32mf2x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u32mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u32mf2x8_vl31 (uint32_t *base, vuint64m1_t bindex, vuint32mf2x8_t v0)
{
  vsuxseg8ei64_v_u32mf2x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u32mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u32mf2x8_m (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u32mf2x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u32mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u32mf2x8_m_vl31 (vbool64_t mask, uint32_t *base, vuint64m1_t bindex, vuint32mf2x8_t v0)
{
  vsuxseg8ei64_v_u32mf2x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u64m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m1x2 (uint64_t *base, vuint64m1_t bindex, vuint64m1x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u64m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u64m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m1x2_vl31 (uint64_t *base, vuint64m1_t bindex, vuint64m1x2_t v0)
{
  vsuxseg2ei64_v_u64m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u64m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m1x2_m (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u64m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u64m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m1x2_m_vl31 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x2_t v0)
{
  vsuxseg2ei64_v_u64m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u64m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u64m1x3 (uint64_t *base, vuint64m1_t bindex, vuint64m1x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u64m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u64m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u64m1x3_vl31 (uint64_t *base, vuint64m1_t bindex, vuint64m1x3_t v0)
{
  vsuxseg3ei64_v_u64m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u64m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u64m1x3_m (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u64m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u64m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u64m1x3_m_vl31 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x3_t v0)
{
  vsuxseg3ei64_v_u64m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u64m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u64m1x4 (uint64_t *base, vuint64m1_t bindex, vuint64m1x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u64m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u64m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u64m1x4_vl31 (uint64_t *base, vuint64m1_t bindex, vuint64m1x4_t v0)
{
  vsuxseg4ei64_v_u64m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u64m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u64m1x4_m (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u64m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u64m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u64m1x4_m_vl31 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x4_t v0)
{
  vsuxseg4ei64_v_u64m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u64m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u64m1x5 (uint64_t *base, vuint64m1_t bindex, vuint64m1x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u64m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u64m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u64m1x5_vl31 (uint64_t *base, vuint64m1_t bindex, vuint64m1x5_t v0)
{
  vsuxseg5ei64_v_u64m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u64m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u64m1x5_m (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u64m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u64m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u64m1x5_m_vl31 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x5_t v0)
{
  vsuxseg5ei64_v_u64m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u64m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u64m1x6 (uint64_t *base, vuint64m1_t bindex, vuint64m1x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u64m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u64m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u64m1x6_vl31 (uint64_t *base, vuint64m1_t bindex, vuint64m1x6_t v0)
{
  vsuxseg6ei64_v_u64m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u64m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u64m1x6_m (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u64m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u64m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u64m1x6_m_vl31 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x6_t v0)
{
  vsuxseg6ei64_v_u64m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u64m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u64m1x7 (uint64_t *base, vuint64m1_t bindex, vuint64m1x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u64m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u64m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u64m1x7_vl31 (uint64_t *base, vuint64m1_t bindex, vuint64m1x7_t v0)
{
  vsuxseg7ei64_v_u64m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u64m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u64m1x7_m (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u64m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u64m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u64m1x7_m_vl31 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x7_t v0)
{
  vsuxseg7ei64_v_u64m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u64m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u64m1x8 (uint64_t *base, vuint64m1_t bindex, vuint64m1x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u64m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u64m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u64m1x8_vl31 (uint64_t *base, vuint64m1_t bindex, vuint64m1x8_t v0)
{
  vsuxseg8ei64_v_u64m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u64m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u64m1x8_m (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u64m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u64m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u64m1x8_m_vl31 (vbool64_t mask, uint64_t *base, vuint64m1_t bindex, vuint64m1x8_t v0)
{
  vsuxseg8ei64_v_u64m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u8mf4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf4x2 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u8mf4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u8mf4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf4x2_vl31 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x2_t v0)
{
  vsuxseg2ei64_v_u8mf4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u8mf4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf4x2_m (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u8mf4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u8mf4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf4x2_m_vl31 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x2_t v0)
{
  vsuxseg2ei64_v_u8mf4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u8mf4x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf4x3 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u8mf4x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u8mf4x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf4x3_vl31 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x3_t v0)
{
  vsuxseg3ei64_v_u8mf4x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u8mf4x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf4x3_m (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u8mf4x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u8mf4x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf4x3_m_vl31 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x3_t v0)
{
  vsuxseg3ei64_v_u8mf4x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u8mf4x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf4x4 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u8mf4x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u8mf4x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf4x4_vl31 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x4_t v0)
{
  vsuxseg4ei64_v_u8mf4x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u8mf4x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf4x4_m (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u8mf4x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u8mf4x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf4x4_m_vl31 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x4_t v0)
{
  vsuxseg4ei64_v_u8mf4x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u8mf4x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf4x5 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u8mf4x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u8mf4x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf4x5_vl31 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x5_t v0)
{
  vsuxseg5ei64_v_u8mf4x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u8mf4x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf4x5_m (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u8mf4x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u8mf4x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf4x5_m_vl31 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x5_t v0)
{
  vsuxseg5ei64_v_u8mf4x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u8mf4x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf4x6 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u8mf4x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u8mf4x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf4x6_vl31 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x6_t v0)
{
  vsuxseg6ei64_v_u8mf4x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u8mf4x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf4x6_m (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u8mf4x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u8mf4x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf4x6_m_vl31 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x6_t v0)
{
  vsuxseg6ei64_v_u8mf4x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u8mf4x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf4x7 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u8mf4x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u8mf4x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf4x7_vl31 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x7_t v0)
{
  vsuxseg7ei64_v_u8mf4x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u8mf4x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf4x7_m (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u8mf4x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u8mf4x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf4x7_m_vl31 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x7_t v0)
{
  vsuxseg7ei64_v_u8mf4x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u8mf4x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf4x8 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u8mf4x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u8mf4x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf4x8_vl31 (uint8_t *base, vuint64m2_t bindex, vuint8mf4x8_t v0)
{
  vsuxseg8ei64_v_u8mf4x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u8mf4x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf4x8_m (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u8mf4x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u8mf4x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf4x8_m_vl31 (vbool32_t mask, uint8_t *base, vuint64m2_t bindex, vuint8mf4x8_t v0)
{
  vsuxseg8ei64_v_u8mf4x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u16mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16mf2x2 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u16mf2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u16mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16mf2x2_vl31 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x2_t v0)
{
  vsuxseg2ei64_v_u16mf2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u16mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16mf2x2_m (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u16mf2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u16mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16mf2x2_m_vl31 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x2_t v0)
{
  vsuxseg2ei64_v_u16mf2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u16mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16mf2x3 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u16mf2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u16mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16mf2x3_vl31 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x3_t v0)
{
  vsuxseg3ei64_v_u16mf2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u16mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16mf2x3_m (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u16mf2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u16mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16mf2x3_m_vl31 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x3_t v0)
{
  vsuxseg3ei64_v_u16mf2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u16mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16mf2x4 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u16mf2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u16mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16mf2x4_vl31 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x4_t v0)
{
  vsuxseg4ei64_v_u16mf2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u16mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16mf2x4_m (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u16mf2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u16mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16mf2x4_m_vl31 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x4_t v0)
{
  vsuxseg4ei64_v_u16mf2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u16mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16mf2x5 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u16mf2x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u16mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16mf2x5_vl31 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x5_t v0)
{
  vsuxseg5ei64_v_u16mf2x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u16mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16mf2x5_m (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u16mf2x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u16mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16mf2x5_m_vl31 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x5_t v0)
{
  vsuxseg5ei64_v_u16mf2x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u16mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16mf2x6 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u16mf2x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u16mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16mf2x6_vl31 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x6_t v0)
{
  vsuxseg6ei64_v_u16mf2x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u16mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16mf2x6_m (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u16mf2x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u16mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16mf2x6_m_vl31 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x6_t v0)
{
  vsuxseg6ei64_v_u16mf2x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u16mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16mf2x7 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u16mf2x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u16mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16mf2x7_vl31 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x7_t v0)
{
  vsuxseg7ei64_v_u16mf2x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u16mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16mf2x7_m (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u16mf2x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u16mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16mf2x7_m_vl31 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x7_t v0)
{
  vsuxseg7ei64_v_u16mf2x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u16mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16mf2x8 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u16mf2x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u16mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16mf2x8_vl31 (uint16_t *base, vuint64m2_t bindex, vuint16mf2x8_t v0)
{
  vsuxseg8ei64_v_u16mf2x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u16mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16mf2x8_m (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u16mf2x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u16mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16mf2x8_m_vl31 (vbool32_t mask, uint16_t *base, vuint64m2_t bindex, vuint16mf2x8_t v0)
{
  vsuxseg8ei64_v_u16mf2x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u32m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m1x2 (uint32_t *base, vuint64m2_t bindex, vuint32m1x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u32m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u32m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m1x2_vl31 (uint32_t *base, vuint64m2_t bindex, vuint32m1x2_t v0)
{
  vsuxseg2ei64_v_u32m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u32m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m1x2_m (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u32m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u32m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m1x2_m_vl31 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x2_t v0)
{
  vsuxseg2ei64_v_u32m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u32m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32m1x3 (uint32_t *base, vuint64m2_t bindex, vuint32m1x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u32m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u32m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32m1x3_vl31 (uint32_t *base, vuint64m2_t bindex, vuint32m1x3_t v0)
{
  vsuxseg3ei64_v_u32m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u32m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32m1x3_m (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u32m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u32m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32m1x3_m_vl31 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x3_t v0)
{
  vsuxseg3ei64_v_u32m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u32m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32m1x4 (uint32_t *base, vuint64m2_t bindex, vuint32m1x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u32m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u32m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32m1x4_vl31 (uint32_t *base, vuint64m2_t bindex, vuint32m1x4_t v0)
{
  vsuxseg4ei64_v_u32m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u32m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32m1x4_m (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u32m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u32m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32m1x4_m_vl31 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x4_t v0)
{
  vsuxseg4ei64_v_u32m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u32m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u32m1x5 (uint32_t *base, vuint64m2_t bindex, vuint32m1x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u32m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u32m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u32m1x5_vl31 (uint32_t *base, vuint64m2_t bindex, vuint32m1x5_t v0)
{
  vsuxseg5ei64_v_u32m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u32m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u32m1x5_m (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u32m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u32m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u32m1x5_m_vl31 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x5_t v0)
{
  vsuxseg5ei64_v_u32m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u32m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u32m1x6 (uint32_t *base, vuint64m2_t bindex, vuint32m1x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u32m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u32m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u32m1x6_vl31 (uint32_t *base, vuint64m2_t bindex, vuint32m1x6_t v0)
{
  vsuxseg6ei64_v_u32m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u32m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u32m1x6_m (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u32m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u32m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u32m1x6_m_vl31 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x6_t v0)
{
  vsuxseg6ei64_v_u32m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u32m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u32m1x7 (uint32_t *base, vuint64m2_t bindex, vuint32m1x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u32m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u32m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u32m1x7_vl31 (uint32_t *base, vuint64m2_t bindex, vuint32m1x7_t v0)
{
  vsuxseg7ei64_v_u32m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u32m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u32m1x7_m (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u32m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u32m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u32m1x7_m_vl31 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x7_t v0)
{
  vsuxseg7ei64_v_u32m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u32m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u32m1x8 (uint32_t *base, vuint64m2_t bindex, vuint32m1x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u32m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u32m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u32m1x8_vl31 (uint32_t *base, vuint64m2_t bindex, vuint32m1x8_t v0)
{
  vsuxseg8ei64_v_u32m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u32m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u32m1x8_m (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u32m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u32m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u32m1x8_m_vl31 (vbool32_t mask, uint32_t *base, vuint64m2_t bindex, vuint32m1x8_t v0)
{
  vsuxseg8ei64_v_u32m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u64m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m2x2 (uint64_t *base, vuint64m2_t bindex, vuint64m2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u64m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u64m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m2x2_vl31 (uint64_t *base, vuint64m2_t bindex, vuint64m2x2_t v0)
{
  vsuxseg2ei64_v_u64m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u64m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m2x2_m (vbool32_t mask, uint64_t *base, vuint64m2_t bindex, vuint64m2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u64m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u64m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m2x2_m_vl31 (vbool32_t mask, uint64_t *base, vuint64m2_t bindex, vuint64m2x2_t v0)
{
  vsuxseg2ei64_v_u64m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u64m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u64m2x3 (uint64_t *base, vuint64m2_t bindex, vuint64m2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u64m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u64m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u64m2x3_vl31 (uint64_t *base, vuint64m2_t bindex, vuint64m2x3_t v0)
{
  vsuxseg3ei64_v_u64m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u64m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u64m2x3_m (vbool32_t mask, uint64_t *base, vuint64m2_t bindex, vuint64m2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u64m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u64m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u64m2x3_m_vl31 (vbool32_t mask, uint64_t *base, vuint64m2_t bindex, vuint64m2x3_t v0)
{
  vsuxseg3ei64_v_u64m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u64m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u64m2x4 (uint64_t *base, vuint64m2_t bindex, vuint64m2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u64m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u64m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u64m2x4_vl31 (uint64_t *base, vuint64m2_t bindex, vuint64m2x4_t v0)
{
  vsuxseg4ei64_v_u64m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u64m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u64m2x4_m (vbool32_t mask, uint64_t *base, vuint64m2_t bindex, vuint64m2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u64m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u64m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u64m2x4_m_vl31 (vbool32_t mask, uint64_t *base, vuint64m2_t bindex, vuint64m2x4_t v0)
{
  vsuxseg4ei64_v_u64m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u8mf2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf2x2 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u8mf2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u8mf2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf2x2_vl31 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x2_t v0)
{
  vsuxseg2ei64_v_u8mf2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u8mf2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf2x2_m (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u8mf2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u8mf2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8mf2x2_m_vl31 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x2_t v0)
{
  vsuxseg2ei64_v_u8mf2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u8mf2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf2x3 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u8mf2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u8mf2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf2x3_vl31 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x3_t v0)
{
  vsuxseg3ei64_v_u8mf2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u8mf2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf2x3_m (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u8mf2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u8mf2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8mf2x3_m_vl31 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x3_t v0)
{
  vsuxseg3ei64_v_u8mf2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u8mf2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf2x4 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u8mf2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u8mf2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf2x4_vl31 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x4_t v0)
{
  vsuxseg4ei64_v_u8mf2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u8mf2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf2x4_m (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u8mf2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u8mf2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8mf2x4_m_vl31 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x4_t v0)
{
  vsuxseg4ei64_v_u8mf2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u8mf2x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf2x5 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u8mf2x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u8mf2x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf2x5_vl31 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x5_t v0)
{
  vsuxseg5ei64_v_u8mf2x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u8mf2x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf2x5_m (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u8mf2x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u8mf2x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8mf2x5_m_vl31 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x5_t v0)
{
  vsuxseg5ei64_v_u8mf2x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u8mf2x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf2x6 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u8mf2x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u8mf2x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf2x6_vl31 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x6_t v0)
{
  vsuxseg6ei64_v_u8mf2x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u8mf2x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf2x6_m (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u8mf2x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u8mf2x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8mf2x6_m_vl31 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x6_t v0)
{
  vsuxseg6ei64_v_u8mf2x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u8mf2x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf2x7 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u8mf2x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u8mf2x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf2x7_vl31 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x7_t v0)
{
  vsuxseg7ei64_v_u8mf2x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u8mf2x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf2x7_m (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u8mf2x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u8mf2x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8mf2x7_m_vl31 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x7_t v0)
{
  vsuxseg7ei64_v_u8mf2x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u8mf2x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf2x8 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u8mf2x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u8mf2x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf2x8_vl31 (uint8_t *base, vuint64m4_t bindex, vuint8mf2x8_t v0)
{
  vsuxseg8ei64_v_u8mf2x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u8mf2x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf2x8_m (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u8mf2x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u8mf2x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8mf2x8_m_vl31 (vbool16_t mask, uint8_t *base, vuint64m4_t bindex, vuint8mf2x8_t v0)
{
  vsuxseg8ei64_v_u8mf2x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u16m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16m1x2 (uint16_t *base, vuint64m4_t bindex, vuint16m1x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u16m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u16m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16m1x2_vl31 (uint16_t *base, vuint64m4_t bindex, vuint16m1x2_t v0)
{
  vsuxseg2ei64_v_u16m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u16m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16m1x2_m (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u16m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u16m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16m1x2_m_vl31 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x2_t v0)
{
  vsuxseg2ei64_v_u16m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u16m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16m1x3 (uint16_t *base, vuint64m4_t bindex, vuint16m1x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u16m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u16m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16m1x3_vl31 (uint16_t *base, vuint64m4_t bindex, vuint16m1x3_t v0)
{
  vsuxseg3ei64_v_u16m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u16m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16m1x3_m (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u16m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u16m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16m1x3_m_vl31 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x3_t v0)
{
  vsuxseg3ei64_v_u16m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u16m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16m1x4 (uint16_t *base, vuint64m4_t bindex, vuint16m1x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u16m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u16m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16m1x4_vl31 (uint16_t *base, vuint64m4_t bindex, vuint16m1x4_t v0)
{
  vsuxseg4ei64_v_u16m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u16m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16m1x4_m (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u16m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u16m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16m1x4_m_vl31 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x4_t v0)
{
  vsuxseg4ei64_v_u16m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u16m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16m1x5 (uint16_t *base, vuint64m4_t bindex, vuint16m1x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u16m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u16m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16m1x5_vl31 (uint16_t *base, vuint64m4_t bindex, vuint16m1x5_t v0)
{
  vsuxseg5ei64_v_u16m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u16m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16m1x5_m (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u16m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u16m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u16m1x5_m_vl31 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x5_t v0)
{
  vsuxseg5ei64_v_u16m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u16m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16m1x6 (uint16_t *base, vuint64m4_t bindex, vuint16m1x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u16m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u16m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16m1x6_vl31 (uint16_t *base, vuint64m4_t bindex, vuint16m1x6_t v0)
{
  vsuxseg6ei64_v_u16m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u16m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16m1x6_m (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u16m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u16m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u16m1x6_m_vl31 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x6_t v0)
{
  vsuxseg6ei64_v_u16m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u16m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16m1x7 (uint16_t *base, vuint64m4_t bindex, vuint16m1x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u16m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u16m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16m1x7_vl31 (uint16_t *base, vuint64m4_t bindex, vuint16m1x7_t v0)
{
  vsuxseg7ei64_v_u16m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u16m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16m1x7_m (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u16m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u16m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u16m1x7_m_vl31 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x7_t v0)
{
  vsuxseg7ei64_v_u16m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u16m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16m1x8 (uint16_t *base, vuint64m4_t bindex, vuint16m1x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u16m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u16m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16m1x8_vl31 (uint16_t *base, vuint64m4_t bindex, vuint16m1x8_t v0)
{
  vsuxseg8ei64_v_u16m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u16m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16m1x8_m (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u16m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u16m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u16m1x8_m_vl31 (vbool16_t mask, uint16_t *base, vuint64m4_t bindex, vuint16m1x8_t v0)
{
  vsuxseg8ei64_v_u16m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u32m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m2x2 (uint32_t *base, vuint64m4_t bindex, vuint32m2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u32m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u32m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m2x2_vl31 (uint32_t *base, vuint64m4_t bindex, vuint32m2x2_t v0)
{
  vsuxseg2ei64_v_u32m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u32m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m2x2_m (vbool16_t mask, uint32_t *base, vuint64m4_t bindex, vuint32m2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u32m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u32m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m2x2_m_vl31 (vbool16_t mask, uint32_t *base, vuint64m4_t bindex, vuint32m2x2_t v0)
{
  vsuxseg2ei64_v_u32m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u32m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32m2x3 (uint32_t *base, vuint64m4_t bindex, vuint32m2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u32m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u32m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32m2x3_vl31 (uint32_t *base, vuint64m4_t bindex, vuint32m2x3_t v0)
{
  vsuxseg3ei64_v_u32m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u32m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32m2x3_m (vbool16_t mask, uint32_t *base, vuint64m4_t bindex, vuint32m2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u32m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u32m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u32m2x3_m_vl31 (vbool16_t mask, uint32_t *base, vuint64m4_t bindex, vuint32m2x3_t v0)
{
  vsuxseg3ei64_v_u32m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u32m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32m2x4 (uint32_t *base, vuint64m4_t bindex, vuint32m2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u32m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u32m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32m2x4_vl31 (uint32_t *base, vuint64m4_t bindex, vuint32m2x4_t v0)
{
  vsuxseg4ei64_v_u32m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u32m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32m2x4_m (vbool16_t mask, uint32_t *base, vuint64m4_t bindex, vuint32m2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u32m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u32m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u32m2x4_m_vl31 (vbool16_t mask, uint32_t *base, vuint64m4_t bindex, vuint32m2x4_t v0)
{
  vsuxseg4ei64_v_u32m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u64m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m4x2 (uint64_t *base, vuint64m4_t bindex, vuint64m4x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u64m4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u64m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m4x2_vl31 (uint64_t *base, vuint64m4_t bindex, vuint64m4x2_t v0)
{
  vsuxseg2ei64_v_u64m4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u64m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m4x2_m (vbool16_t mask, uint64_t *base, vuint64m4_t bindex, vuint64m4x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u64m4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u64m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u64m4x2_m_vl31 (vbool16_t mask, uint64_t *base, vuint64m4_t bindex, vuint64m4x2_t v0)
{
  vsuxseg2ei64_v_u64m4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u8m1x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8m1x2 (uint8_t *base, vuint64m8_t bindex, vuint8m1x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u8m1x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u8m1x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8m1x2_vl31 (uint8_t *base, vuint64m8_t bindex, vuint8m1x2_t v0)
{
  vsuxseg2ei64_v_u8m1x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u8m1x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8m1x2_m (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u8m1x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u8m1x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u8m1x2_m_vl31 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x2_t v0)
{
  vsuxseg2ei64_v_u8m1x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u8m1x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8m1x3 (uint8_t *base, vuint64m8_t bindex, vuint8m1x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u8m1x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u8m1x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8m1x3_vl31 (uint8_t *base, vuint64m8_t bindex, vuint8m1x3_t v0)
{
  vsuxseg3ei64_v_u8m1x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u8m1x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8m1x3_m (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u8m1x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u8m1x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u8m1x3_m_vl31 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x3_t v0)
{
  vsuxseg3ei64_v_u8m1x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u8m1x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8m1x4 (uint8_t *base, vuint64m8_t bindex, vuint8m1x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u8m1x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u8m1x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8m1x4_vl31 (uint8_t *base, vuint64m8_t bindex, vuint8m1x4_t v0)
{
  vsuxseg4ei64_v_u8m1x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u8m1x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8m1x4_m (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u8m1x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u8m1x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u8m1x4_m_vl31 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x4_t v0)
{
  vsuxseg4ei64_v_u8m1x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u8m1x5:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8m1x5 (uint8_t *base, vuint64m8_t bindex, vuint8m1x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u8m1x5 (base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u8m1x5_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8m1x5_vl31 (uint8_t *base, vuint64m8_t bindex, vuint8m1x5_t v0)
{
  vsuxseg5ei64_v_u8m1x5 (base, bindex, v0, 31);
}

/*
** test_vsuxseg5ei64_v_u8m1x5_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8m1x5_m (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x5_t v0, size_t vl)
{
  vsuxseg5ei64_v_u8m1x5_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg5ei64_v_u8m1x5_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_u8m1x5_m_vl31 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x5_t v0)
{
  vsuxseg5ei64_v_u8m1x5_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u8m1x6:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8m1x6 (uint8_t *base, vuint64m8_t bindex, vuint8m1x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u8m1x6 (base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u8m1x6_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8m1x6_vl31 (uint8_t *base, vuint64m8_t bindex, vuint8m1x6_t v0)
{
  vsuxseg6ei64_v_u8m1x6 (base, bindex, v0, 31);
}

/*
** test_vsuxseg6ei64_v_u8m1x6_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8m1x6_m (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x6_t v0, size_t vl)
{
  vsuxseg6ei64_v_u8m1x6_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg6ei64_v_u8m1x6_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_u8m1x6_m_vl31 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x6_t v0)
{
  vsuxseg6ei64_v_u8m1x6_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u8m1x7:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8m1x7 (uint8_t *base, vuint64m8_t bindex, vuint8m1x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u8m1x7 (base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u8m1x7_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8m1x7_vl31 (uint8_t *base, vuint64m8_t bindex, vuint8m1x7_t v0)
{
  vsuxseg7ei64_v_u8m1x7 (base, bindex, v0, 31);
}

/*
** test_vsuxseg7ei64_v_u8m1x7_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8m1x7_m (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x7_t v0, size_t vl)
{
  vsuxseg7ei64_v_u8m1x7_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg7ei64_v_u8m1x7_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_u8m1x7_m_vl31 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x7_t v0)
{
  vsuxseg7ei64_v_u8m1x7_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u8m1x8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8m1x8 (uint8_t *base, vuint64m8_t bindex, vuint8m1x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u8m1x8 (base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u8m1x8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8m1x8_vl31 (uint8_t *base, vuint64m8_t bindex, vuint8m1x8_t v0)
{
  vsuxseg8ei64_v_u8m1x8 (base, bindex, v0, 31);
}

/*
** test_vsuxseg8ei64_v_u8m1x8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8m1x8_m (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x8_t v0, size_t vl)
{
  vsuxseg8ei64_v_u8m1x8_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg8ei64_v_u8m1x8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_u8m1x8_m_vl31 (vbool8_t mask, uint8_t *base, vuint64m8_t bindex, vuint8m1x8_t v0)
{
  vsuxseg8ei64_v_u8m1x8_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u16m2x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16m2x2 (uint16_t *base, vuint64m8_t bindex, vuint16m2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u16m2x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u16m2x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16m2x2_vl31 (uint16_t *base, vuint64m8_t bindex, vuint16m2x2_t v0)
{
  vsuxseg2ei64_v_u16m2x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u16m2x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16m2x2_m (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u16m2x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u16m2x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u16m2x2_m_vl31 (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2x2_t v0)
{
  vsuxseg2ei64_v_u16m2x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u16m2x3:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16m2x3 (uint16_t *base, vuint64m8_t bindex, vuint16m2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u16m2x3 (base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u16m2x3_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16m2x3_vl31 (uint16_t *base, vuint64m8_t bindex, vuint16m2x3_t v0)
{
  vsuxseg3ei64_v_u16m2x3 (base, bindex, v0, 31);
}

/*
** test_vsuxseg3ei64_v_u16m2x3_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16m2x3_m (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2x3_t v0, size_t vl)
{
  vsuxseg3ei64_v_u16m2x3_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg3ei64_v_u16m2x3_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_u16m2x3_m_vl31 (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2x3_t v0)
{
  vsuxseg3ei64_v_u16m2x3_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u16m2x4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16m2x4 (uint16_t *base, vuint64m8_t bindex, vuint16m2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u16m2x4 (base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u16m2x4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16m2x4_vl31 (uint16_t *base, vuint64m8_t bindex, vuint16m2x4_t v0)
{
  vsuxseg4ei64_v_u16m2x4 (base, bindex, v0, 31);
}

/*
** test_vsuxseg4ei64_v_u16m2x4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16m2x4_m (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2x4_t v0, size_t vl)
{
  vsuxseg4ei64_v_u16m2x4_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg4ei64_v_u16m2x4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_u16m2x4_m_vl31 (vbool8_t mask, uint16_t *base, vuint64m8_t bindex, vuint16m2x4_t v0)
{
  vsuxseg4ei64_v_u16m2x4_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u32m4x2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m4x2 (uint32_t *base, vuint64m8_t bindex, vuint32m4x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u32m4x2 (base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u32m4x2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m4x2_vl31 (uint32_t *base, vuint64m8_t bindex, vuint32m4x2_t v0)
{
  vsuxseg2ei64_v_u32m4x2 (base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei64_v_u32m4x2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m4x2_m (vbool8_t mask, uint32_t *base, vuint64m8_t bindex, vuint32m4x2_t v0, size_t vl)
{
  vsuxseg2ei64_v_u32m4x2_m (mask, base, bindex, v0, vl);
}

/*
** test_vsuxseg2ei64_v_u32m4x2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_u32m4x2_m_vl31 (vbool8_t mask, uint32_t *base, vuint64m8_t bindex, vuint32m4x2_t v0)
{
  vsuxseg2ei64_v_u32m4x2_m (mask, base, bindex, v0, 31);
}

/*
** test_vsuxseg2ei8_v_f16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f16mf4x2_vl32 (float16_t *base, vuint8mf8_t bindex, vfloat16mf4x2_t v0)
{
  vsuxseg2ei8_v_f16mf4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f16mf4x2_m_vl32 (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4x2_t v0)
{
  vsuxseg2ei8_v_f16mf4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f16mf4x3_vl32 (float16_t *base, vuint8mf8_t bindex, vfloat16mf4x3_t v0)
{
  vsuxseg3ei8_v_f16mf4x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f16mf4x3_m_vl32 (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4x3_t v0)
{
  vsuxseg3ei8_v_f16mf4x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f16mf4x4_vl32 (float16_t *base, vuint8mf8_t bindex, vfloat16mf4x4_t v0)
{
  vsuxseg4ei8_v_f16mf4x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f16mf4x4_m_vl32 (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4x4_t v0)
{
  vsuxseg4ei8_v_f16mf4x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f16mf4x5_vl32 (float16_t *base, vuint8mf8_t bindex, vfloat16mf4x5_t v0)
{
  vsuxseg5ei8_v_f16mf4x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f16mf4x5_m_vl32 (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4x5_t v0)
{
  vsuxseg5ei8_v_f16mf4x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f16mf4x6_vl32 (float16_t *base, vuint8mf8_t bindex, vfloat16mf4x6_t v0)
{
  vsuxseg6ei8_v_f16mf4x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f16mf4x6_m_vl32 (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4x6_t v0)
{
  vsuxseg6ei8_v_f16mf4x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f16mf4x7_vl32 (float16_t *base, vuint8mf8_t bindex, vfloat16mf4x7_t v0)
{
  vsuxseg7ei8_v_f16mf4x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f16mf4x7_m_vl32 (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4x7_t v0)
{
  vsuxseg7ei8_v_f16mf4x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f16mf4x8_vl32 (float16_t *base, vuint8mf8_t bindex, vfloat16mf4x8_t v0)
{
  vsuxseg8ei8_v_f16mf4x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f16mf4x8_m_vl32 (vbool64_t mask, float16_t *base, vuint8mf8_t bindex, vfloat16mf4x8_t v0)
{
  vsuxseg8ei8_v_f16mf4x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f32mf2x2_vl32 (float32_t *base, vuint8mf8_t bindex, vfloat32mf2x2_t v0)
{
  vsuxseg2ei8_v_f32mf2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f32mf2x2_m_vl32 (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2x2_t v0)
{
  vsuxseg2ei8_v_f32mf2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f32mf2x3_vl32 (float32_t *base, vuint8mf8_t bindex, vfloat32mf2x3_t v0)
{
  vsuxseg3ei8_v_f32mf2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f32mf2x3_m_vl32 (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2x3_t v0)
{
  vsuxseg3ei8_v_f32mf2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f32mf2x4_vl32 (float32_t *base, vuint8mf8_t bindex, vfloat32mf2x4_t v0)
{
  vsuxseg4ei8_v_f32mf2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f32mf2x4_m_vl32 (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2x4_t v0)
{
  vsuxseg4ei8_v_f32mf2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f32mf2x5_vl32 (float32_t *base, vuint8mf8_t bindex, vfloat32mf2x5_t v0)
{
  vsuxseg5ei8_v_f32mf2x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f32mf2x5_m_vl32 (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2x5_t v0)
{
  vsuxseg5ei8_v_f32mf2x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f32mf2x6_vl32 (float32_t *base, vuint8mf8_t bindex, vfloat32mf2x6_t v0)
{
  vsuxseg6ei8_v_f32mf2x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f32mf2x6_m_vl32 (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2x6_t v0)
{
  vsuxseg6ei8_v_f32mf2x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f32mf2x7_vl32 (float32_t *base, vuint8mf8_t bindex, vfloat32mf2x7_t v0)
{
  vsuxseg7ei8_v_f32mf2x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f32mf2x7_m_vl32 (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2x7_t v0)
{
  vsuxseg7ei8_v_f32mf2x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f32mf2x8_vl32 (float32_t *base, vuint8mf8_t bindex, vfloat32mf2x8_t v0)
{
  vsuxseg8ei8_v_f32mf2x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f32mf2x8_m_vl32 (vbool64_t mask, float32_t *base, vuint8mf8_t bindex, vfloat32mf2x8_t v0)
{
  vsuxseg8ei8_v_f32mf2x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f64m1x2_vl32 (float64_t *base, vuint8mf8_t bindex, vfloat64m1x2_t v0)
{
  vsuxseg2ei8_v_f64m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f64m1x2_m_vl32 (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1x2_t v0)
{
  vsuxseg2ei8_v_f64m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f64m1x3_vl32 (float64_t *base, vuint8mf8_t bindex, vfloat64m1x3_t v0)
{
  vsuxseg3ei8_v_f64m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f64m1x3_m_vl32 (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1x3_t v0)
{
  vsuxseg3ei8_v_f64m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f64m1x4_vl32 (float64_t *base, vuint8mf8_t bindex, vfloat64m1x4_t v0)
{
  vsuxseg4ei8_v_f64m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f64m1x4_m_vl32 (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1x4_t v0)
{
  vsuxseg4ei8_v_f64m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f64m1x5_vl32 (float64_t *base, vuint8mf8_t bindex, vfloat64m1x5_t v0)
{
  vsuxseg5ei8_v_f64m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f64m1x5_m_vl32 (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1x5_t v0)
{
  vsuxseg5ei8_v_f64m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f64m1x6_vl32 (float64_t *base, vuint8mf8_t bindex, vfloat64m1x6_t v0)
{
  vsuxseg6ei8_v_f64m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f64m1x6_m_vl32 (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1x6_t v0)
{
  vsuxseg6ei8_v_f64m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f64m1x7_vl32 (float64_t *base, vuint8mf8_t bindex, vfloat64m1x7_t v0)
{
  vsuxseg7ei8_v_f64m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f64m1x7_m_vl32 (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1x7_t v0)
{
  vsuxseg7ei8_v_f64m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f64m1x8_vl32 (float64_t *base, vuint8mf8_t bindex, vfloat64m1x8_t v0)
{
  vsuxseg8ei8_v_f64m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f64m1x8_m_vl32 (vbool64_t mask, float64_t *base, vuint8mf8_t bindex, vfloat64m1x8_t v0)
{
  vsuxseg8ei8_v_f64m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f16mf2x2_vl32 (float16_t *base, vuint8mf4_t bindex, vfloat16mf2x2_t v0)
{
  vsuxseg2ei8_v_f16mf2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f16mf2x2_m_vl32 (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2x2_t v0)
{
  vsuxseg2ei8_v_f16mf2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f16mf2x3_vl32 (float16_t *base, vuint8mf4_t bindex, vfloat16mf2x3_t v0)
{
  vsuxseg3ei8_v_f16mf2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f16mf2x3_m_vl32 (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2x3_t v0)
{
  vsuxseg3ei8_v_f16mf2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f16mf2x4_vl32 (float16_t *base, vuint8mf4_t bindex, vfloat16mf2x4_t v0)
{
  vsuxseg4ei8_v_f16mf2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f16mf2x4_m_vl32 (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2x4_t v0)
{
  vsuxseg4ei8_v_f16mf2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f16mf2x5_vl32 (float16_t *base, vuint8mf4_t bindex, vfloat16mf2x5_t v0)
{
  vsuxseg5ei8_v_f16mf2x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f16mf2x5_m_vl32 (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2x5_t v0)
{
  vsuxseg5ei8_v_f16mf2x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f16mf2x6_vl32 (float16_t *base, vuint8mf4_t bindex, vfloat16mf2x6_t v0)
{
  vsuxseg6ei8_v_f16mf2x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f16mf2x6_m_vl32 (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2x6_t v0)
{
  vsuxseg6ei8_v_f16mf2x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f16mf2x7_vl32 (float16_t *base, vuint8mf4_t bindex, vfloat16mf2x7_t v0)
{
  vsuxseg7ei8_v_f16mf2x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f16mf2x7_m_vl32 (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2x7_t v0)
{
  vsuxseg7ei8_v_f16mf2x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f16mf2x8_vl32 (float16_t *base, vuint8mf4_t bindex, vfloat16mf2x8_t v0)
{
  vsuxseg8ei8_v_f16mf2x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f16mf2x8_m_vl32 (vbool32_t mask, float16_t *base, vuint8mf4_t bindex, vfloat16mf2x8_t v0)
{
  vsuxseg8ei8_v_f16mf2x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f32m1x2_vl32 (float32_t *base, vuint8mf4_t bindex, vfloat32m1x2_t v0)
{
  vsuxseg2ei8_v_f32m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f32m1x2_m_vl32 (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1x2_t v0)
{
  vsuxseg2ei8_v_f32m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f32m1x3_vl32 (float32_t *base, vuint8mf4_t bindex, vfloat32m1x3_t v0)
{
  vsuxseg3ei8_v_f32m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f32m1x3_m_vl32 (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1x3_t v0)
{
  vsuxseg3ei8_v_f32m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f32m1x4_vl32 (float32_t *base, vuint8mf4_t bindex, vfloat32m1x4_t v0)
{
  vsuxseg4ei8_v_f32m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f32m1x4_m_vl32 (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1x4_t v0)
{
  vsuxseg4ei8_v_f32m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f32m1x5_vl32 (float32_t *base, vuint8mf4_t bindex, vfloat32m1x5_t v0)
{
  vsuxseg5ei8_v_f32m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f32m1x5_m_vl32 (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1x5_t v0)
{
  vsuxseg5ei8_v_f32m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f32m1x6_vl32 (float32_t *base, vuint8mf4_t bindex, vfloat32m1x6_t v0)
{
  vsuxseg6ei8_v_f32m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f32m1x6_m_vl32 (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1x6_t v0)
{
  vsuxseg6ei8_v_f32m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f32m1x7_vl32 (float32_t *base, vuint8mf4_t bindex, vfloat32m1x7_t v0)
{
  vsuxseg7ei8_v_f32m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f32m1x7_m_vl32 (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1x7_t v0)
{
  vsuxseg7ei8_v_f32m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f32m1x8_vl32 (float32_t *base, vuint8mf4_t bindex, vfloat32m1x8_t v0)
{
  vsuxseg8ei8_v_f32m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f32m1x8_m_vl32 (vbool32_t mask, float32_t *base, vuint8mf4_t bindex, vfloat32m1x8_t v0)
{
  vsuxseg8ei8_v_f32m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f64m2x2_vl32 (float64_t *base, vuint8mf4_t bindex, vfloat64m2x2_t v0)
{
  vsuxseg2ei8_v_f64m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f64m2x2_m_vl32 (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2x2_t v0)
{
  vsuxseg2ei8_v_f64m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f64m2x3_vl32 (float64_t *base, vuint8mf4_t bindex, vfloat64m2x3_t v0)
{
  vsuxseg3ei8_v_f64m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f64m2x3_m_vl32 (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2x3_t v0)
{
  vsuxseg3ei8_v_f64m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f64m2x4_vl32 (float64_t *base, vuint8mf4_t bindex, vfloat64m2x4_t v0)
{
  vsuxseg4ei8_v_f64m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f64m2x4_m_vl32 (vbool32_t mask, float64_t *base, vuint8mf4_t bindex, vfloat64m2x4_t v0)
{
  vsuxseg4ei8_v_f64m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f16m1x2_vl32 (float16_t *base, vuint8mf2_t bindex, vfloat16m1x2_t v0)
{
  vsuxseg2ei8_v_f16m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f16m1x2_m_vl32 (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1x2_t v0)
{
  vsuxseg2ei8_v_f16m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f16m1x3_vl32 (float16_t *base, vuint8mf2_t bindex, vfloat16m1x3_t v0)
{
  vsuxseg3ei8_v_f16m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f16m1x3_m_vl32 (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1x3_t v0)
{
  vsuxseg3ei8_v_f16m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f16m1x4_vl32 (float16_t *base, vuint8mf2_t bindex, vfloat16m1x4_t v0)
{
  vsuxseg4ei8_v_f16m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f16m1x4_m_vl32 (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1x4_t v0)
{
  vsuxseg4ei8_v_f16m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f16m1x5_vl32 (float16_t *base, vuint8mf2_t bindex, vfloat16m1x5_t v0)
{
  vsuxseg5ei8_v_f16m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei8_v_f16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei8_v_f16m1x5_m_vl32 (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1x5_t v0)
{
  vsuxseg5ei8_v_f16m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f16m1x6_vl32 (float16_t *base, vuint8mf2_t bindex, vfloat16m1x6_t v0)
{
  vsuxseg6ei8_v_f16m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei8_v_f16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei8_v_f16m1x6_m_vl32 (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1x6_t v0)
{
  vsuxseg6ei8_v_f16m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f16m1x7_vl32 (float16_t *base, vuint8mf2_t bindex, vfloat16m1x7_t v0)
{
  vsuxseg7ei8_v_f16m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei8_v_f16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei8_v_f16m1x7_m_vl32 (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1x7_t v0)
{
  vsuxseg7ei8_v_f16m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f16m1x8_vl32 (float16_t *base, vuint8mf2_t bindex, vfloat16m1x8_t v0)
{
  vsuxseg8ei8_v_f16m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei8_v_f16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei8_v_f16m1x8_m_vl32 (vbool16_t mask, float16_t *base, vuint8mf2_t bindex, vfloat16m1x8_t v0)
{
  vsuxseg8ei8_v_f16m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f32m2x2_vl32 (float32_t *base, vuint8mf2_t bindex, vfloat32m2x2_t v0)
{
  vsuxseg2ei8_v_f32m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f32m2x2_m_vl32 (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2x2_t v0)
{
  vsuxseg2ei8_v_f32m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f32m2x3_vl32 (float32_t *base, vuint8mf2_t bindex, vfloat32m2x3_t v0)
{
  vsuxseg3ei8_v_f32m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f32m2x3_m_vl32 (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2x3_t v0)
{
  vsuxseg3ei8_v_f32m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f32m2x4_vl32 (float32_t *base, vuint8mf2_t bindex, vfloat32m2x4_t v0)
{
  vsuxseg4ei8_v_f32m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f32m2x4_m_vl32 (vbool16_t mask, float32_t *base, vuint8mf2_t bindex, vfloat32m2x4_t v0)
{
  vsuxseg4ei8_v_f32m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f64m4x2_vl32 (float64_t *base, vuint8mf2_t bindex, vfloat64m4x2_t v0)
{
  vsuxseg2ei8_v_f64m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f64m4x2_m_vl32 (vbool16_t mask, float64_t *base, vuint8mf2_t bindex, vfloat64m4x2_t v0)
{
  vsuxseg2ei8_v_f64m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f16m2x2_vl32 (float16_t *base, vuint8m1_t bindex, vfloat16m2x2_t v0)
{
  vsuxseg2ei8_v_f16m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f16m2x2_m_vl32 (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2x2_t v0)
{
  vsuxseg2ei8_v_f16m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f16m2x3_vl32 (float16_t *base, vuint8m1_t bindex, vfloat16m2x3_t v0)
{
  vsuxseg3ei8_v_f16m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_f16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_f16m2x3_m_vl32 (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2x3_t v0)
{
  vsuxseg3ei8_v_f16m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f16m2x4_vl32 (float16_t *base, vuint8m1_t bindex, vfloat16m2x4_t v0)
{
  vsuxseg4ei8_v_f16m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_f16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_f16m2x4_m_vl32 (vbool8_t mask, float16_t *base, vuint8m1_t bindex, vfloat16m2x4_t v0)
{
  vsuxseg4ei8_v_f16m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f32m4x2_vl32 (float32_t *base, vuint8m1_t bindex, vfloat32m4x2_t v0)
{
  vsuxseg2ei8_v_f32m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f32m4x2_m_vl32 (vbool8_t mask, float32_t *base, vuint8m1_t bindex, vfloat32m4x2_t v0)
{
  vsuxseg2ei8_v_f32m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f16m4x2_vl32 (float16_t *base, vuint8m2_t bindex, vfloat16m4x2_t v0)
{
  vsuxseg2ei8_v_f16m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_f16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_f16m4x2_m_vl32 (vbool4_t mask, float16_t *base, vuint8m2_t bindex, vfloat16m4x2_t v0)
{
  vsuxseg2ei8_v_f16m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f16mf4x2_vl32 (float16_t *base, vuint16mf4_t bindex, vfloat16mf4x2_t v0)
{
  vsuxseg2ei16_v_f16mf4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f16mf4x2_m_vl32 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4x2_t v0)
{
  vsuxseg2ei16_v_f16mf4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f16mf4x3_vl32 (float16_t *base, vuint16mf4_t bindex, vfloat16mf4x3_t v0)
{
  vsuxseg3ei16_v_f16mf4x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f16mf4x3_m_vl32 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4x3_t v0)
{
  vsuxseg3ei16_v_f16mf4x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f16mf4x4_vl32 (float16_t *base, vuint16mf4_t bindex, vfloat16mf4x4_t v0)
{
  vsuxseg4ei16_v_f16mf4x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f16mf4x4_m_vl32 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4x4_t v0)
{
  vsuxseg4ei16_v_f16mf4x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f16mf4x5_vl32 (float16_t *base, vuint16mf4_t bindex, vfloat16mf4x5_t v0)
{
  vsuxseg5ei16_v_f16mf4x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f16mf4x5_m_vl32 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4x5_t v0)
{
  vsuxseg5ei16_v_f16mf4x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f16mf4x6_vl32 (float16_t *base, vuint16mf4_t bindex, vfloat16mf4x6_t v0)
{
  vsuxseg6ei16_v_f16mf4x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f16mf4x6_m_vl32 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4x6_t v0)
{
  vsuxseg6ei16_v_f16mf4x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f16mf4x7_vl32 (float16_t *base, vuint16mf4_t bindex, vfloat16mf4x7_t v0)
{
  vsuxseg7ei16_v_f16mf4x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f16mf4x7_m_vl32 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4x7_t v0)
{
  vsuxseg7ei16_v_f16mf4x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f16mf4x8_vl32 (float16_t *base, vuint16mf4_t bindex, vfloat16mf4x8_t v0)
{
  vsuxseg8ei16_v_f16mf4x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f16mf4x8_m_vl32 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, vfloat16mf4x8_t v0)
{
  vsuxseg8ei16_v_f16mf4x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f32mf2x2_vl32 (float32_t *base, vuint16mf4_t bindex, vfloat32mf2x2_t v0)
{
  vsuxseg2ei16_v_f32mf2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f32mf2x2_m_vl32 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2x2_t v0)
{
  vsuxseg2ei16_v_f32mf2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f32mf2x3_vl32 (float32_t *base, vuint16mf4_t bindex, vfloat32mf2x3_t v0)
{
  vsuxseg3ei16_v_f32mf2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f32mf2x3_m_vl32 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2x3_t v0)
{
  vsuxseg3ei16_v_f32mf2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f32mf2x4_vl32 (float32_t *base, vuint16mf4_t bindex, vfloat32mf2x4_t v0)
{
  vsuxseg4ei16_v_f32mf2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f32mf2x4_m_vl32 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2x4_t v0)
{
  vsuxseg4ei16_v_f32mf2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f32mf2x5_vl32 (float32_t *base, vuint16mf4_t bindex, vfloat32mf2x5_t v0)
{
  vsuxseg5ei16_v_f32mf2x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f32mf2x5_m_vl32 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2x5_t v0)
{
  vsuxseg5ei16_v_f32mf2x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f32mf2x6_vl32 (float32_t *base, vuint16mf4_t bindex, vfloat32mf2x6_t v0)
{
  vsuxseg6ei16_v_f32mf2x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f32mf2x6_m_vl32 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2x6_t v0)
{
  vsuxseg6ei16_v_f32mf2x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f32mf2x7_vl32 (float32_t *base, vuint16mf4_t bindex, vfloat32mf2x7_t v0)
{
  vsuxseg7ei16_v_f32mf2x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f32mf2x7_m_vl32 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2x7_t v0)
{
  vsuxseg7ei16_v_f32mf2x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f32mf2x8_vl32 (float32_t *base, vuint16mf4_t bindex, vfloat32mf2x8_t v0)
{
  vsuxseg8ei16_v_f32mf2x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f32mf2x8_m_vl32 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, vfloat32mf2x8_t v0)
{
  vsuxseg8ei16_v_f32mf2x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f64m1x2_vl32 (float64_t *base, vuint16mf4_t bindex, vfloat64m1x2_t v0)
{
  vsuxseg2ei16_v_f64m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f64m1x2_m_vl32 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1x2_t v0)
{
  vsuxseg2ei16_v_f64m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f64m1x3_vl32 (float64_t *base, vuint16mf4_t bindex, vfloat64m1x3_t v0)
{
  vsuxseg3ei16_v_f64m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f64m1x3_m_vl32 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1x3_t v0)
{
  vsuxseg3ei16_v_f64m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f64m1x4_vl32 (float64_t *base, vuint16mf4_t bindex, vfloat64m1x4_t v0)
{
  vsuxseg4ei16_v_f64m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f64m1x4_m_vl32 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1x4_t v0)
{
  vsuxseg4ei16_v_f64m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f64m1x5_vl32 (float64_t *base, vuint16mf4_t bindex, vfloat64m1x5_t v0)
{
  vsuxseg5ei16_v_f64m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f64m1x5_m_vl32 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1x5_t v0)
{
  vsuxseg5ei16_v_f64m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f64m1x6_vl32 (float64_t *base, vuint16mf4_t bindex, vfloat64m1x6_t v0)
{
  vsuxseg6ei16_v_f64m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f64m1x6_m_vl32 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1x6_t v0)
{
  vsuxseg6ei16_v_f64m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f64m1x7_vl32 (float64_t *base, vuint16mf4_t bindex, vfloat64m1x7_t v0)
{
  vsuxseg7ei16_v_f64m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f64m1x7_m_vl32 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1x7_t v0)
{
  vsuxseg7ei16_v_f64m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f64m1x8_vl32 (float64_t *base, vuint16mf4_t bindex, vfloat64m1x8_t v0)
{
  vsuxseg8ei16_v_f64m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f64m1x8_m_vl32 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, vfloat64m1x8_t v0)
{
  vsuxseg8ei16_v_f64m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f16mf2x2_vl32 (float16_t *base, vuint16mf2_t bindex, vfloat16mf2x2_t v0)
{
  vsuxseg2ei16_v_f16mf2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f16mf2x2_m_vl32 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2x2_t v0)
{
  vsuxseg2ei16_v_f16mf2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f16mf2x3_vl32 (float16_t *base, vuint16mf2_t bindex, vfloat16mf2x3_t v0)
{
  vsuxseg3ei16_v_f16mf2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f16mf2x3_m_vl32 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2x3_t v0)
{
  vsuxseg3ei16_v_f16mf2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f16mf2x4_vl32 (float16_t *base, vuint16mf2_t bindex, vfloat16mf2x4_t v0)
{
  vsuxseg4ei16_v_f16mf2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f16mf2x4_m_vl32 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2x4_t v0)
{
  vsuxseg4ei16_v_f16mf2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f16mf2x5_vl32 (float16_t *base, vuint16mf2_t bindex, vfloat16mf2x5_t v0)
{
  vsuxseg5ei16_v_f16mf2x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f16mf2x5_m_vl32 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2x5_t v0)
{
  vsuxseg5ei16_v_f16mf2x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f16mf2x6_vl32 (float16_t *base, vuint16mf2_t bindex, vfloat16mf2x6_t v0)
{
  vsuxseg6ei16_v_f16mf2x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f16mf2x6_m_vl32 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2x6_t v0)
{
  vsuxseg6ei16_v_f16mf2x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f16mf2x7_vl32 (float16_t *base, vuint16mf2_t bindex, vfloat16mf2x7_t v0)
{
  vsuxseg7ei16_v_f16mf2x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f16mf2x7_m_vl32 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2x7_t v0)
{
  vsuxseg7ei16_v_f16mf2x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f16mf2x8_vl32 (float16_t *base, vuint16mf2_t bindex, vfloat16mf2x8_t v0)
{
  vsuxseg8ei16_v_f16mf2x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f16mf2x8_m_vl32 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, vfloat16mf2x8_t v0)
{
  vsuxseg8ei16_v_f16mf2x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f32m1x2_vl32 (float32_t *base, vuint16mf2_t bindex, vfloat32m1x2_t v0)
{
  vsuxseg2ei16_v_f32m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f32m1x2_m_vl32 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1x2_t v0)
{
  vsuxseg2ei16_v_f32m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f32m1x3_vl32 (float32_t *base, vuint16mf2_t bindex, vfloat32m1x3_t v0)
{
  vsuxseg3ei16_v_f32m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f32m1x3_m_vl32 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1x3_t v0)
{
  vsuxseg3ei16_v_f32m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f32m1x4_vl32 (float32_t *base, vuint16mf2_t bindex, vfloat32m1x4_t v0)
{
  vsuxseg4ei16_v_f32m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f32m1x4_m_vl32 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1x4_t v0)
{
  vsuxseg4ei16_v_f32m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f32m1x5_vl32 (float32_t *base, vuint16mf2_t bindex, vfloat32m1x5_t v0)
{
  vsuxseg5ei16_v_f32m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f32m1x5_m_vl32 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1x5_t v0)
{
  vsuxseg5ei16_v_f32m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f32m1x6_vl32 (float32_t *base, vuint16mf2_t bindex, vfloat32m1x6_t v0)
{
  vsuxseg6ei16_v_f32m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f32m1x6_m_vl32 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1x6_t v0)
{
  vsuxseg6ei16_v_f32m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f32m1x7_vl32 (float32_t *base, vuint16mf2_t bindex, vfloat32m1x7_t v0)
{
  vsuxseg7ei16_v_f32m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f32m1x7_m_vl32 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1x7_t v0)
{
  vsuxseg7ei16_v_f32m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f32m1x8_vl32 (float32_t *base, vuint16mf2_t bindex, vfloat32m1x8_t v0)
{
  vsuxseg8ei16_v_f32m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f32m1x8_m_vl32 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, vfloat32m1x8_t v0)
{
  vsuxseg8ei16_v_f32m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f64m2x2_vl32 (float64_t *base, vuint16mf2_t bindex, vfloat64m2x2_t v0)
{
  vsuxseg2ei16_v_f64m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f64m2x2_m_vl32 (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2x2_t v0)
{
  vsuxseg2ei16_v_f64m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f64m2x3_vl32 (float64_t *base, vuint16mf2_t bindex, vfloat64m2x3_t v0)
{
  vsuxseg3ei16_v_f64m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f64m2x3_m_vl32 (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2x3_t v0)
{
  vsuxseg3ei16_v_f64m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f64m2x4_vl32 (float64_t *base, vuint16mf2_t bindex, vfloat64m2x4_t v0)
{
  vsuxseg4ei16_v_f64m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f64m2x4_m_vl32 (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, vfloat64m2x4_t v0)
{
  vsuxseg4ei16_v_f64m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f16m1x2_vl32 (float16_t *base, vuint16m1_t bindex, vfloat16m1x2_t v0)
{
  vsuxseg2ei16_v_f16m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f16m1x2_m_vl32 (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1x2_t v0)
{
  vsuxseg2ei16_v_f16m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f16m1x3_vl32 (float16_t *base, vuint16m1_t bindex, vfloat16m1x3_t v0)
{
  vsuxseg3ei16_v_f16m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f16m1x3_m_vl32 (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1x3_t v0)
{
  vsuxseg3ei16_v_f16m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f16m1x4_vl32 (float16_t *base, vuint16m1_t bindex, vfloat16m1x4_t v0)
{
  vsuxseg4ei16_v_f16m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f16m1x4_m_vl32 (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1x4_t v0)
{
  vsuxseg4ei16_v_f16m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f16m1x5_vl32 (float16_t *base, vuint16m1_t bindex, vfloat16m1x5_t v0)
{
  vsuxseg5ei16_v_f16m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei16_v_f16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei16_v_f16m1x5_m_vl32 (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1x5_t v0)
{
  vsuxseg5ei16_v_f16m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f16m1x6_vl32 (float16_t *base, vuint16m1_t bindex, vfloat16m1x6_t v0)
{
  vsuxseg6ei16_v_f16m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei16_v_f16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei16_v_f16m1x6_m_vl32 (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1x6_t v0)
{
  vsuxseg6ei16_v_f16m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f16m1x7_vl32 (float16_t *base, vuint16m1_t bindex, vfloat16m1x7_t v0)
{
  vsuxseg7ei16_v_f16m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei16_v_f16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei16_v_f16m1x7_m_vl32 (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1x7_t v0)
{
  vsuxseg7ei16_v_f16m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f16m1x8_vl32 (float16_t *base, vuint16m1_t bindex, vfloat16m1x8_t v0)
{
  vsuxseg8ei16_v_f16m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei16_v_f16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei16_v_f16m1x8_m_vl32 (vbool16_t mask, float16_t *base, vuint16m1_t bindex, vfloat16m1x8_t v0)
{
  vsuxseg8ei16_v_f16m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f32m2x2_vl32 (float32_t *base, vuint16m1_t bindex, vfloat32m2x2_t v0)
{
  vsuxseg2ei16_v_f32m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f32m2x2_m_vl32 (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2x2_t v0)
{
  vsuxseg2ei16_v_f32m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f32m2x3_vl32 (float32_t *base, vuint16m1_t bindex, vfloat32m2x3_t v0)
{
  vsuxseg3ei16_v_f32m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f32m2x3_m_vl32 (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2x3_t v0)
{
  vsuxseg3ei16_v_f32m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f32m2x4_vl32 (float32_t *base, vuint16m1_t bindex, vfloat32m2x4_t v0)
{
  vsuxseg4ei16_v_f32m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f32m2x4_m_vl32 (vbool16_t mask, float32_t *base, vuint16m1_t bindex, vfloat32m2x4_t v0)
{
  vsuxseg4ei16_v_f32m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f64m4x2_vl32 (float64_t *base, vuint16m1_t bindex, vfloat64m4x2_t v0)
{
  vsuxseg2ei16_v_f64m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f64m4x2_m_vl32 (vbool16_t mask, float64_t *base, vuint16m1_t bindex, vfloat64m4x2_t v0)
{
  vsuxseg2ei16_v_f64m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f16m2x2_vl32 (float16_t *base, vuint16m2_t bindex, vfloat16m2x2_t v0)
{
  vsuxseg2ei16_v_f16m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f16m2x2_m_vl32 (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2x2_t v0)
{
  vsuxseg2ei16_v_f16m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f16m2x3_vl32 (float16_t *base, vuint16m2_t bindex, vfloat16m2x3_t v0)
{
  vsuxseg3ei16_v_f16m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei16_v_f16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei16_v_f16m2x3_m_vl32 (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2x3_t v0)
{
  vsuxseg3ei16_v_f16m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f16m2x4_vl32 (float16_t *base, vuint16m2_t bindex, vfloat16m2x4_t v0)
{
  vsuxseg4ei16_v_f16m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei16_v_f16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei16_v_f16m2x4_m_vl32 (vbool8_t mask, float16_t *base, vuint16m2_t bindex, vfloat16m2x4_t v0)
{
  vsuxseg4ei16_v_f16m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f32m4x2_vl32 (float32_t *base, vuint16m2_t bindex, vfloat32m4x2_t v0)
{
  vsuxseg2ei16_v_f32m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f32m4x2_m_vl32 (vbool8_t mask, float32_t *base, vuint16m2_t bindex, vfloat32m4x2_t v0)
{
  vsuxseg2ei16_v_f32m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f16m4x2_vl32 (float16_t *base, vuint16m4_t bindex, vfloat16m4x2_t v0)
{
  vsuxseg2ei16_v_f16m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei16_v_f16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei16_v_f16m4x2_m_vl32 (vbool4_t mask, float16_t *base, vuint16m4_t bindex, vfloat16m4x2_t v0)
{
  vsuxseg2ei16_v_f16m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f16mf4x2_vl32 (float16_t *base, vuint32mf2_t bindex, vfloat16mf4x2_t v0)
{
  vsuxseg2ei32_v_f16mf4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f16mf4x2_m_vl32 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4x2_t v0)
{
  vsuxseg2ei32_v_f16mf4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f16mf4x3_vl32 (float16_t *base, vuint32mf2_t bindex, vfloat16mf4x3_t v0)
{
  vsuxseg3ei32_v_f16mf4x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f16mf4x3_m_vl32 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4x3_t v0)
{
  vsuxseg3ei32_v_f16mf4x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f16mf4x4_vl32 (float16_t *base, vuint32mf2_t bindex, vfloat16mf4x4_t v0)
{
  vsuxseg4ei32_v_f16mf4x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f16mf4x4_m_vl32 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4x4_t v0)
{
  vsuxseg4ei32_v_f16mf4x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f16mf4x5_vl32 (float16_t *base, vuint32mf2_t bindex, vfloat16mf4x5_t v0)
{
  vsuxseg5ei32_v_f16mf4x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f16mf4x5_m_vl32 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4x5_t v0)
{
  vsuxseg5ei32_v_f16mf4x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f16mf4x6_vl32 (float16_t *base, vuint32mf2_t bindex, vfloat16mf4x6_t v0)
{
  vsuxseg6ei32_v_f16mf4x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f16mf4x6_m_vl32 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4x6_t v0)
{
  vsuxseg6ei32_v_f16mf4x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f16mf4x7_vl32 (float16_t *base, vuint32mf2_t bindex, vfloat16mf4x7_t v0)
{
  vsuxseg7ei32_v_f16mf4x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f16mf4x7_m_vl32 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4x7_t v0)
{
  vsuxseg7ei32_v_f16mf4x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f16mf4x8_vl32 (float16_t *base, vuint32mf2_t bindex, vfloat16mf4x8_t v0)
{
  vsuxseg8ei32_v_f16mf4x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f16mf4x8_m_vl32 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4x8_t v0)
{
  vsuxseg8ei32_v_f16mf4x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f32mf2x2_vl32 (float32_t *base, vuint32mf2_t bindex, vfloat32mf2x2_t v0)
{
  vsuxseg2ei32_v_f32mf2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f32mf2x2_m_vl32 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2x2_t v0)
{
  vsuxseg2ei32_v_f32mf2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f32mf2x3_vl32 (float32_t *base, vuint32mf2_t bindex, vfloat32mf2x3_t v0)
{
  vsuxseg3ei32_v_f32mf2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f32mf2x3_m_vl32 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2x3_t v0)
{
  vsuxseg3ei32_v_f32mf2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f32mf2x4_vl32 (float32_t *base, vuint32mf2_t bindex, vfloat32mf2x4_t v0)
{
  vsuxseg4ei32_v_f32mf2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f32mf2x4_m_vl32 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2x4_t v0)
{
  vsuxseg4ei32_v_f32mf2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f32mf2x5_vl32 (float32_t *base, vuint32mf2_t bindex, vfloat32mf2x5_t v0)
{
  vsuxseg5ei32_v_f32mf2x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f32mf2x5_m_vl32 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2x5_t v0)
{
  vsuxseg5ei32_v_f32mf2x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f32mf2x6_vl32 (float32_t *base, vuint32mf2_t bindex, vfloat32mf2x6_t v0)
{
  vsuxseg6ei32_v_f32mf2x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f32mf2x6_m_vl32 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2x6_t v0)
{
  vsuxseg6ei32_v_f32mf2x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f32mf2x7_vl32 (float32_t *base, vuint32mf2_t bindex, vfloat32mf2x7_t v0)
{
  vsuxseg7ei32_v_f32mf2x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f32mf2x7_m_vl32 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2x7_t v0)
{
  vsuxseg7ei32_v_f32mf2x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f32mf2x8_vl32 (float32_t *base, vuint32mf2_t bindex, vfloat32mf2x8_t v0)
{
  vsuxseg8ei32_v_f32mf2x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f32mf2x8_m_vl32 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2x8_t v0)
{
  vsuxseg8ei32_v_f32mf2x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f64m1x2_vl32 (float64_t *base, vuint32mf2_t bindex, vfloat64m1x2_t v0)
{
  vsuxseg2ei32_v_f64m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f64m1x2_m_vl32 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1x2_t v0)
{
  vsuxseg2ei32_v_f64m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f64m1x3_vl32 (float64_t *base, vuint32mf2_t bindex, vfloat64m1x3_t v0)
{
  vsuxseg3ei32_v_f64m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f64m1x3_m_vl32 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1x3_t v0)
{
  vsuxseg3ei32_v_f64m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f64m1x4_vl32 (float64_t *base, vuint32mf2_t bindex, vfloat64m1x4_t v0)
{
  vsuxseg4ei32_v_f64m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f64m1x4_m_vl32 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1x4_t v0)
{
  vsuxseg4ei32_v_f64m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f64m1x5_vl32 (float64_t *base, vuint32mf2_t bindex, vfloat64m1x5_t v0)
{
  vsuxseg5ei32_v_f64m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f64m1x5_m_vl32 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1x5_t v0)
{
  vsuxseg5ei32_v_f64m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f64m1x6_vl32 (float64_t *base, vuint32mf2_t bindex, vfloat64m1x6_t v0)
{
  vsuxseg6ei32_v_f64m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f64m1x6_m_vl32 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1x6_t v0)
{
  vsuxseg6ei32_v_f64m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f64m1x7_vl32 (float64_t *base, vuint32mf2_t bindex, vfloat64m1x7_t v0)
{
  vsuxseg7ei32_v_f64m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f64m1x7_m_vl32 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1x7_t v0)
{
  vsuxseg7ei32_v_f64m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f64m1x8_vl32 (float64_t *base, vuint32mf2_t bindex, vfloat64m1x8_t v0)
{
  vsuxseg8ei32_v_f64m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f64m1x8_m_vl32 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1x8_t v0)
{
  vsuxseg8ei32_v_f64m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f16mf2x2_vl32 (float16_t *base, vuint32m1_t bindex, vfloat16mf2x2_t v0)
{
  vsuxseg2ei32_v_f16mf2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f16mf2x2_m_vl32 (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2x2_t v0)
{
  vsuxseg2ei32_v_f16mf2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f16mf2x3_vl32 (float16_t *base, vuint32m1_t bindex, vfloat16mf2x3_t v0)
{
  vsuxseg3ei32_v_f16mf2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f16mf2x3_m_vl32 (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2x3_t v0)
{
  vsuxseg3ei32_v_f16mf2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f16mf2x4_vl32 (float16_t *base, vuint32m1_t bindex, vfloat16mf2x4_t v0)
{
  vsuxseg4ei32_v_f16mf2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f16mf2x4_m_vl32 (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2x4_t v0)
{
  vsuxseg4ei32_v_f16mf2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f16mf2x5_vl32 (float16_t *base, vuint32m1_t bindex, vfloat16mf2x5_t v0)
{
  vsuxseg5ei32_v_f16mf2x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f16mf2x5_m_vl32 (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2x5_t v0)
{
  vsuxseg5ei32_v_f16mf2x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f16mf2x6_vl32 (float16_t *base, vuint32m1_t bindex, vfloat16mf2x6_t v0)
{
  vsuxseg6ei32_v_f16mf2x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f16mf2x6_m_vl32 (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2x6_t v0)
{
  vsuxseg6ei32_v_f16mf2x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f16mf2x7_vl32 (float16_t *base, vuint32m1_t bindex, vfloat16mf2x7_t v0)
{
  vsuxseg7ei32_v_f16mf2x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f16mf2x7_m_vl32 (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2x7_t v0)
{
  vsuxseg7ei32_v_f16mf2x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f16mf2x8_vl32 (float16_t *base, vuint32m1_t bindex, vfloat16mf2x8_t v0)
{
  vsuxseg8ei32_v_f16mf2x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f16mf2x8_m_vl32 (vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2x8_t v0)
{
  vsuxseg8ei32_v_f16mf2x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f32m1x2_vl32 (float32_t *base, vuint32m1_t bindex, vfloat32m1x2_t v0)
{
  vsuxseg2ei32_v_f32m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f32m1x2_m_vl32 (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1x2_t v0)
{
  vsuxseg2ei32_v_f32m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f32m1x3_vl32 (float32_t *base, vuint32m1_t bindex, vfloat32m1x3_t v0)
{
  vsuxseg3ei32_v_f32m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f32m1x3_m_vl32 (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1x3_t v0)
{
  vsuxseg3ei32_v_f32m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f32m1x4_vl32 (float32_t *base, vuint32m1_t bindex, vfloat32m1x4_t v0)
{
  vsuxseg4ei32_v_f32m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f32m1x4_m_vl32 (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1x4_t v0)
{
  vsuxseg4ei32_v_f32m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f32m1x5_vl32 (float32_t *base, vuint32m1_t bindex, vfloat32m1x5_t v0)
{
  vsuxseg5ei32_v_f32m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f32m1x5_m_vl32 (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1x5_t v0)
{
  vsuxseg5ei32_v_f32m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f32m1x6_vl32 (float32_t *base, vuint32m1_t bindex, vfloat32m1x6_t v0)
{
  vsuxseg6ei32_v_f32m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f32m1x6_m_vl32 (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1x6_t v0)
{
  vsuxseg6ei32_v_f32m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f32m1x7_vl32 (float32_t *base, vuint32m1_t bindex, vfloat32m1x7_t v0)
{
  vsuxseg7ei32_v_f32m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f32m1x7_m_vl32 (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1x7_t v0)
{
  vsuxseg7ei32_v_f32m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f32m1x8_vl32 (float32_t *base, vuint32m1_t bindex, vfloat32m1x8_t v0)
{
  vsuxseg8ei32_v_f32m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f32m1x8_m_vl32 (vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1x8_t v0)
{
  vsuxseg8ei32_v_f32m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f64m2x2_vl32 (float64_t *base, vuint32m1_t bindex, vfloat64m2x2_t v0)
{
  vsuxseg2ei32_v_f64m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f64m2x2_m_vl32 (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2x2_t v0)
{
  vsuxseg2ei32_v_f64m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f64m2x3_vl32 (float64_t *base, vuint32m1_t bindex, vfloat64m2x3_t v0)
{
  vsuxseg3ei32_v_f64m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f64m2x3_m_vl32 (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2x3_t v0)
{
  vsuxseg3ei32_v_f64m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f64m2x4_vl32 (float64_t *base, vuint32m1_t bindex, vfloat64m2x4_t v0)
{
  vsuxseg4ei32_v_f64m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f64m2x4_m_vl32 (vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2x4_t v0)
{
  vsuxseg4ei32_v_f64m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f16m1x2_vl32 (float16_t *base, vuint32m2_t bindex, vfloat16m1x2_t v0)
{
  vsuxseg2ei32_v_f16m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f16m1x2_m_vl32 (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1x2_t v0)
{
  vsuxseg2ei32_v_f16m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f16m1x3_vl32 (float16_t *base, vuint32m2_t bindex, vfloat16m1x3_t v0)
{
  vsuxseg3ei32_v_f16m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f16m1x3_m_vl32 (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1x3_t v0)
{
  vsuxseg3ei32_v_f16m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f16m1x4_vl32 (float16_t *base, vuint32m2_t bindex, vfloat16m1x4_t v0)
{
  vsuxseg4ei32_v_f16m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f16m1x4_m_vl32 (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1x4_t v0)
{
  vsuxseg4ei32_v_f16m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f16m1x5_vl32 (float16_t *base, vuint32m2_t bindex, vfloat16m1x5_t v0)
{
  vsuxseg5ei32_v_f16m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei32_v_f16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei32_v_f16m1x5_m_vl32 (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1x5_t v0)
{
  vsuxseg5ei32_v_f16m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f16m1x6_vl32 (float16_t *base, vuint32m2_t bindex, vfloat16m1x6_t v0)
{
  vsuxseg6ei32_v_f16m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei32_v_f16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei32_v_f16m1x6_m_vl32 (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1x6_t v0)
{
  vsuxseg6ei32_v_f16m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f16m1x7_vl32 (float16_t *base, vuint32m2_t bindex, vfloat16m1x7_t v0)
{
  vsuxseg7ei32_v_f16m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei32_v_f16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei32_v_f16m1x7_m_vl32 (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1x7_t v0)
{
  vsuxseg7ei32_v_f16m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f16m1x8_vl32 (float16_t *base, vuint32m2_t bindex, vfloat16m1x8_t v0)
{
  vsuxseg8ei32_v_f16m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei32_v_f16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei32_v_f16m1x8_m_vl32 (vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1x8_t v0)
{
  vsuxseg8ei32_v_f16m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f32m2x2_vl32 (float32_t *base, vuint32m2_t bindex, vfloat32m2x2_t v0)
{
  vsuxseg2ei32_v_f32m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f32m2x2_m_vl32 (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2x2_t v0)
{
  vsuxseg2ei32_v_f32m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f32m2x3_vl32 (float32_t *base, vuint32m2_t bindex, vfloat32m2x3_t v0)
{
  vsuxseg3ei32_v_f32m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f32m2x3_m_vl32 (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2x3_t v0)
{
  vsuxseg3ei32_v_f32m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f32m2x4_vl32 (float32_t *base, vuint32m2_t bindex, vfloat32m2x4_t v0)
{
  vsuxseg4ei32_v_f32m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f32m2x4_m_vl32 (vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2x4_t v0)
{
  vsuxseg4ei32_v_f32m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f64m4x2_vl32 (float64_t *base, vuint32m2_t bindex, vfloat64m4x2_t v0)
{
  vsuxseg2ei32_v_f64m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f64m4x2_m_vl32 (vbool16_t mask, float64_t *base, vuint32m2_t bindex, vfloat64m4x2_t v0)
{
  vsuxseg2ei32_v_f64m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f16m2x2_vl32 (float16_t *base, vuint32m4_t bindex, vfloat16m2x2_t v0)
{
  vsuxseg2ei32_v_f16m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f16m2x2_m_vl32 (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2x2_t v0)
{
  vsuxseg2ei32_v_f16m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f16m2x3_vl32 (float16_t *base, vuint32m4_t bindex, vfloat16m2x3_t v0)
{
  vsuxseg3ei32_v_f16m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei32_v_f16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei32_v_f16m2x3_m_vl32 (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2x3_t v0)
{
  vsuxseg3ei32_v_f16m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f16m2x4_vl32 (float16_t *base, vuint32m4_t bindex, vfloat16m2x4_t v0)
{
  vsuxseg4ei32_v_f16m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei32_v_f16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei32_v_f16m2x4_m_vl32 (vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2x4_t v0)
{
  vsuxseg4ei32_v_f16m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f32m4x2_vl32 (float32_t *base, vuint32m4_t bindex, vfloat32m4x2_t v0)
{
  vsuxseg2ei32_v_f32m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f32m4x2_m_vl32 (vbool8_t mask, float32_t *base, vuint32m4_t bindex, vfloat32m4x2_t v0)
{
  vsuxseg2ei32_v_f32m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f16m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f16m4x2_vl32 (float16_t *base, vuint32m8_t bindex, vfloat16m4x2_t v0)
{
  vsuxseg2ei32_v_f16m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei32_v_f16m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei32_v_f16m4x2_m_vl32 (vbool4_t mask, float16_t *base, vuint32m8_t bindex, vfloat16m4x2_t v0)
{
  vsuxseg2ei32_v_f16m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f16mf4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f16mf4x2_vl32 (float16_t *base, vuint64m1_t bindex, vfloat16mf4x2_t v0)
{
  vsuxseg2ei64_v_f16mf4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f16mf4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f16mf4x2_m_vl32 (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4x2_t v0)
{
  vsuxseg2ei64_v_f16mf4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f16mf4x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f16mf4x3_vl32 (float16_t *base, vuint64m1_t bindex, vfloat16mf4x3_t v0)
{
  vsuxseg3ei64_v_f16mf4x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f16mf4x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f16mf4x3_m_vl32 (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4x3_t v0)
{
  vsuxseg3ei64_v_f16mf4x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f16mf4x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f16mf4x4_vl32 (float16_t *base, vuint64m1_t bindex, vfloat16mf4x4_t v0)
{
  vsuxseg4ei64_v_f16mf4x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f16mf4x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f16mf4x4_m_vl32 (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4x4_t v0)
{
  vsuxseg4ei64_v_f16mf4x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f16mf4x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f16mf4x5_vl32 (float16_t *base, vuint64m1_t bindex, vfloat16mf4x5_t v0)
{
  vsuxseg5ei64_v_f16mf4x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f16mf4x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f16mf4x5_m_vl32 (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4x5_t v0)
{
  vsuxseg5ei64_v_f16mf4x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f16mf4x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f16mf4x6_vl32 (float16_t *base, vuint64m1_t bindex, vfloat16mf4x6_t v0)
{
  vsuxseg6ei64_v_f16mf4x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f16mf4x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f16mf4x6_m_vl32 (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4x6_t v0)
{
  vsuxseg6ei64_v_f16mf4x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f16mf4x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f16mf4x7_vl32 (float16_t *base, vuint64m1_t bindex, vfloat16mf4x7_t v0)
{
  vsuxseg7ei64_v_f16mf4x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f16mf4x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f16mf4x7_m_vl32 (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4x7_t v0)
{
  vsuxseg7ei64_v_f16mf4x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f16mf4x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f16mf4x8_vl32 (float16_t *base, vuint64m1_t bindex, vfloat16mf4x8_t v0)
{
  vsuxseg8ei64_v_f16mf4x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f16mf4x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f16mf4x8_m_vl32 (vbool64_t mask, float16_t *base, vuint64m1_t bindex, vfloat16mf4x8_t v0)
{
  vsuxseg8ei64_v_f16mf4x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f32mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f32mf2x2_vl32 (float32_t *base, vuint64m1_t bindex, vfloat32mf2x2_t v0)
{
  vsuxseg2ei64_v_f32mf2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f32mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f32mf2x2_m_vl32 (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2x2_t v0)
{
  vsuxseg2ei64_v_f32mf2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f32mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f32mf2x3_vl32 (float32_t *base, vuint64m1_t bindex, vfloat32mf2x3_t v0)
{
  vsuxseg3ei64_v_f32mf2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f32mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f32mf2x3_m_vl32 (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2x3_t v0)
{
  vsuxseg3ei64_v_f32mf2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f32mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f32mf2x4_vl32 (float32_t *base, vuint64m1_t bindex, vfloat32mf2x4_t v0)
{
  vsuxseg4ei64_v_f32mf2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f32mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f32mf2x4_m_vl32 (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2x4_t v0)
{
  vsuxseg4ei64_v_f32mf2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f32mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f32mf2x5_vl32 (float32_t *base, vuint64m1_t bindex, vfloat32mf2x5_t v0)
{
  vsuxseg5ei64_v_f32mf2x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f32mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f32mf2x5_m_vl32 (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2x5_t v0)
{
  vsuxseg5ei64_v_f32mf2x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f32mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f32mf2x6_vl32 (float32_t *base, vuint64m1_t bindex, vfloat32mf2x6_t v0)
{
  vsuxseg6ei64_v_f32mf2x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f32mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f32mf2x6_m_vl32 (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2x6_t v0)
{
  vsuxseg6ei64_v_f32mf2x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f32mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f32mf2x7_vl32 (float32_t *base, vuint64m1_t bindex, vfloat32mf2x7_t v0)
{
  vsuxseg7ei64_v_f32mf2x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f32mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f32mf2x7_m_vl32 (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2x7_t v0)
{
  vsuxseg7ei64_v_f32mf2x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f32mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f32mf2x8_vl32 (float32_t *base, vuint64m1_t bindex, vfloat32mf2x8_t v0)
{
  vsuxseg8ei64_v_f32mf2x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f32mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f32mf2x8_m_vl32 (vbool64_t mask, float32_t *base, vuint64m1_t bindex, vfloat32mf2x8_t v0)
{
  vsuxseg8ei64_v_f32mf2x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f64m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f64m1x2_vl32 (float64_t *base, vuint64m1_t bindex, vfloat64m1x2_t v0)
{
  vsuxseg2ei64_v_f64m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f64m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f64m1x2_m_vl32 (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1x2_t v0)
{
  vsuxseg2ei64_v_f64m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f64m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f64m1x3_vl32 (float64_t *base, vuint64m1_t bindex, vfloat64m1x3_t v0)
{
  vsuxseg3ei64_v_f64m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f64m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f64m1x3_m_vl32 (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1x3_t v0)
{
  vsuxseg3ei64_v_f64m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f64m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f64m1x4_vl32 (float64_t *base, vuint64m1_t bindex, vfloat64m1x4_t v0)
{
  vsuxseg4ei64_v_f64m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f64m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f64m1x4_m_vl32 (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1x4_t v0)
{
  vsuxseg4ei64_v_f64m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f64m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f64m1x5_vl32 (float64_t *base, vuint64m1_t bindex, vfloat64m1x5_t v0)
{
  vsuxseg5ei64_v_f64m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f64m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f64m1x5_m_vl32 (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1x5_t v0)
{
  vsuxseg5ei64_v_f64m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f64m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f64m1x6_vl32 (float64_t *base, vuint64m1_t bindex, vfloat64m1x6_t v0)
{
  vsuxseg6ei64_v_f64m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f64m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f64m1x6_m_vl32 (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1x6_t v0)
{
  vsuxseg6ei64_v_f64m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f64m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f64m1x7_vl32 (float64_t *base, vuint64m1_t bindex, vfloat64m1x7_t v0)
{
  vsuxseg7ei64_v_f64m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f64m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f64m1x7_m_vl32 (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1x7_t v0)
{
  vsuxseg7ei64_v_f64m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f64m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f64m1x8_vl32 (float64_t *base, vuint64m1_t bindex, vfloat64m1x8_t v0)
{
  vsuxseg8ei64_v_f64m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f64m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f64m1x8_m_vl32 (vbool64_t mask, float64_t *base, vuint64m1_t bindex, vfloat64m1x8_t v0)
{
  vsuxseg8ei64_v_f64m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f16mf2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f16mf2x2_vl32 (float16_t *base, vuint64m2_t bindex, vfloat16mf2x2_t v0)
{
  vsuxseg2ei64_v_f16mf2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f16mf2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f16mf2x2_m_vl32 (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2x2_t v0)
{
  vsuxseg2ei64_v_f16mf2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f16mf2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f16mf2x3_vl32 (float16_t *base, vuint64m2_t bindex, vfloat16mf2x3_t v0)
{
  vsuxseg3ei64_v_f16mf2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f16mf2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f16mf2x3_m_vl32 (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2x3_t v0)
{
  vsuxseg3ei64_v_f16mf2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f16mf2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f16mf2x4_vl32 (float16_t *base, vuint64m2_t bindex, vfloat16mf2x4_t v0)
{
  vsuxseg4ei64_v_f16mf2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f16mf2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f16mf2x4_m_vl32 (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2x4_t v0)
{
  vsuxseg4ei64_v_f16mf2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f16mf2x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f16mf2x5_vl32 (float16_t *base, vuint64m2_t bindex, vfloat16mf2x5_t v0)
{
  vsuxseg5ei64_v_f16mf2x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f16mf2x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f16mf2x5_m_vl32 (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2x5_t v0)
{
  vsuxseg5ei64_v_f16mf2x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f16mf2x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f16mf2x6_vl32 (float16_t *base, vuint64m2_t bindex, vfloat16mf2x6_t v0)
{
  vsuxseg6ei64_v_f16mf2x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f16mf2x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f16mf2x6_m_vl32 (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2x6_t v0)
{
  vsuxseg6ei64_v_f16mf2x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f16mf2x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f16mf2x7_vl32 (float16_t *base, vuint64m2_t bindex, vfloat16mf2x7_t v0)
{
  vsuxseg7ei64_v_f16mf2x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f16mf2x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f16mf2x7_m_vl32 (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2x7_t v0)
{
  vsuxseg7ei64_v_f16mf2x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f16mf2x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f16mf2x8_vl32 (float16_t *base, vuint64m2_t bindex, vfloat16mf2x8_t v0)
{
  vsuxseg8ei64_v_f16mf2x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f16mf2x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f16mf2x8_m_vl32 (vbool32_t mask, float16_t *base, vuint64m2_t bindex, vfloat16mf2x8_t v0)
{
  vsuxseg8ei64_v_f16mf2x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f32m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f32m1x2_vl32 (float32_t *base, vuint64m2_t bindex, vfloat32m1x2_t v0)
{
  vsuxseg2ei64_v_f32m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f32m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f32m1x2_m_vl32 (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1x2_t v0)
{
  vsuxseg2ei64_v_f32m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f32m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f32m1x3_vl32 (float32_t *base, vuint64m2_t bindex, vfloat32m1x3_t v0)
{
  vsuxseg3ei64_v_f32m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f32m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f32m1x3_m_vl32 (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1x3_t v0)
{
  vsuxseg3ei64_v_f32m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f32m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f32m1x4_vl32 (float32_t *base, vuint64m2_t bindex, vfloat32m1x4_t v0)
{
  vsuxseg4ei64_v_f32m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f32m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f32m1x4_m_vl32 (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1x4_t v0)
{
  vsuxseg4ei64_v_f32m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f32m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f32m1x5_vl32 (float32_t *base, vuint64m2_t bindex, vfloat32m1x5_t v0)
{
  vsuxseg5ei64_v_f32m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f32m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f32m1x5_m_vl32 (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1x5_t v0)
{
  vsuxseg5ei64_v_f32m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f32m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f32m1x6_vl32 (float32_t *base, vuint64m2_t bindex, vfloat32m1x6_t v0)
{
  vsuxseg6ei64_v_f32m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f32m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f32m1x6_m_vl32 (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1x6_t v0)
{
  vsuxseg6ei64_v_f32m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f32m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f32m1x7_vl32 (float32_t *base, vuint64m2_t bindex, vfloat32m1x7_t v0)
{
  vsuxseg7ei64_v_f32m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f32m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f32m1x7_m_vl32 (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1x7_t v0)
{
  vsuxseg7ei64_v_f32m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f32m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f32m1x8_vl32 (float32_t *base, vuint64m2_t bindex, vfloat32m1x8_t v0)
{
  vsuxseg8ei64_v_f32m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f32m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f32m1x8_m_vl32 (vbool32_t mask, float32_t *base, vuint64m2_t bindex, vfloat32m1x8_t v0)
{
  vsuxseg8ei64_v_f32m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f64m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f64m2x2_vl32 (float64_t *base, vuint64m2_t bindex, vfloat64m2x2_t v0)
{
  vsuxseg2ei64_v_f64m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f64m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f64m2x2_m_vl32 (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2x2_t v0)
{
  vsuxseg2ei64_v_f64m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f64m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f64m2x3_vl32 (float64_t *base, vuint64m2_t bindex, vfloat64m2x3_t v0)
{
  vsuxseg3ei64_v_f64m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f64m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f64m2x3_m_vl32 (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2x3_t v0)
{
  vsuxseg3ei64_v_f64m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f64m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f64m2x4_vl32 (float64_t *base, vuint64m2_t bindex, vfloat64m2x4_t v0)
{
  vsuxseg4ei64_v_f64m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f64m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f64m2x4_m_vl32 (vbool32_t mask, float64_t *base, vuint64m2_t bindex, vfloat64m2x4_t v0)
{
  vsuxseg4ei64_v_f64m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f16m1x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f16m1x2_vl32 (float16_t *base, vuint64m4_t bindex, vfloat16m1x2_t v0)
{
  vsuxseg2ei64_v_f16m1x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f16m1x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f16m1x2_m_vl32 (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1x2_t v0)
{
  vsuxseg2ei64_v_f16m1x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f16m1x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f16m1x3_vl32 (float16_t *base, vuint64m4_t bindex, vfloat16m1x3_t v0)
{
  vsuxseg3ei64_v_f16m1x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f16m1x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f16m1x3_m_vl32 (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1x3_t v0)
{
  vsuxseg3ei64_v_f16m1x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f16m1x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f16m1x4_vl32 (float16_t *base, vuint64m4_t bindex, vfloat16m1x4_t v0)
{
  vsuxseg4ei64_v_f16m1x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f16m1x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f16m1x4_m_vl32 (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1x4_t v0)
{
  vsuxseg4ei64_v_f16m1x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f16m1x5_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f16m1x5_vl32 (float16_t *base, vuint64m4_t bindex, vfloat16m1x5_t v0)
{
  vsuxseg5ei64_v_f16m1x5 (base, bindex, v0, 32);
}

/*
** test_vsuxseg5ei64_v_f16m1x5_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg5ei64_v_f16m1x5_m_vl32 (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1x5_t v0)
{
  vsuxseg5ei64_v_f16m1x5_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f16m1x6_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f16m1x6_vl32 (float16_t *base, vuint64m4_t bindex, vfloat16m1x6_t v0)
{
  vsuxseg6ei64_v_f16m1x6 (base, bindex, v0, 32);
}

/*
** test_vsuxseg6ei64_v_f16m1x6_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg6ei64_v_f16m1x6_m_vl32 (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1x6_t v0)
{
  vsuxseg6ei64_v_f16m1x6_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f16m1x7_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f16m1x7_vl32 (float16_t *base, vuint64m4_t bindex, vfloat16m1x7_t v0)
{
  vsuxseg7ei64_v_f16m1x7 (base, bindex, v0, 32);
}

/*
** test_vsuxseg7ei64_v_f16m1x7_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg7ei64_v_f16m1x7_m_vl32 (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1x7_t v0)
{
  vsuxseg7ei64_v_f16m1x7_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f16m1x8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f16m1x8_vl32 (float16_t *base, vuint64m4_t bindex, vfloat16m1x8_t v0)
{
  vsuxseg8ei64_v_f16m1x8 (base, bindex, v0, 32);
}

/*
** test_vsuxseg8ei64_v_f16m1x8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vsuxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg8ei64_v_f16m1x8_m_vl32 (vbool16_t mask, float16_t *base, vuint64m4_t bindex, vfloat16m1x8_t v0)
{
  vsuxseg8ei64_v_f16m1x8_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f32m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f32m2x2_vl32 (float32_t *base, vuint64m4_t bindex, vfloat32m2x2_t v0)
{
  vsuxseg2ei64_v_f32m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f32m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f32m2x2_m_vl32 (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2x2_t v0)
{
  vsuxseg2ei64_v_f32m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f32m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f32m2x3_vl32 (float32_t *base, vuint64m4_t bindex, vfloat32m2x3_t v0)
{
  vsuxseg3ei64_v_f32m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f32m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f32m2x3_m_vl32 (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2x3_t v0)
{
  vsuxseg3ei64_v_f32m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f32m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f32m2x4_vl32 (float32_t *base, vuint64m4_t bindex, vfloat32m2x4_t v0)
{
  vsuxseg4ei64_v_f32m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f32m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f32m2x4_m_vl32 (vbool16_t mask, float32_t *base, vuint64m4_t bindex, vfloat32m2x4_t v0)
{
  vsuxseg4ei64_v_f32m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f64m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f64m4x2_vl32 (float64_t *base, vuint64m4_t bindex, vfloat64m4x2_t v0)
{
  vsuxseg2ei64_v_f64m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f64m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f64m4x2_m_vl32 (vbool16_t mask, float64_t *base, vuint64m4_t bindex, vfloat64m4x2_t v0)
{
  vsuxseg2ei64_v_f64m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f16m2x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f16m2x2_vl32 (float16_t *base, vuint64m8_t bindex, vfloat16m2x2_t v0)
{
  vsuxseg2ei64_v_f16m2x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f16m2x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f16m2x2_m_vl32 (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2x2_t v0)
{
  vsuxseg2ei64_v_f16m2x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f16m2x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f16m2x3_vl32 (float16_t *base, vuint64m8_t bindex, vfloat16m2x3_t v0)
{
  vsuxseg3ei64_v_f16m2x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei64_v_f16m2x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei64_v_f16m2x3_m_vl32 (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2x3_t v0)
{
  vsuxseg3ei64_v_f16m2x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f16m2x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f16m2x4_vl32 (float16_t *base, vuint64m8_t bindex, vfloat16m2x4_t v0)
{
  vsuxseg4ei64_v_f16m2x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei64_v_f16m2x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei64_v_f16m2x4_m_vl32 (vbool8_t mask, float16_t *base, vuint64m8_t bindex, vfloat16m2x4_t v0)
{
  vsuxseg4ei64_v_f16m2x4_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f32m4x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24)
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f32m4x2_vl32 (float32_t *base, vuint64m8_t bindex, vfloat32m4x2_t v0)
{
  vsuxseg2ei64_v_f32m4x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei64_v_f32m4x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei64_v_f32m4x2_m_vl32 (vbool8_t mask, float32_t *base, vuint64m8_t bindex, vfloat32m4x2_t v0)
{
  vsuxseg2ei64_v_f32m4x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_i8mf8x2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_i8mf8x2_vl32 (int8_t *base, vuint8mf8_t bindex, vint8mf8x2_t v0)
{
  vsuxseg2ei8_v_i8mf8x2 (base, bindex, v0, 32);
}

/*
** test_vsuxseg2ei8_v_i8mf8x2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg2ei8_v_i8mf8x2_m_vl32 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8x2_t v0)
{
  vsuxseg2ei8_v_i8mf8x2_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_i8mf8x3_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_i8mf8x3_vl32 (int8_t *base, vuint8mf8_t bindex, vint8mf8x3_t v0)
{
  vsuxseg3ei8_v_i8mf8x3 (base, bindex, v0, 32);
}

/*
** test_vsuxseg3ei8_v_i8mf8x3_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg3ei8_v_i8mf8x3_m_vl32 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8x3_t v0)
{
  vsuxseg3ei8_v_i8mf8x3_m (mask, base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_i8mf8x4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_i8mf8x4_vl32 (int8_t *base, vuint8mf8_t bindex, vint8mf8x4_t v0)
{
  vsuxseg4ei8_v_i8mf8x4 (base, bindex, v0, 32);
}

/*
** test_vsuxseg4ei8_v_i8mf8x4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*m[au]
**  ...
**	vsuxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
void
test_vsuxseg4ei8_v_i8mf8x4_m_vl32 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, vint8mf8x4_t v0)
{
  vsuxseg4ei8_v_i8mf8x4_m (mask, base, bindex, v0, 32);
}
