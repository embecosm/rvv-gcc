/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vluxseg4ei16_v_f16mf4x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei16_v_f16mf4x4_tumu_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f16mf4x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_tama (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf4x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_tama_vl31 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f16mf4x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_tamu (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf4x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_tamu_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f16mf4x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_tuma (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf4x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_tuma_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f16mf4x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_tumu (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf4x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf4x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei16_v_f16mf4x5_tumu_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f16mf4x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_tama (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf4x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_tama_vl31 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f16mf4x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_tamu (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf4x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_tamu_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f16mf4x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_tuma (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf4x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_tuma_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f16mf4x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_tumu (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf4x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf4x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei16_v_f16mf4x6_tumu_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f16mf4x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_tama (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf4x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_tama_vl31 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f16mf4x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_tamu (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf4x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_tamu_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f16mf4x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_tuma (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf4x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_tuma_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f16mf4x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_tumu (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf4x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf4x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei16_v_f16mf4x7_tumu_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f16mf4x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_tama (vbool64_t mask, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf4x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_tama_vl31 (vbool64_t mask, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f16mf4x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_tamu (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf4x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_tamu_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f16mf4x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_tuma (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf4x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_tuma_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f16mf4x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_tumu (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf4x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf4x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei16_v_f16mf4x8_tumu_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f16mf4x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_tama (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32mf2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_tama_vl31 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f32mf2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_tamu (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32mf2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_tamu_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f32mf2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_tuma (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32mf2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_tuma_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f32mf2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_tumu (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32mf2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32mf2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei16_v_f32mf2x2_tumu_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f32mf2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_tama (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32mf2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_tama_vl31 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f32mf2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_tamu (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32mf2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_tamu_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f32mf2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_tuma (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32mf2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_tuma_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f32mf2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_tumu (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32mf2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32mf2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei16_v_f32mf2x3_tumu_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f32mf2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_tama (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32mf2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_tama_vl31 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f32mf2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_tamu (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32mf2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_tamu_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f32mf2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_tuma (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32mf2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_tuma_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f32mf2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_tumu (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32mf2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32mf2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei16_v_f32mf2x4_tumu_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f32mf2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_tama (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32mf2x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_tama_vl31 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f32mf2x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_tamu (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32mf2x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_tamu_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f32mf2x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_tuma (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32mf2x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_tuma_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f32mf2x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_tumu (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32mf2x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei16_v_f32mf2x5_tumu_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f32mf2x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_tama (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32mf2x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_tama_vl31 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f32mf2x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_tamu (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32mf2x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_tamu_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f32mf2x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_tuma (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32mf2x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_tuma_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f32mf2x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_tumu (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32mf2x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei16_v_f32mf2x6_tumu_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f32mf2x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_tama (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32mf2x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_tama_vl31 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f32mf2x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_tamu (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32mf2x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_tamu_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f32mf2x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_tuma (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32mf2x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_tuma_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f32mf2x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_tumu (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32mf2x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei16_v_f32mf2x7_tumu_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f32mf2x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_tama (vbool64_t mask, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32mf2x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_tama_vl31 (vbool64_t mask, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f32mf2x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_tamu (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32mf2x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_tamu_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f32mf2x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_tuma (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32mf2x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_tuma_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f32mf2x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_tumu (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32mf2x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei16_v_f32mf2x8_tumu_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f32mf2x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_tama (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m1x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_tama_vl31 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f64m1x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_tamu (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m1x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_tamu_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f64m1x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_tuma (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m1x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_tuma_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f64m1x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_tumu (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m1x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei16_v_f64m1x2_tumu_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg2ei16_v_f64m1x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_tama (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m1x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_tama_vl31 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f64m1x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_tamu (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m1x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_tamu_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f64m1x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_tuma (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m1x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_tuma_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f64m1x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_tumu (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m1x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei16_v_f64m1x3_tumu_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg3ei16_v_f64m1x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_tama (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m1x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_tama_vl31 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f64m1x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_tamu (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m1x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_tamu_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f64m1x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_tuma (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m1x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_tuma_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f64m1x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_tumu (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m1x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei16_v_f64m1x4_tumu_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg4ei16_v_f64m1x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f64m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_tama (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f64m1x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f64m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_tama_vl31 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f64m1x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f64m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_tamu (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f64m1x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f64m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_tamu_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f64m1x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f64m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_tuma (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f64m1x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f64m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_tuma_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f64m1x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f64m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_tumu (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f64m1x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f64m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei16_v_f64m1x5_tumu_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg5ei16_v_f64m1x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f64m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_tama (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f64m1x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f64m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_tama_vl31 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f64m1x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f64m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_tamu (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f64m1x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f64m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_tamu_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f64m1x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f64m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_tuma (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f64m1x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f64m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_tuma_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f64m1x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f64m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_tumu (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f64m1x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f64m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei16_v_f64m1x6_tumu_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg6ei16_v_f64m1x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f64m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_tama (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f64m1x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f64m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_tama_vl31 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f64m1x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f64m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_tamu (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f64m1x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f64m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_tamu_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f64m1x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f64m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_tuma (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f64m1x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f64m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_tuma_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f64m1x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f64m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_tumu (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f64m1x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f64m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei16_v_f64m1x7_tumu_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg7ei16_v_f64m1x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f64m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_tama (vbool64_t mask, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f64m1x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f64m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_tama_vl31 (vbool64_t mask, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f64m1x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f64m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_tamu (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f64m1x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f64m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_tamu_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f64m1x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f64m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_tuma (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f64m1x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f64m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_tuma_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f64m1x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f64m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_tumu (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f64m1x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f64m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei16_v_f64m1x8_tumu_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint16mf4_t bindex)
{
  return vluxseg8ei16_v_f64m1x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_tama (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_tama_vl31 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f16mf2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_tamu (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_tamu_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f16mf2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_tuma (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_tuma_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f16mf2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_tumu (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16mf2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16mf2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei16_v_f16mf2x2_tumu_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f16mf2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_tama (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_tama_vl31 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f16mf2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_tamu (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_tamu_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f16mf2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_tuma (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_tuma_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f16mf2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_tumu (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16mf2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16mf2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei16_v_f16mf2x3_tumu_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f16mf2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_tama (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_tama_vl31 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f16mf2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_tamu (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_tamu_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f16mf2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_tuma (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_tuma_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f16mf2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_tumu (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16mf2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16mf2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei16_v_f16mf2x4_tumu_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f16mf2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_tama (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf2x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_tama_vl31 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f16mf2x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_tamu (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf2x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_tamu_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f16mf2x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_tuma (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf2x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_tuma_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f16mf2x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_tumu (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16mf2x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei16_v_f16mf2x5_tumu_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f16mf2x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_tama (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf2x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_tama_vl31 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f16mf2x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_tamu (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf2x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_tamu_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f16mf2x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_tuma (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf2x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_tuma_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f16mf2x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_tumu (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16mf2x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei16_v_f16mf2x6_tumu_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f16mf2x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_tama (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf2x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_tama_vl31 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f16mf2x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_tamu (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf2x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_tamu_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f16mf2x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_tuma (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf2x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_tuma_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f16mf2x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_tumu (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16mf2x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei16_v_f16mf2x7_tumu_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f16mf2x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_tama (vbool32_t mask, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf2x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_tama_vl31 (vbool32_t mask, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f16mf2x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_tamu (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf2x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_tamu_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f16mf2x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_tuma (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf2x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_tuma_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f16mf2x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_tumu (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16mf2x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei16_v_f16mf2x8_tumu_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f16mf2x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_tama (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m1x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_tama_vl31 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f32m1x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_tamu (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m1x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_tamu_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f32m1x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_tuma (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m1x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_tuma_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f32m1x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_tumu (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m1x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei16_v_f32m1x2_tumu_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f32m1x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_tama (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m1x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_tama_vl31 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f32m1x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_tamu (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m1x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_tamu_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f32m1x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_tuma (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m1x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_tuma_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f32m1x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_tumu (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m1x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei16_v_f32m1x3_tumu_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f32m1x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_tama (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m1x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_tama_vl31 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f32m1x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_tamu (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m1x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_tamu_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f32m1x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_tuma (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m1x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_tuma_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f32m1x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_tumu (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m1x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei16_v_f32m1x4_tumu_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f32m1x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_tama (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32m1x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_tama_vl31 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f32m1x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_tamu (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32m1x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_tamu_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f32m1x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_tuma (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32m1x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_tuma_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f32m1x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f32m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_tumu (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f32m1x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f32m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei16_v_f32m1x5_tumu_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg5ei16_v_f32m1x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_tama (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32m1x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_tama_vl31 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f32m1x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_tamu (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32m1x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_tamu_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f32m1x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_tuma (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32m1x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_tuma_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f32m1x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f32m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_tumu (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f32m1x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f32m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei16_v_f32m1x6_tumu_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg6ei16_v_f32m1x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_tama (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32m1x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_tama_vl31 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f32m1x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_tamu (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32m1x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_tamu_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f32m1x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_tuma (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32m1x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_tuma_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f32m1x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f32m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_tumu (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f32m1x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f32m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei16_v_f32m1x7_tumu_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg7ei16_v_f32m1x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_tama (vbool32_t mask, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32m1x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_tama_vl31 (vbool32_t mask, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f32m1x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_tamu (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32m1x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_tamu_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f32m1x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_tuma (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32m1x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_tuma_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f32m1x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f32m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_tumu (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f32m1x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f32m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei16_v_f32m1x8_tumu_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint16mf2_t bindex)
{
  return vluxseg8ei16_v_f32m1x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_tama (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_tama_vl31 (vbool32_t mask, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f64m2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_tamu (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_tamu_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f64m2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_tuma (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_tuma_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f64m2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_tumu (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei16_v_f64m2x2_tumu_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg2ei16_v_f64m2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_tama (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_tama_vl31 (vbool32_t mask, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f64m2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_tamu (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_tamu_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f64m2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_tuma (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_tuma_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f64m2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f64m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_tumu (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f64m2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f64m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei16_v_f64m2x3_tumu_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg3ei16_v_f64m2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_tama (vbool32_t mask, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_tama_vl31 (vbool32_t mask, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f64m2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_tamu (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_tamu_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f64m2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_tuma (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_tuma_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f64m2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f64m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_tumu (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f64m2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f64m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei16_v_f64m2x4_tumu_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint16mf2_t bindex)
{
  return vluxseg4ei16_v_f64m2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_tama (vbool16_t mask, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m1x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_tama_vl31 (vbool16_t mask, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f16m1x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_tamu (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m1x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_tamu_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f16m1x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_tuma (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m1x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_tuma_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f16m1x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_tumu (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m1x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei16_v_f16m1x2_tumu_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f16m1x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_tama (vbool16_t mask, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m1x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_tama_vl31 (vbool16_t mask, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f16m1x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_tamu (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m1x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_tamu_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f16m1x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_tuma (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m1x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_tuma_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f16m1x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_tumu (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m1x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei16_v_f16m1x3_tumu_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f16m1x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_tama (vbool16_t mask, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m1x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_tama_vl31 (vbool16_t mask, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f16m1x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_tamu (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m1x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_tamu_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f16m1x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_tuma (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m1x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_tuma_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f16m1x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_tumu (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m1x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei16_v_f16m1x4_tumu_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f16m1x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_tama (vbool16_t mask, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16m1x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_tama_vl31 (vbool16_t mask, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_f16m1x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_tamu (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16m1x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_tamu_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_f16m1x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_tuma (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16m1x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_tuma_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_f16m1x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei16_v_f16m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_tumu (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg5ei16_v_f16m1x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei16_v_f16m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei16_v_f16m1x5_tumu_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg5ei16_v_f16m1x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_tama (vbool16_t mask, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16m1x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_tama_vl31 (vbool16_t mask, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_f16m1x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_tamu (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16m1x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_tamu_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_f16m1x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_tuma (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16m1x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_tuma_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_f16m1x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei16_v_f16m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_tumu (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg6ei16_v_f16m1x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei16_v_f16m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei16_v_f16m1x6_tumu_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg6ei16_v_f16m1x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_tama (vbool16_t mask, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16m1x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_tama_vl31 (vbool16_t mask, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_f16m1x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_tamu (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16m1x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_tamu_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_f16m1x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_tuma (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16m1x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_tuma_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_f16m1x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei16_v_f16m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_tumu (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg7ei16_v_f16m1x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei16_v_f16m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei16_v_f16m1x7_tumu_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg7ei16_v_f16m1x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_tama (vbool16_t mask, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16m1x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_tama_vl31 (vbool16_t mask, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_f16m1x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_tamu (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16m1x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_tamu_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_f16m1x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_tuma (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16m1x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_tuma_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_f16m1x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei16_v_f16m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_tumu (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg8ei16_v_f16m1x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei16_v_f16m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei16_v_f16m1x8_tumu_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint16m1_t bindex)
{
  return vluxseg8ei16_v_f16m1x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_tama (vbool16_t mask, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_tama_vl31 (vbool16_t mask, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f32m2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_tamu (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_tamu_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f32m2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_tuma (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_tuma_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f32m2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_tumu (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei16_v_f32m2x2_tumu_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f32m2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_tama (vbool16_t mask, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_tama_vl31 (vbool16_t mask, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f32m2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_tamu (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_tamu_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f32m2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_tuma (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_tuma_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f32m2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f32m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_tumu (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f32m2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f32m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei16_v_f32m2x3_tumu_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg3ei16_v_f32m2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_tama (vbool16_t mask, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_tama_vl31 (vbool16_t mask, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f32m2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_tamu (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_tamu_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f32m2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_tuma (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_tuma_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f32m2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f32m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_tumu (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f32m2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f32m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei16_v_f32m2x4_tumu_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint16m1_t bindex)
{
  return vluxseg4ei16_v_f32m2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_tama (vbool16_t mask, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_tama_vl31 (vbool16_t mask, float64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f64m4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_tamu (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_tamu_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f64m4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_tuma (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_tuma_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f64m4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f64m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_tumu (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f64m4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f64m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei16_v_f64m4x2_tumu_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint16m1_t bindex)
{
  return vluxseg2ei16_v_f64m4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_tama (vbool8_t mask, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_tama_vl31 (vbool8_t mask, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f16m2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_tamu (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_tamu_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f16m2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_tuma (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_tuma_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f16m2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_tumu (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei16_v_f16m2x2_tumu_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f16m2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_tama (vbool8_t mask, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_tama_vl31 (vbool8_t mask, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_f16m2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_tamu (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_tamu_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_f16m2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_tuma (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_tuma_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_f16m2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei16_v_f16m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_tumu (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg3ei16_v_f16m2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei16_v_f16m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei16_v_f16m2x3_tumu_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg3ei16_v_f16m2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_tama (vbool8_t mask, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_tama_vl31 (vbool8_t mask, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_f16m2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_tamu (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_tamu_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_f16m2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_tuma (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_tuma_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_f16m2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei16_v_f16m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_tumu (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg4ei16_v_f16m2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei16_v_f16m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei16_v_f16m2x4_tumu_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint16m2_t bindex)
{
  return vluxseg4ei16_v_f16m2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_tama (vbool8_t mask, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_tama_vl31 (vbool8_t mask, float32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f32m4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_tamu (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_tamu_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f32m4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_tuma (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_tuma_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f32m4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f32m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_tumu (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f32m4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f32m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei16_v_f32m4x2_tumu_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint16m2_t bindex)
{
  return vluxseg2ei16_v_f32m4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_tama (vbool4_t mask, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_tama_vl31 (vbool4_t mask, float16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_f16m4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_tamu (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_tamu_vl31 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_f16m4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_tuma (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_tuma_vl31 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_f16m4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei16_v_f16m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_tumu (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint16m4_t bindex, size_t vl)
{
  return vluxseg2ei16_v_f16m4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei16_v_f16m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei16_v_f16m4x2_tumu_vl31 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint16m4_t bindex)
{
  return vluxseg2ei16_v_f16m4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16mf4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_tama (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16mf4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_tama_vl31 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f16mf4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_tamu (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16mf4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_tamu_vl31 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f16mf4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_tuma (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16mf4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_tuma_vl31 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f16mf4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_tumu (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16mf4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei32_v_f16mf4x2_tumu_vl31 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f16mf4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16mf4x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_tama (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf4x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16mf4x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_tama_vl31 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f16mf4x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_tamu (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf4x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16mf4x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_tamu_vl31 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f16mf4x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16mf4x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_tuma (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf4x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16mf4x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_tuma_vl31 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f16mf4x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16mf4x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_tumu (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf4x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16mf4x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei32_v_f16mf4x3_tumu_vl31 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f16mf4x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16mf4x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_tama (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf4x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16mf4x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_tama_vl31 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f16mf4x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16mf4x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_tamu (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf4x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16mf4x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_tamu_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f16mf4x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16mf4x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_tuma (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf4x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16mf4x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_tuma_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f16mf4x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16mf4x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_tumu (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf4x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16mf4x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei32_v_f16mf4x4_tumu_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f16mf4x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16mf4x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_tama (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf4x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16mf4x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_tama_vl31 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f16mf4x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_tamu (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf4x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16mf4x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_tamu_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f16mf4x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_tuma (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf4x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16mf4x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_tuma_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f16mf4x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_tumu (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf4x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16mf4x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei32_v_f16mf4x5_tumu_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f16mf4x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16mf4x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_tama (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf4x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16mf4x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_tama_vl31 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f16mf4x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_tamu (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf4x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16mf4x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_tamu_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f16mf4x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_tuma (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf4x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16mf4x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_tuma_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f16mf4x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_tumu (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf4x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16mf4x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei32_v_f16mf4x6_tumu_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f16mf4x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16mf4x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_tama (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf4x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16mf4x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_tama_vl31 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f16mf4x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_tamu (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf4x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16mf4x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_tamu_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f16mf4x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_tuma (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf4x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16mf4x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_tuma_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f16mf4x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_tumu (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf4x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16mf4x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei32_v_f16mf4x7_tumu_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f16mf4x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16mf4x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_tama (vbool64_t mask, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf4x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16mf4x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_tama_vl31 (vbool64_t mask, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f16mf4x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_tamu (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf4x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16mf4x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_tamu_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f16mf4x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_tuma (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf4x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16mf4x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_tuma_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f16mf4x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_tumu (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf4x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16mf4x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei32_v_f16mf4x8_tumu_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f16mf4x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_tama (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32mf2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32mf2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_tama_vl31 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f32mf2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_tamu (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32mf2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32mf2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_tamu_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f32mf2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_tuma (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32mf2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32mf2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_tuma_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f32mf2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_tumu (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32mf2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32mf2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei32_v_f32mf2x2_tumu_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f32mf2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_tama (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32mf2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32mf2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_tama_vl31 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f32mf2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_tamu (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32mf2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32mf2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_tamu_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f32mf2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_tuma (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32mf2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32mf2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_tuma_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f32mf2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_tumu (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32mf2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32mf2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei32_v_f32mf2x3_tumu_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f32mf2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_tama (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32mf2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32mf2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_tama_vl31 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f32mf2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_tamu (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32mf2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32mf2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_tamu_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f32mf2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_tuma (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32mf2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32mf2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_tuma_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f32mf2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_tumu (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32mf2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32mf2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei32_v_f32mf2x4_tumu_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f32mf2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f32mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_tama (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32mf2x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f32mf2x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_tama_vl31 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f32mf2x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f32mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_tamu (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32mf2x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f32mf2x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_tamu_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f32mf2x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f32mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_tuma (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32mf2x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f32mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_tuma_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f32mf2x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f32mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_tumu (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32mf2x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f32mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei32_v_f32mf2x5_tumu_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f32mf2x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f32mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_tama (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32mf2x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f32mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_tama_vl31 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f32mf2x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f32mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_tamu (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32mf2x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f32mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_tamu_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f32mf2x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f32mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_tuma (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32mf2x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f32mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_tuma_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f32mf2x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f32mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_tumu (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32mf2x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f32mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei32_v_f32mf2x6_tumu_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f32mf2x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f32mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_tama (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32mf2x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f32mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_tama_vl31 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f32mf2x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f32mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_tamu (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32mf2x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f32mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_tamu_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f32mf2x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f32mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_tuma (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32mf2x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f32mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_tuma_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f32mf2x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f32mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_tumu (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32mf2x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f32mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei32_v_f32mf2x7_tumu_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f32mf2x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f32mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_tama (vbool64_t mask, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32mf2x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f32mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_tama_vl31 (vbool64_t mask, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f32mf2x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f32mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_tamu (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32mf2x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f32mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_tamu_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f32mf2x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f32mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_tuma (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32mf2x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f32mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_tuma_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f32mf2x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f32mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_tumu (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32mf2x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f32mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei32_v_f32mf2x8_tumu_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f32mf2x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_tama (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m1x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_tama_vl31 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f64m1x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_tamu (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m1x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_tamu_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f64m1x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_tuma (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m1x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_tuma_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f64m1x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_tumu (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m1x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei32_v_f64m1x2_tumu_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg2ei32_v_f64m1x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f64m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_tama (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m1x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f64m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_tama_vl31 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f64m1x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f64m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_tamu (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m1x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f64m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_tamu_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f64m1x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f64m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_tuma (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m1x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f64m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_tuma_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f64m1x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f64m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_tumu (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m1x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f64m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei32_v_f64m1x3_tumu_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg3ei32_v_f64m1x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f64m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_tama (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m1x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f64m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_tama_vl31 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f64m1x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f64m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_tamu (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m1x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f64m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_tamu_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f64m1x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f64m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_tuma (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m1x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f64m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_tuma_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f64m1x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f64m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_tumu (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m1x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f64m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei32_v_f64m1x4_tumu_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg4ei32_v_f64m1x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f64m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_tama (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f64m1x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f64m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_tama_vl31 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f64m1x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f64m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_tamu (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f64m1x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f64m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_tamu_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f64m1x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f64m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_tuma (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f64m1x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f64m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_tuma_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f64m1x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f64m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_tumu (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f64m1x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f64m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei32_v_f64m1x5_tumu_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg5ei32_v_f64m1x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f64m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_tama (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f64m1x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f64m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_tama_vl31 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f64m1x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f64m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_tamu (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f64m1x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f64m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_tamu_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f64m1x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f64m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_tuma (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f64m1x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f64m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_tuma_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f64m1x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f64m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_tumu (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f64m1x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f64m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei32_v_f64m1x6_tumu_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg6ei32_v_f64m1x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f64m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_tama (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f64m1x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f64m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_tama_vl31 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f64m1x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f64m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_tamu (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f64m1x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f64m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_tamu_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f64m1x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f64m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_tuma (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f64m1x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f64m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_tuma_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f64m1x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f64m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_tumu (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f64m1x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f64m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei32_v_f64m1x7_tumu_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg7ei32_v_f64m1x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f64m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_tama (vbool64_t mask, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f64m1x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f64m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_tama_vl31 (vbool64_t mask, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f64m1x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f64m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_tamu (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f64m1x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f64m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_tamu_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f64m1x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f64m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_tuma (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f64m1x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f64m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_tuma_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f64m1x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f64m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_tumu (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint32mf2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f64m1x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f64m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei32_v_f64m1x8_tumu_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint32mf2_t bindex)
{
  return vluxseg8ei32_v_f64m1x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_tama (vbool32_t mask, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16mf2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_tama_vl31 (vbool32_t mask, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f16mf2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_tamu (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16mf2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_tamu_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f16mf2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_tuma (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16mf2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_tuma_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f16mf2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_tumu (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16mf2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16mf2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei32_v_f16mf2x2_tumu_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f16mf2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_tama (vbool32_t mask, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16mf2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_tama_vl31 (vbool32_t mask, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f16mf2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_tamu (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16mf2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_tamu_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f16mf2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_tuma (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16mf2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_tuma_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f16mf2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_tumu (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16mf2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16mf2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei32_v_f16mf2x3_tumu_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f16mf2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_tama (vbool32_t mask, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16mf2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_tama_vl31 (vbool32_t mask, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f16mf2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_tamu (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16mf2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_tamu_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f16mf2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_tuma (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16mf2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_tuma_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f16mf2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_tumu (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16mf2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16mf2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei32_v_f16mf2x4_tumu_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f16mf2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_tama (vbool32_t mask, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf2x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16mf2x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_tama_vl31 (vbool32_t mask, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f16mf2x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_tamu (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf2x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16mf2x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_tamu_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f16mf2x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_tuma (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf2x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_tuma_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f16mf2x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_tumu (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16mf2x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei32_v_f16mf2x5_tumu_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f16mf2x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_tama (vbool32_t mask, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf2x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_tama_vl31 (vbool32_t mask, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f16mf2x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_tamu (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf2x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_tamu_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f16mf2x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_tuma (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf2x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_tuma_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f16mf2x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_tumu (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16mf2x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei32_v_f16mf2x6_tumu_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f16mf2x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_tama (vbool32_t mask, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf2x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_tama_vl31 (vbool32_t mask, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f16mf2x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_tamu (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf2x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_tamu_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f16mf2x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_tuma (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf2x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_tuma_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f16mf2x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_tumu (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16mf2x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei32_v_f16mf2x7_tumu_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f16mf2x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_tama (vbool32_t mask, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf2x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_tama_vl31 (vbool32_t mask, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f16mf2x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_tamu (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf2x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_tamu_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f16mf2x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_tuma (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf2x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_tuma_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f16mf2x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_tumu (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16mf2x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei32_v_f16mf2x8_tumu_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f16mf2x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_tama (vbool32_t mask, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m1x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_tama_vl31 (vbool32_t mask, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f32m1x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_tamu (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m1x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_tamu_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f32m1x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_tuma (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m1x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_tuma_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f32m1x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_tumu (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m1x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei32_v_f32m1x2_tumu_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f32m1x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_tama (vbool32_t mask, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m1x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_tama_vl31 (vbool32_t mask, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f32m1x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_tamu (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m1x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_tamu_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f32m1x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_tuma (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m1x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_tuma_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f32m1x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_tumu (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m1x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei32_v_f32m1x3_tumu_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f32m1x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_tama (vbool32_t mask, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m1x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_tama_vl31 (vbool32_t mask, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f32m1x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_tamu (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m1x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_tamu_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f32m1x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_tuma (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m1x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_tuma_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f32m1x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_tumu (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m1x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei32_v_f32m1x4_tumu_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f32m1x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f32m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_tama (vbool32_t mask, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32m1x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f32m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_tama_vl31 (vbool32_t mask, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f32m1x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f32m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_tamu (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32m1x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f32m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_tamu_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f32m1x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f32m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_tuma (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32m1x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f32m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_tuma_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f32m1x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f32m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_tumu (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f32m1x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f32m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei32_v_f32m1x5_tumu_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg5ei32_v_f32m1x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f32m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_tama (vbool32_t mask, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32m1x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f32m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_tama_vl31 (vbool32_t mask, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f32m1x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f32m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_tamu (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32m1x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f32m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_tamu_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f32m1x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f32m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_tuma (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32m1x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f32m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_tuma_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f32m1x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f32m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_tumu (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f32m1x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f32m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei32_v_f32m1x6_tumu_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg6ei32_v_f32m1x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f32m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_tama (vbool32_t mask, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32m1x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f32m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_tama_vl31 (vbool32_t mask, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f32m1x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f32m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_tamu (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32m1x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f32m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_tamu_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f32m1x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f32m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_tuma (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32m1x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f32m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_tuma_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f32m1x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f32m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_tumu (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f32m1x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f32m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei32_v_f32m1x7_tumu_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg7ei32_v_f32m1x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f32m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_tama (vbool32_t mask, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32m1x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f32m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_tama_vl31 (vbool32_t mask, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f32m1x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f32m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_tamu (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32m1x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f32m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_tamu_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f32m1x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f32m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_tuma (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32m1x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f32m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_tuma_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f32m1x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f32m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_tumu (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f32m1x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f32m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei32_v_f32m1x8_tumu_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint32m1_t bindex)
{
  return vluxseg8ei32_v_f32m1x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_tama (vbool32_t mask, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_tama_vl31 (vbool32_t mask, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f64m2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_tamu (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_tamu_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f64m2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_tuma (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_tuma_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f64m2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_tumu (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei32_v_f64m2x2_tumu_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg2ei32_v_f64m2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f64m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_tama (vbool32_t mask, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f64m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_tama_vl31 (vbool32_t mask, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f64m2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f64m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_tamu (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f64m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_tamu_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f64m2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f64m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_tuma (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f64m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_tuma_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f64m2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f64m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_tumu (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f64m2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f64m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei32_v_f64m2x3_tumu_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg3ei32_v_f64m2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f64m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_tama (vbool32_t mask, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f64m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_tama_vl31 (vbool32_t mask, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f64m2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f64m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_tamu (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f64m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_tamu_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f64m2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f64m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_tuma (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f64m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_tuma_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f64m2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f64m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_tumu (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint32m1_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f64m2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f64m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei32_v_f64m2x4_tumu_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint32m1_t bindex)
{
  return vluxseg4ei32_v_f64m2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_tama (vbool16_t mask, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m1x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_tama_vl31 (vbool16_t mask, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f16m1x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_tamu (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m1x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_tamu_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f16m1x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_tuma (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m1x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_tuma_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f16m1x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_tumu (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m1x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei32_v_f16m1x2_tumu_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f16m1x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_tama (vbool16_t mask, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m1x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_tama_vl31 (vbool16_t mask, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f16m1x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_tamu (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m1x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_tamu_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f16m1x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_tuma (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m1x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_tuma_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f16m1x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_tumu (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m1x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei32_v_f16m1x3_tumu_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f16m1x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_tama (vbool16_t mask, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m1x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_tama_vl31 (vbool16_t mask, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f16m1x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_tamu (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m1x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_tamu_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f16m1x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_tuma (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m1x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_tuma_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f16m1x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_tumu (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m1x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei32_v_f16m1x4_tumu_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f16m1x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_tama (vbool16_t mask, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16m1x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_tama_vl31 (vbool16_t mask, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_f16m1x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_tamu (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16m1x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_tamu_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_f16m1x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_tuma (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16m1x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_tuma_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_f16m1x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei32_v_f16m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_tumu (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg5ei32_v_f16m1x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei32_v_f16m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei32_v_f16m1x5_tumu_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg5ei32_v_f16m1x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_tama (vbool16_t mask, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16m1x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_tama_vl31 (vbool16_t mask, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_f16m1x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_tamu (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16m1x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_tamu_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_f16m1x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_tuma (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16m1x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_tuma_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_f16m1x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei32_v_f16m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_tumu (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg6ei32_v_f16m1x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei32_v_f16m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei32_v_f16m1x6_tumu_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg6ei32_v_f16m1x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_tama (vbool16_t mask, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16m1x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_tama_vl31 (vbool16_t mask, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_f16m1x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_tamu (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16m1x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_tamu_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_f16m1x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_tuma (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16m1x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_tuma_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_f16m1x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei32_v_f16m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_tumu (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg7ei32_v_f16m1x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei32_v_f16m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei32_v_f16m1x7_tumu_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg7ei32_v_f16m1x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_tama (vbool16_t mask, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16m1x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_tama_vl31 (vbool16_t mask, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_f16m1x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_tamu (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16m1x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_tamu_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_f16m1x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_tuma (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16m1x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_tuma_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_f16m1x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei32_v_f16m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_tumu (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg8ei32_v_f16m1x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei32_v_f16m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei32_v_f16m1x8_tumu_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint32m2_t bindex)
{
  return vluxseg8ei32_v_f16m1x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_tama (vbool16_t mask, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_tama_vl31 (vbool16_t mask, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f32m2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_tamu (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_tamu_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f32m2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_tuma (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_tuma_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f32m2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_tumu (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei32_v_f32m2x2_tumu_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f32m2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_tama (vbool16_t mask, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_tama_vl31 (vbool16_t mask, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f32m2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_tamu (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_tamu_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f32m2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_tuma (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_tuma_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f32m2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f32m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_tumu (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f32m2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f32m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei32_v_f32m2x3_tumu_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg3ei32_v_f32m2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_tama (vbool16_t mask, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_tama_vl31 (vbool16_t mask, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f32m2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_tamu (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_tamu_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f32m2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_tuma (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_tuma_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f32m2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f32m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_tumu (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f32m2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f32m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei32_v_f32m2x4_tumu_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint32m2_t bindex)
{
  return vluxseg4ei32_v_f32m2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_tama (vbool16_t mask, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_tama_vl31 (vbool16_t mask, float64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f64m4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_tamu (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_tamu_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f64m4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_tuma (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_tuma_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f64m4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f64m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_tumu (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint32m2_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f64m4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f64m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei32_v_f64m4x2_tumu_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint32m2_t bindex)
{
  return vluxseg2ei32_v_f64m4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_tama (vbool8_t mask, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_tama_vl31 (vbool8_t mask, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f16m2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_tamu (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_tamu_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f16m2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_tuma (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_tuma_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f16m2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_tumu (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei32_v_f16m2x2_tumu_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f16m2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_tama (vbool8_t mask, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_tama_vl31 (vbool8_t mask, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_f16m2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_tamu (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_tamu_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_f16m2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_tuma (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_tuma_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_f16m2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei32_v_f16m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_tumu (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg3ei32_v_f16m2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei32_v_f16m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei32_v_f16m2x3_tumu_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg3ei32_v_f16m2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_tama (vbool8_t mask, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_tama_vl31 (vbool8_t mask, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_f16m2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_tamu (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_tamu_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_f16m2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_tuma (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_tuma_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_f16m2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei32_v_f16m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_tumu (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg4ei32_v_f16m2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei32_v_f16m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei32_v_f16m2x4_tumu_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint32m4_t bindex)
{
  return vluxseg4ei32_v_f16m2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_tama (vbool8_t mask, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_tama_vl31 (vbool8_t mask, float32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f32m4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_tamu (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_tamu_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f32m4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_tuma (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_tuma_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f32m4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f32m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_tumu (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint32m4_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f32m4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f32m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei32_v_f32m4x2_tumu_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint32m4_t bindex)
{
  return vluxseg2ei32_v_f32m4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_tama (vbool4_t mask, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_tama_vl31 (vbool4_t mask, float16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_f16m4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_tamu (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_tamu_vl31 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_f16m4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_tuma (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_tuma_vl31 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_f16m4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei32_v_f16m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_tumu (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint32m8_t bindex, size_t vl)
{
  return vluxseg2ei32_v_f16m4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei32_v_f16m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m4x2_t
test_vluxseg2ei32_v_f16m4x2_tumu_vl31 (vbool4_t mask, vfloat16m4x2_t dest, float16_t *base, vuint32m8_t bindex)
{
  return vluxseg2ei32_v_f16m4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16mf4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_tama (vbool64_t mask, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16mf4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_tama_vl31 (vbool64_t mask, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f16mf4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_tamu (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16mf4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_tamu_vl31 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f16mf4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_tuma (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16mf4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_tuma_vl31 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f16mf4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_tumu (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16mf4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x2_t
test_vluxseg2ei64_v_f16mf4x2_tumu_vl31 (vbool64_t mask, vfloat16mf4x2_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f16mf4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16mf4x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_tama (vbool64_t mask, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf4x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16mf4x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_tama_vl31 (vbool64_t mask, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f16mf4x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_tamu (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf4x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16mf4x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_tamu_vl31 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f16mf4x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16mf4x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_tuma (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf4x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16mf4x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_tuma_vl31 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f16mf4x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16mf4x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_tumu (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf4x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16mf4x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x3_t
test_vluxseg3ei64_v_f16mf4x3_tumu_vl31 (vbool64_t mask, vfloat16mf4x3_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f16mf4x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16mf4x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_tama (vbool64_t mask, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf4x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16mf4x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_tama_vl31 (vbool64_t mask, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f16mf4x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16mf4x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_tamu (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf4x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16mf4x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_tamu_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f16mf4x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16mf4x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_tuma (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf4x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16mf4x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_tuma_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f16mf4x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16mf4x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_tumu (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf4x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16mf4x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x4_t
test_vluxseg4ei64_v_f16mf4x4_tumu_vl31 (vbool64_t mask, vfloat16mf4x4_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f16mf4x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16mf4x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_tama (vbool64_t mask, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf4x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16mf4x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_tama_vl31 (vbool64_t mask, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f16mf4x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16mf4x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_tamu (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf4x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16mf4x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_tamu_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f16mf4x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16mf4x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_tuma (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf4x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16mf4x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_tuma_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f16mf4x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16mf4x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_tumu (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf4x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16mf4x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x5_t
test_vluxseg5ei64_v_f16mf4x5_tumu_vl31 (vbool64_t mask, vfloat16mf4x5_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f16mf4x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16mf4x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_tama (vbool64_t mask, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf4x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16mf4x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_tama_vl31 (vbool64_t mask, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f16mf4x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16mf4x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_tamu (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf4x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16mf4x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_tamu_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f16mf4x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16mf4x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_tuma (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf4x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16mf4x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_tuma_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f16mf4x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16mf4x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_tumu (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf4x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16mf4x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x6_t
test_vluxseg6ei64_v_f16mf4x6_tumu_vl31 (vbool64_t mask, vfloat16mf4x6_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f16mf4x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16mf4x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_tama (vbool64_t mask, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf4x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16mf4x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_tama_vl31 (vbool64_t mask, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f16mf4x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16mf4x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_tamu (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf4x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16mf4x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_tamu_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f16mf4x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16mf4x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_tuma (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf4x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16mf4x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_tuma_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f16mf4x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16mf4x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_tumu (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf4x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16mf4x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x7_t
test_vluxseg7ei64_v_f16mf4x7_tumu_vl31 (vbool64_t mask, vfloat16mf4x7_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f16mf4x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16mf4x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_tama (vbool64_t mask, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf4x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16mf4x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_tama_vl31 (vbool64_t mask, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f16mf4x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16mf4x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_tamu (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf4x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16mf4x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_tamu_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f16mf4x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16mf4x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_tuma (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf4x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16mf4x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_tuma_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f16mf4x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16mf4x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_tumu (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf4x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16mf4x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf4x8_t
test_vluxseg8ei64_v_f16mf4x8_tumu_vl31 (vbool64_t mask, vfloat16mf4x8_t dest, float16_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f16mf4x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_tama (vbool64_t mask, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32mf2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32mf2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_tama_vl31 (vbool64_t mask, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f32mf2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_tamu (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32mf2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32mf2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_tamu_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f32mf2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_tuma (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32mf2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32mf2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_tuma_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f32mf2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_tumu (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32mf2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32mf2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x2_t
test_vluxseg2ei64_v_f32mf2x2_tumu_vl31 (vbool64_t mask, vfloat32mf2x2_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f32mf2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_tama (vbool64_t mask, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32mf2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32mf2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_tama_vl31 (vbool64_t mask, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f32mf2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_tamu (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32mf2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32mf2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_tamu_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f32mf2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_tuma (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32mf2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32mf2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_tuma_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f32mf2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_tumu (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32mf2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32mf2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x3_t
test_vluxseg3ei64_v_f32mf2x3_tumu_vl31 (vbool64_t mask, vfloat32mf2x3_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f32mf2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_tama (vbool64_t mask, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32mf2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32mf2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_tama_vl31 (vbool64_t mask, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f32mf2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_tamu (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32mf2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32mf2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_tamu_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f32mf2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_tuma (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32mf2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32mf2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_tuma_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f32mf2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_tumu (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32mf2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32mf2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x4_t
test_vluxseg4ei64_v_f32mf2x4_tumu_vl31 (vbool64_t mask, vfloat32mf2x4_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f32mf2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f32mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_tama (vbool64_t mask, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32mf2x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f32mf2x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_tama_vl31 (vbool64_t mask, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f32mf2x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f32mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_tamu (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32mf2x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f32mf2x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_tamu_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f32mf2x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f32mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_tuma (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32mf2x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f32mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_tuma_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f32mf2x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f32mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_tumu (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32mf2x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f32mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x5_t
test_vluxseg5ei64_v_f32mf2x5_tumu_vl31 (vbool64_t mask, vfloat32mf2x5_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f32mf2x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f32mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_tama (vbool64_t mask, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32mf2x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f32mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_tama_vl31 (vbool64_t mask, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f32mf2x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f32mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_tamu (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32mf2x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f32mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_tamu_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f32mf2x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f32mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_tuma (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32mf2x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f32mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_tuma_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f32mf2x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f32mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_tumu (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32mf2x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f32mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x6_t
test_vluxseg6ei64_v_f32mf2x6_tumu_vl31 (vbool64_t mask, vfloat32mf2x6_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f32mf2x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f32mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_tama (vbool64_t mask, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32mf2x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f32mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_tama_vl31 (vbool64_t mask, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f32mf2x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f32mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_tamu (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32mf2x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f32mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_tamu_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f32mf2x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f32mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_tuma (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32mf2x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f32mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_tuma_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f32mf2x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f32mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_tumu (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32mf2x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f32mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x7_t
test_vluxseg7ei64_v_f32mf2x7_tumu_vl31 (vbool64_t mask, vfloat32mf2x7_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f32mf2x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f32mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_tama (vbool64_t mask, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32mf2x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f32mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_tama_vl31 (vbool64_t mask, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f32mf2x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f32mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_tamu (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32mf2x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f32mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_tamu_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f32mf2x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f32mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_tuma (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32mf2x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f32mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_tuma_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f32mf2x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f32mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_tumu (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32mf2x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f32mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2x8_t
test_vluxseg8ei64_v_f32mf2x8_tumu_vl31 (vbool64_t mask, vfloat32mf2x8_t dest, float32_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f32mf2x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_tama (vbool64_t mask, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m1x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_tama_vl31 (vbool64_t mask, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f64m1x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_tamu (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m1x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_tamu_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f64m1x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_tuma (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m1x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_tuma_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f64m1x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_tumu (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m1x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x2_t
test_vluxseg2ei64_v_f64m1x2_tumu_vl31 (vbool64_t mask, vfloat64m1x2_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg2ei64_v_f64m1x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f64m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_tama (vbool64_t mask, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m1x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f64m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_tama_vl31 (vbool64_t mask, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f64m1x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f64m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_tamu (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m1x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f64m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_tamu_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f64m1x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f64m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_tuma (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m1x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f64m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_tuma_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f64m1x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f64m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_tumu (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m1x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f64m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x3_t
test_vluxseg3ei64_v_f64m1x3_tumu_vl31 (vbool64_t mask, vfloat64m1x3_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg3ei64_v_f64m1x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f64m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_tama (vbool64_t mask, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m1x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f64m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_tama_vl31 (vbool64_t mask, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f64m1x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f64m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_tamu (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m1x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f64m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_tamu_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f64m1x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f64m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_tuma (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m1x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f64m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_tuma_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f64m1x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f64m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_tumu (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m1x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f64m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x4_t
test_vluxseg4ei64_v_f64m1x4_tumu_vl31 (vbool64_t mask, vfloat64m1x4_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg4ei64_v_f64m1x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f64m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_tama (vbool64_t mask, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f64m1x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f64m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_tama_vl31 (vbool64_t mask, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f64m1x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f64m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_tamu (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f64m1x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f64m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_tamu_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f64m1x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f64m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_tuma (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f64m1x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f64m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_tuma_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f64m1x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f64m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_tumu (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f64m1x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f64m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x5_t
test_vluxseg5ei64_v_f64m1x5_tumu_vl31 (vbool64_t mask, vfloat64m1x5_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg5ei64_v_f64m1x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f64m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_tama (vbool64_t mask, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f64m1x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f64m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_tama_vl31 (vbool64_t mask, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f64m1x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f64m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_tamu (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f64m1x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f64m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_tamu_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f64m1x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f64m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_tuma (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f64m1x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f64m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_tuma_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f64m1x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f64m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_tumu (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f64m1x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f64m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x6_t
test_vluxseg6ei64_v_f64m1x6_tumu_vl31 (vbool64_t mask, vfloat64m1x6_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg6ei64_v_f64m1x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f64m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_tama (vbool64_t mask, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f64m1x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f64m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_tama_vl31 (vbool64_t mask, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f64m1x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f64m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_tamu (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f64m1x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f64m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_tamu_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f64m1x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f64m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_tuma (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f64m1x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f64m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_tuma_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f64m1x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f64m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_tumu (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f64m1x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f64m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x7_t
test_vluxseg7ei64_v_f64m1x7_tumu_vl31 (vbool64_t mask, vfloat64m1x7_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg7ei64_v_f64m1x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f64m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_tama (vbool64_t mask, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f64m1x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f64m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_tama_vl31 (vbool64_t mask, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f64m1x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f64m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_tamu (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f64m1x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f64m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_tamu_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f64m1x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f64m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_tuma (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f64m1x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f64m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_tuma_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f64m1x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f64m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_tumu (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint64m1_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f64m1x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f64m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1x8_t
test_vluxseg8ei64_v_f64m1x8_tumu_vl31 (vbool64_t mask, vfloat64m1x8_t dest, float64_t *base, vuint64m1_t bindex)
{
  return vluxseg8ei64_v_f64m1x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16mf2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_tama (vbool32_t mask, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16mf2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_tama_vl31 (vbool32_t mask, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f16mf2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16mf2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_tamu (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16mf2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_tamu_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f16mf2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16mf2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_tuma (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16mf2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_tuma_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f16mf2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16mf2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_tumu (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16mf2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16mf2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x2_t
test_vluxseg2ei64_v_f16mf2x2_tumu_vl31 (vbool32_t mask, vfloat16mf2x2_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f16mf2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16mf2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_tama (vbool32_t mask, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16mf2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_tama_vl31 (vbool32_t mask, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f16mf2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16mf2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_tamu (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16mf2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_tamu_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f16mf2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16mf2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_tuma (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16mf2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_tuma_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f16mf2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16mf2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_tumu (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16mf2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16mf2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x3_t
test_vluxseg3ei64_v_f16mf2x3_tumu_vl31 (vbool32_t mask, vfloat16mf2x3_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f16mf2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16mf2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_tama (vbool32_t mask, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16mf2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_tama_vl31 (vbool32_t mask, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f16mf2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16mf2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_tamu (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16mf2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_tamu_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f16mf2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16mf2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_tuma (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16mf2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_tuma_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f16mf2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16mf2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_tumu (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16mf2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16mf2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x4_t
test_vluxseg4ei64_v_f16mf2x4_tumu_vl31 (vbool32_t mask, vfloat16mf2x4_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f16mf2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16mf2x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_tama (vbool32_t mask, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf2x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16mf2x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_tama_vl31 (vbool32_t mask, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f16mf2x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16mf2x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_tamu (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf2x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16mf2x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_tamu_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f16mf2x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16mf2x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_tuma (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf2x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16mf2x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_tuma_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f16mf2x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16mf2x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_tumu (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16mf2x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16mf2x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x5_t
test_vluxseg5ei64_v_f16mf2x5_tumu_vl31 (vbool32_t mask, vfloat16mf2x5_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f16mf2x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16mf2x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_tama (vbool32_t mask, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf2x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16mf2x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_tama_vl31 (vbool32_t mask, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f16mf2x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16mf2x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_tamu (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf2x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16mf2x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_tamu_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f16mf2x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16mf2x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_tuma (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf2x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16mf2x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_tuma_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f16mf2x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16mf2x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_tumu (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16mf2x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16mf2x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x6_t
test_vluxseg6ei64_v_f16mf2x6_tumu_vl31 (vbool32_t mask, vfloat16mf2x6_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f16mf2x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16mf2x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_tama (vbool32_t mask, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf2x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16mf2x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_tama_vl31 (vbool32_t mask, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f16mf2x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16mf2x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_tamu (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf2x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16mf2x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_tamu_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f16mf2x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16mf2x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_tuma (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf2x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16mf2x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_tuma_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f16mf2x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16mf2x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_tumu (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16mf2x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16mf2x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x7_t
test_vluxseg7ei64_v_f16mf2x7_tumu_vl31 (vbool32_t mask, vfloat16mf2x7_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f16mf2x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16mf2x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_tama (vbool32_t mask, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf2x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16mf2x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_tama_vl31 (vbool32_t mask, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f16mf2x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16mf2x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_tamu (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf2x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16mf2x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_tamu_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f16mf2x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16mf2x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_tuma (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf2x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16mf2x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_tuma_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f16mf2x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16mf2x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_tumu (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16mf2x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16mf2x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat16mf2x8_t
test_vluxseg8ei64_v_f16mf2x8_tumu_vl31 (vbool32_t mask, vfloat16mf2x8_t dest, float16_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f16mf2x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_tama (vbool32_t mask, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m1x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_tama_vl31 (vbool32_t mask, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f32m1x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_tamu (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m1x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_tamu_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f32m1x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_tuma (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m1x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_tuma_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f32m1x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_tumu (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m1x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x2_t
test_vluxseg2ei64_v_f32m1x2_tumu_vl31 (vbool32_t mask, vfloat32m1x2_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f32m1x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_tama (vbool32_t mask, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m1x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_tama_vl31 (vbool32_t mask, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f32m1x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_tamu (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m1x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_tamu_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f32m1x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_tuma (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m1x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_tuma_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f32m1x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_tumu (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m1x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x3_t
test_vluxseg3ei64_v_f32m1x3_tumu_vl31 (vbool32_t mask, vfloat32m1x3_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f32m1x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_tama (vbool32_t mask, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m1x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_tama_vl31 (vbool32_t mask, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f32m1x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_tamu (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m1x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_tamu_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f32m1x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_tuma (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m1x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_tuma_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f32m1x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_tumu (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m1x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x4_t
test_vluxseg4ei64_v_f32m1x4_tumu_vl31 (vbool32_t mask, vfloat32m1x4_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f32m1x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f32m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_tama (vbool32_t mask, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32m1x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f32m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_tama_vl31 (vbool32_t mask, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f32m1x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f32m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_tamu (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32m1x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f32m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_tamu_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f32m1x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f32m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_tuma (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32m1x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f32m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_tuma_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f32m1x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f32m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_tumu (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f32m1x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f32m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x5_t
test_vluxseg5ei64_v_f32m1x5_tumu_vl31 (vbool32_t mask, vfloat32m1x5_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg5ei64_v_f32m1x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f32m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_tama (vbool32_t mask, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32m1x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f32m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_tama_vl31 (vbool32_t mask, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f32m1x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f32m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_tamu (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32m1x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f32m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_tamu_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f32m1x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f32m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_tuma (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32m1x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f32m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_tuma_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f32m1x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f32m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_tumu (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f32m1x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f32m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x6_t
test_vluxseg6ei64_v_f32m1x6_tumu_vl31 (vbool32_t mask, vfloat32m1x6_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg6ei64_v_f32m1x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f32m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_tama (vbool32_t mask, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32m1x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f32m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_tama_vl31 (vbool32_t mask, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f32m1x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f32m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_tamu (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32m1x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f32m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_tamu_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f32m1x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f32m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_tuma (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32m1x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f32m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_tuma_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f32m1x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f32m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_tumu (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f32m1x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f32m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x7_t
test_vluxseg7ei64_v_f32m1x7_tumu_vl31 (vbool32_t mask, vfloat32m1x7_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg7ei64_v_f32m1x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f32m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_tama (vbool32_t mask, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32m1x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f32m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_tama_vl31 (vbool32_t mask, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f32m1x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f32m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_tamu (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32m1x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f32m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_tamu_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f32m1x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f32m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_tuma (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32m1x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f32m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_tuma_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f32m1x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f32m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_tumu (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f32m1x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f32m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1x8_t
test_vluxseg8ei64_v_f32m1x8_tumu_vl31 (vbool32_t mask, vfloat32m1x8_t dest, float32_t *base, vuint64m2_t bindex)
{
  return vluxseg8ei64_v_f32m1x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_tama (vbool32_t mask, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_tama_vl31 (vbool32_t mask, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f64m2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_tamu (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_tamu_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f64m2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_tuma (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_tuma_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f64m2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_tumu (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x2_t
test_vluxseg2ei64_v_f64m2x2_tumu_vl31 (vbool32_t mask, vfloat64m2x2_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg2ei64_v_f64m2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f64m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_tama (vbool32_t mask, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f64m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_tama_vl31 (vbool32_t mask, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f64m2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f64m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_tamu (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f64m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_tamu_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f64m2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f64m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_tuma (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f64m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_tuma_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f64m2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f64m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_tumu (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f64m2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f64m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x3_t
test_vluxseg3ei64_v_f64m2x3_tumu_vl31 (vbool32_t mask, vfloat64m2x3_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg3ei64_v_f64m2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f64m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_tama (vbool32_t mask, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f64m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_tama_vl31 (vbool32_t mask, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f64m2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f64m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_tamu (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f64m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_tamu_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f64m2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f64m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_tuma (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f64m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_tuma_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f64m2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f64m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_tumu (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint64m2_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f64m2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f64m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2x4_t
test_vluxseg4ei64_v_f64m2x4_tumu_vl31 (vbool32_t mask, vfloat64m2x4_t dest, float64_t *base, vuint64m2_t bindex)
{
  return vluxseg4ei64_v_f64m2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16m1x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_tama (vbool16_t mask, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m1x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16m1x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_tama_vl31 (vbool16_t mask, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f16m1x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16m1x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_tamu (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m1x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16m1x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_tamu_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f16m1x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16m1x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_tuma (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m1x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16m1x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_tuma_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f16m1x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16m1x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_tumu (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m1x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16m1x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x2_t
test_vluxseg2ei64_v_f16m1x2_tumu_vl31 (vbool16_t mask, vfloat16m1x2_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f16m1x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16m1x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_tama (vbool16_t mask, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m1x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16m1x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_tama_vl31 (vbool16_t mask, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f16m1x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16m1x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_tamu (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m1x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16m1x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_tamu_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f16m1x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16m1x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_tuma (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m1x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16m1x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_tuma_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f16m1x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16m1x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_tumu (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m1x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16m1x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x3_t
test_vluxseg3ei64_v_f16m1x3_tumu_vl31 (vbool16_t mask, vfloat16m1x3_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f16m1x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16m1x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_tama (vbool16_t mask, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m1x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16m1x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_tama_vl31 (vbool16_t mask, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f16m1x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16m1x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_tamu (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m1x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16m1x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_tamu_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f16m1x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16m1x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_tuma (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m1x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16m1x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_tuma_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f16m1x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16m1x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_tumu (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m1x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16m1x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x4_t
test_vluxseg4ei64_v_f16m1x4_tumu_vl31 (vbool16_t mask, vfloat16m1x4_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f16m1x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16m1x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_tama (vbool16_t mask, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16m1x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16m1x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_tama_vl31 (vbool16_t mask, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_f16m1x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16m1x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_tamu (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16m1x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16m1x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_tamu_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_f16m1x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16m1x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_tuma (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16m1x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16m1x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_tuma_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_f16m1x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei64_v_f16m1x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_tumu (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg5ei64_v_f16m1x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei64_v_f16m1x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg5ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x5_t
test_vluxseg5ei64_v_f16m1x5_tumu_vl31 (vbool16_t mask, vfloat16m1x5_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg5ei64_v_f16m1x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16m1x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_tama (vbool16_t mask, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16m1x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16m1x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_tama_vl31 (vbool16_t mask, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_f16m1x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16m1x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_tamu (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16m1x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16m1x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_tamu_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_f16m1x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16m1x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_tuma (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16m1x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16m1x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_tuma_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_f16m1x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei64_v_f16m1x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_tumu (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg6ei64_v_f16m1x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei64_v_f16m1x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg6ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x6_t
test_vluxseg6ei64_v_f16m1x6_tumu_vl31 (vbool16_t mask, vfloat16m1x6_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg6ei64_v_f16m1x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16m1x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_tama (vbool16_t mask, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16m1x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16m1x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_tama_vl31 (vbool16_t mask, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_f16m1x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16m1x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_tamu (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16m1x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16m1x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_tamu_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_f16m1x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16m1x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_tuma (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16m1x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16m1x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_tuma_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_f16m1x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei64_v_f16m1x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_tumu (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg7ei64_v_f16m1x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei64_v_f16m1x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg7ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x7_t
test_vluxseg7ei64_v_f16m1x7_tumu_vl31 (vbool16_t mask, vfloat16m1x7_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg7ei64_v_f16m1x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16m1x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_tama (vbool16_t mask, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16m1x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16m1x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_tama_vl31 (vbool16_t mask, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_f16m1x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16m1x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_tamu (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16m1x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16m1x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_tamu_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_f16m1x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16m1x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_tuma (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16m1x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16m1x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_tuma_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_f16m1x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei64_v_f16m1x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_tumu (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg8ei64_v_f16m1x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei64_v_f16m1x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vluxseg8ei64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat16m1x8_t
test_vluxseg8ei64_v_f16m1x8_tumu_vl31 (vbool16_t mask, vfloat16m1x8_t dest, float16_t *base, vuint64m4_t bindex)
{
  return vluxseg8ei64_v_f16m1x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_tama (vbool16_t mask, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_tama_vl31 (vbool16_t mask, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f32m2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_tamu (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_tamu_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f32m2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_tuma (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_tuma_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f32m2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_tumu (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x2_t
test_vluxseg2ei64_v_f32m2x2_tumu_vl31 (vbool16_t mask, vfloat32m2x2_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f32m2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_tama (vbool16_t mask, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_tama_vl31 (vbool16_t mask, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f32m2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_tamu (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_tamu_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f32m2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_tuma (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_tuma_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f32m2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f32m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_tumu (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f32m2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f32m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x3_t
test_vluxseg3ei64_v_f32m2x3_tumu_vl31 (vbool16_t mask, vfloat32m2x3_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg3ei64_v_f32m2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_tama (vbool16_t mask, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_tama_vl31 (vbool16_t mask, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f32m2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_tamu (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_tamu_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f32m2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_tuma (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_tuma_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f32m2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f32m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_tumu (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f32m2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f32m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2x4_t
test_vluxseg4ei64_v_f32m2x4_tumu_vl31 (vbool16_t mask, vfloat32m2x4_t dest, float32_t *base, vuint64m4_t bindex)
{
  return vluxseg4ei64_v_f32m2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_tama (vbool16_t mask, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_tama_vl31 (vbool16_t mask, float64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f64m4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_tamu (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_tamu_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f64m4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_tuma (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_tuma_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f64m4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f64m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_tumu (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint64m4_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f64m4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f64m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e64,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4x2_t
test_vluxseg2ei64_v_f64m4x2_tumu_vl31 (vbool16_t mask, vfloat64m4x2_t dest, float64_t *base, vuint64m4_t bindex)
{
  return vluxseg2ei64_v_f64m4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16m2x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_tama (vbool8_t mask, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m2x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16m2x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_tama_vl31 (vbool8_t mask, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f16m2x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16m2x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_tamu (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m2x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16m2x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_tamu_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f16m2x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16m2x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_tuma (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m2x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16m2x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_tuma_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f16m2x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f16m2x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_tumu (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f16m2x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f16m2x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x2_t
test_vluxseg2ei64_v_f16m2x2_tumu_vl31 (vbool8_t mask, vfloat16m2x2_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f16m2x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16m2x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_tama (vbool8_t mask, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m2x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16m2x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_tama_vl31 (vbool8_t mask, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_f16m2x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16m2x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_tamu (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m2x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16m2x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_tamu_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_f16m2x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16m2x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_tuma (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m2x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16m2x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_tuma_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_f16m2x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei64_v_f16m2x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_tumu (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg3ei64_v_f16m2x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei64_v_f16m2x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg3ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x3_t
test_vluxseg3ei64_v_f16m2x3_tumu_vl31 (vbool8_t mask, vfloat16m2x3_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg3ei64_v_f16m2x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16m2x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_tama (vbool8_t mask, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m2x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16m2x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_tama_vl31 (vbool8_t mask, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_f16m2x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16m2x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_tamu (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m2x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16m2x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_tamu_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_f16m2x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16m2x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_tuma (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m2x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16m2x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_tuma_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_f16m2x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei64_v_f16m2x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_tumu (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg4ei64_v_f16m2x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei64_v_f16m2x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vluxseg4ei64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat16m2x4_t
test_vluxseg4ei64_v_f16m2x4_tumu_vl31 (vbool8_t mask, vfloat16m2x4_t dest, float16_t *base, vuint64m8_t bindex)
{
  return vluxseg4ei64_v_f16m2x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_tama (vbool8_t mask, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_tama_vl31 (vbool8_t mask, float32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f32m4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_tamu (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_tamu_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f32m4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_tuma (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_tuma_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f32m4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei64_v_f32m4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_tumu (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint64m8_t bindex, size_t vl)
{
  return vluxseg2ei64_v_f32m4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei64_v_f32m4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vluxseg2ei64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[08]|v16|v24),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4x2_t
test_vluxseg2ei64_v_f32m4x2_tumu_vl31 (vbool8_t mask, vfloat32m4x2_t dest, float32_t *base, vuint64m8_t bindex)
{
  return vluxseg2ei64_v_f32m4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_i8mf8x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tama (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_i8mf8x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_i8mf8x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tama_vl31 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i8mf8x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_i8mf8x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tamu (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_i8mf8x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_i8mf8x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tamu_vl31 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i8mf8x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_i8mf8x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tuma (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_i8mf8x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_i8mf8x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tuma_vl31 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i8mf8x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_i8mf8x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tumu (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_i8mf8x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_i8mf8x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x2_t
test_vluxseg2ei8_v_i8mf8x2_tumu_vl31 (vbool64_t mask, vint8mf8x2_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i8mf8x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_i8mf8x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tama (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_i8mf8x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_i8mf8x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tama_vl31 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i8mf8x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_i8mf8x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tamu (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_i8mf8x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_i8mf8x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tamu_vl31 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i8mf8x3_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_i8mf8x3_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tuma (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_i8mf8x3_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_i8mf8x3_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tuma_vl31 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i8mf8x3_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_i8mf8x3_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tumu (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_i8mf8x3_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_i8mf8x3_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x3_t
test_vluxseg3ei8_v_i8mf8x3_tumu_vl31 (vbool64_t mask, vint8mf8x3_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i8mf8x3_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_i8mf8x4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tama (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_i8mf8x4_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_i8mf8x4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tama_vl31 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i8mf8x4_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_i8mf8x4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tamu (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_i8mf8x4_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_i8mf8x4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tamu_vl31 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i8mf8x4_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_i8mf8x4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tuma (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_i8mf8x4_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_i8mf8x4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tuma_vl31 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i8mf8x4_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg4ei8_v_i8mf8x4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tumu (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg4ei8_v_i8mf8x4_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg4ei8_v_i8mf8x4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg4ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x4_t
test_vluxseg4ei8_v_i8mf8x4_tumu_vl31 (vbool64_t mask, vint8mf8x4_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg4ei8_v_i8mf8x4_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_i8mf8x5_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tama (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_i8mf8x5_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_i8mf8x5_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tama_vl31 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i8mf8x5_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_i8mf8x5_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tamu (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_i8mf8x5_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_i8mf8x5_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tamu_vl31 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i8mf8x5_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_i8mf8x5_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tuma (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_i8mf8x5_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_i8mf8x5_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tuma_vl31 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i8mf8x5_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg5ei8_v_i8mf8x5_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tumu (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg5ei8_v_i8mf8x5_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg5ei8_v_i8mf8x5_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg5ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x5_t
test_vluxseg5ei8_v_i8mf8x5_tumu_vl31 (vbool64_t mask, vint8mf8x5_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg5ei8_v_i8mf8x5_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_i8mf8x6_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tama (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_i8mf8x6_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_i8mf8x6_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tama_vl31 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i8mf8x6_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_i8mf8x6_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tamu (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_i8mf8x6_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_i8mf8x6_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tamu_vl31 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i8mf8x6_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_i8mf8x6_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tuma (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_i8mf8x6_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_i8mf8x6_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tuma_vl31 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i8mf8x6_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg6ei8_v_i8mf8x6_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tumu (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg6ei8_v_i8mf8x6_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg6ei8_v_i8mf8x6_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg6ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x6_t
test_vluxseg6ei8_v_i8mf8x6_tumu_vl31 (vbool64_t mask, vint8mf8x6_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg6ei8_v_i8mf8x6_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_i8mf8x7_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tama (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_i8mf8x7_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_i8mf8x7_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tama_vl31 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i8mf8x7_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_i8mf8x7_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tamu (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_i8mf8x7_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_i8mf8x7_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tamu_vl31 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i8mf8x7_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_i8mf8x7_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tuma (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_i8mf8x7_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_i8mf8x7_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tuma_vl31 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i8mf8x7_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg7ei8_v_i8mf8x7_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tumu (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg7ei8_v_i8mf8x7_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg7ei8_v_i8mf8x7_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg7ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x7_t
test_vluxseg7ei8_v_i8mf8x7_tumu_vl31 (vbool64_t mask, vint8mf8x7_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg7ei8_v_i8mf8x7_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_i8mf8x8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tama (vbool64_t mask, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_i8mf8x8_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_i8mf8x8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*ma
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tama_vl31 (vbool64_t mask, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i8mf8x8_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_i8mf8x8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tamu (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_i8mf8x8_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_i8mf8x8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tamu_vl31 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i8mf8x8_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_i8mf8x8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tuma (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_i8mf8x8_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_i8mf8x8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*ma
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tuma_vl31 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i8mf8x8_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg8ei8_v_i8mf8x8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tumu (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg8ei8_v_i8mf8x8_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg8ei8_v_i8mf8x8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*tu,\s*mu
**  ...
**	vluxseg8ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint8mf8x8_t
test_vluxseg8ei8_v_i8mf8x8_tumu_vl31 (vbool64_t mask, vint8mf8x8_t dest, int8_t *base, vuint8mf8_t bindex)
{
  return vluxseg8ei8_v_i8mf8x8_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_i16mf4x2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tama (vbool64_t mask, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_i16mf4x2_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_i16mf4x2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tama_vl31 (vbool64_t mask, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i16mf4x2_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_i16mf4x2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tamu (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_i16mf4x2_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_i16mf4x2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tamu_vl31 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i16mf4x2_tamu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_i16mf4x2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tuma (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_i16mf4x2_tuma (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_i16mf4x2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tuma_vl31 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i16mf4x2_tuma (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg2ei8_v_i16mf4x2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tumu (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg2ei8_v_i16mf4x2_tumu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg2ei8_v_i16mf4x2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vluxseg2ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x2_t
test_vluxseg2ei8_v_i16mf4x2_tumu_vl31 (vbool64_t mask, vint16mf4x2_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg2ei8_v_i16mf4x2_tumu (mask, dest, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_i16mf4x3_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei8_v_i16mf4x3_tama (vbool64_t mask, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_i16mf4x3_tama (mask, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_i16mf4x3_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei8_v_i16mf4x3_tama_vl31 (vbool64_t mask, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i16mf4x3_tama (mask, base, bindex, 31);
}

/*
** test_vluxseg3ei8_v_i16mf4x3_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei8_v_i16mf4x3_tamu (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint8mf8_t bindex, size_t vl)
{
  return vluxseg3ei8_v_i16mf4x3_tamu (mask, dest, base, bindex, vl);
}

/*
** test_vluxseg3ei8_v_i16mf4x3_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vluxseg3ei8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vint16mf4x3_t
test_vluxseg3ei8_v_i16mf4x3_tamu_vl31 (vbool64_t mask, vint16mf4x3_t dest, int16_t *base, vuint8mf8_t bindex)
{
  return vluxseg3ei8_v_i16mf4x3_tamu (mask, dest, base, bindex, 31);
}
