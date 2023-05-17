/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vfwmsac_vf_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2(vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vf_f32mf2(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_vl31(vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1(vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m1(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_vl31(vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2(vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vf_f32m2(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_vl31(vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4(vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m4(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_vl31(vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8(vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vf_f32m8(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_vl31(vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1(vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m1(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_vl31(vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2(vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vf_f64m2(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_vl31(vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4(vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m4(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_vl31(vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8(vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vf_f64m8(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_vl31(vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_m(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vf_f32mf2_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_m_vl31(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_m(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m1_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_m_vl31(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_m(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vf_f32m2_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_m_vl31(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_m(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m4_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_m_vl31(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_m(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vf_f32m8_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_m_vl31(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_m(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m1_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_m_vl31(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_m(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vf_f64m2_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_m_vl31(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_m(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m4_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_m_vl31(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_m(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vf_f64m8_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_m_vl31(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_m_vl32(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_m_vl32(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_m_vl32(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_m_vl32(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_m_vl32(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_m_vl32(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_m_vl32(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_m_vl32(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_m_vl32(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_ta(vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vf_f32mf2_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_ta_vl31(vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_ta(vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m1_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_ta_vl31(vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_ta(vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vf_f32m2_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_ta_vl31(vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_ta(vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m4_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_ta_vl31(vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_ta(vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vf_f32m8_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_ta_vl31(vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_ta(vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m1_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_ta_vl31(vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_ta(vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vf_f64m2_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_ta_vl31(vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_ta(vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m4_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_ta_vl31(vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_ta(vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vf_f64m8_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_ta_vl31(vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tu(vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vf_f32mf2_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tu_vl31(vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tu(vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m1_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tu_vl31(vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tu(vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vf_f32m2_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tu_vl31(vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tu(vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m4_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tu_vl31(vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tu(vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vf_f32m8_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tu_vl31(vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tu(vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m1_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tu_vl31(vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tu(vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vf_f64m2_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tu_vl31(vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tu(vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m4_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tu_vl31(vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tu(vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vf_f64m8_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tu_vl31(vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tama(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vf_f32mf2_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tama_vl31(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tama(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m1_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tama_vl31(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tama(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vf_f32m2_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tama_vl31(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tama(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m4_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tama_vl31(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tama(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vf_f32m8_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tama_vl31(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tama(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m1_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tama_vl31(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tama(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vf_f64m2_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tama_vl31(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tama(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m4_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tama_vl31(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tama(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vf_f64m8_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tama_vl31(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vf_f32mf2_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tamu_vl31(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tamu(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m1_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tamu_vl31(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tamu(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vf_f32m2_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tamu_vl31(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tamu(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m4_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tamu_vl31(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tamu(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vf_f32m8_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tamu_vl31(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tamu(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m1_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tamu_vl31(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tamu(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vf_f64m2_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tamu_vl31(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tamu(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m4_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tamu_vl31(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tamu(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vf_f64m8_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tamu_vl31(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vf_f32mf2_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tuma_vl31(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tuma(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m1_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tuma_vl31(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tuma(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vf_f32m2_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tuma_vl31(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tuma(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m4_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tuma_vl31(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tuma(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vf_f32m8_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tuma_vl31(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tuma(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m1_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tuma_vl31(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tuma(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vf_f64m2_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tuma_vl31(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tuma(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m4_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tuma_vl31(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tuma(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vf_f64m8_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tuma_vl31(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vf_f32mf2_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tumu_vl31(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tumu(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m1_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tumu_vl31(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tumu(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vf_f32m2_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tumu_vl31(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tumu(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vf_f32m4_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tumu_vl31(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tumu(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vf_f32m8_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f32m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tumu_vl31(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tumu(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m1_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tumu_vl31(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tumu(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vf_f64m2_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tumu_vl31(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tumu(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vf_f64m4_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tumu_vl31(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tumu(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vf_f64m8_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vf_f64m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tumu_vl31(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vf_f32mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tama_vl32(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tama_vl32(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tama_vl32(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tama_vl32(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tama_vl32(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tama_vl32(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tama_vl32(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tama_vl32(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tama_vl32(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tamu_vl32(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tamu_vl32(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tamu_vl32(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tamu_vl32(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tamu_vl32(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tamu_vl32(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tamu_vl32(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tamu_vl32(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tamu_vl32(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tuma_vl32(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tuma_vl32(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tuma_vl32(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tuma_vl32(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tuma_vl32(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tuma_vl32(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tuma_vl32(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tuma_vl32(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tuma_vl32(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tumu_vl32(vbool64_t mask, vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tumu_vl32(vbool32_t mask, vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tumu_vl32(vbool16_t mask, vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tumu_vl32(vbool8_t mask, vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tumu_vl32(vbool4_t mask, vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tumu_vl32(vbool64_t mask, vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tumu_vl32(vbool32_t mask, vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tumu_vl32(vbool16_t mask, vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tumu_vl32(vbool8_t mask, vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_ta_vl32(vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_ta_vl32(vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_ta_vl32(vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_ta_vl32(vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_ta_vl32(vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_ta_vl32(vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_ta_vl32(vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_ta_vl32(vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_ta_vl32(vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_tu_vl32(vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_tu_vl32(vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_tu_vl32(vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_tu_vl32(vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_tu_vl32(vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_tu_vl32(vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_tu_vl32(vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_tu_vl32(vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_tu_vl32(vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vf_f32mf2_vl32(vfloat32mf2_t dest, float16_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vf_f32mf2(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vf_f32m1_vl32(vfloat32m1_t dest, float16_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vf_f32m1(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vf_f32m2_vl32(vfloat32m2_t dest, float16_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vf_f32m2(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vf_f32m4_vl32(vfloat32m4_t dest, float16_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vf_f32m4(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vf_f32m8_vl32(vfloat32m8_t dest, float16_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vf_f32m8(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vf_f64m1_vl32(vfloat64m1_t dest, float32_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vf_f64m1(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vf_f64m2_vl32(vfloat64m2_t dest, float32_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vf_f64m2(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[048]|v1[26]|v2[048]),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vf_f64m4_vl32(vfloat64m4_t dest, float32_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vf_f64m4(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vf_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vf\s+(?:v[08]|v16|v24),\s*(?:ft[0-9]|ft1[01]|fs[0-9]|fs1[01]|fa[0-7]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vf_f64m8_vl32(vfloat64m8_t dest, float32_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vf_f64m8(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32mf2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vv_f32mf2(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32mf2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_vl31(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m1(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_vl31(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vv_f32m2(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_vl31(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m4(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_vl31(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vv_f32m8(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_vl31(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m1:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m1(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m1_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_vl31(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m2:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vv_f64m2(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m2_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_vl31(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m4:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m4(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m4_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_vl31(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m8:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vv_f64m8(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m8_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_vl31(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32mf2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_m(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vv_f32mf2_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32mf2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_m_vl31(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_m(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m1_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_m_vl31(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_m(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vv_f32m2_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_m_vl31(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_m(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m4_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_m_vl31(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_m(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vv_f32m8_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_m_vl31(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m1_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_m(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m1_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m1_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_m_vl31(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m2_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_m(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vv_f64m2_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m2_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_m_vl31(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m4_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_m(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m4_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m4_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_m_vl31(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m8_m:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_m(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vv_f64m8_m(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m8_m_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_m_vl31(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_m(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32mf2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_m_vl32(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_m_vl32(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_m_vl32(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_m_vl32(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_m_vl32(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m1_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_m_vl32(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m2_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_m_vl32(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m4_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_m_vl32(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m8_m_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_m_vl32(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_m(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32mf2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_ta(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vv_f32mf2_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32mf2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_ta_vl31(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_ta(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m1_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_ta_vl31(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_ta(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vv_f32m2_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_ta_vl31(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_ta(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m4_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_ta_vl31(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_ta(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vv_f32m8_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_ta_vl31(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m1_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_ta(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m1_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m1_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_ta_vl31(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m2_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_ta(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vv_f64m2_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m2_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_ta_vl31(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m4_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_ta(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m4_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m4_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_ta_vl31(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m8_ta:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_ta(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vv_f64m8_ta(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m8_ta_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_ta_vl31(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_ta(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32mf2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tu(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vv_f32mf2_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32mf2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tu_vl31(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tu(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m1_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tu_vl31(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tu(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vv_f32m2_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tu_vl31(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tu(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m4_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tu_vl31(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tu(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vv_f32m8_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tu_vl31(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m1_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tu(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m1_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m1_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tu_vl31(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m2_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tu(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vv_f64m2_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m2_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tu_vl31(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m4_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tu(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m4_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m4_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tu_vl31(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m8_tu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tu(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vv_f64m8_tu(dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m8_tu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tu_vl31(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_tu(dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32mf2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tama(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vv_f32mf2_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32mf2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tama_vl31(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tama(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m1_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tama_vl31(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tama(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vv_f32m2_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tama_vl31(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tama(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m4_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tama_vl31(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tama(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vv_f32m8_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tama_vl31(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m1_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tama(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m1_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m1_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tama_vl31(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m2_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tama(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vv_f64m2_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m2_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tama_vl31(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m4_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tama(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m4_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m4_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tama_vl31(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m8_tama:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tama(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vv_f64m8_tama(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m8_tama_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tama_vl31(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_tama(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32mf2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tamu(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vv_f32mf2_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32mf2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tamu_vl31(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tamu(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m1_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tamu_vl31(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tamu(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vv_f32m2_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tamu_vl31(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tamu(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m4_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tamu_vl31(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tamu(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vv_f32m8_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tamu_vl31(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m1_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tamu(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m1_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m1_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tamu_vl31(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m2_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tamu(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vv_f64m2_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m2_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tamu_vl31(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m4_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tamu(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m4_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m4_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tamu_vl31(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m8_tamu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tamu(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vv_f64m8_tamu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m8_tamu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tamu_vl31(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_tamu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32mf2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tuma(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vv_f32mf2_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32mf2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tuma_vl31(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tuma(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m1_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tuma_vl31(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tuma(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vv_f32m2_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tuma_vl31(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tuma(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m4_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tuma_vl31(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tuma(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vv_f32m8_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tuma_vl31(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m1_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tuma(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m1_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m1_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tuma_vl31(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m2_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tuma(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vv_f64m2_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m2_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tuma_vl31(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m4_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tuma(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m4_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m4_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tuma_vl31(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m8_tuma:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tuma(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vv_f64m8_tuma(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m8_tuma_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tuma_vl31(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_tuma(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32mf2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tumu(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2, size_t vl)
{
  return vfwmsac_vv_f32mf2_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32mf2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tumu_vl31(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tumu(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m1_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tumu_vl31(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tumu(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2, size_t vl)
{
  return vfwmsac_vv_f32m2_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tumu_vl31(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tumu(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2, size_t vl)
{
  return vfwmsac_vv_f32m4_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tumu_vl31(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tumu(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2, size_t vl)
{
  return vfwmsac_vv_f32m8_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f32m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tumu_vl31(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m1_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tumu(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m1_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m1_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tumu_vl31(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m2_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tumu(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2, size_t vl)
{
  return vfwmsac_vv_f64m2_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m2_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tumu_vl31(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m4_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tumu(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2, size_t vl)
{
  return vfwmsac_vv_f64m4_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m4_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tumu_vl31(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f64m8_tumu:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tumu(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2, size_t vl)
{
  return vfwmsac_vv_f64m8_tumu(mask, dest, op1, op2, vl);
}

/*
** test_vfwmsac_vv_f64m8_tumu_vl31:
**  ...
**	vsetivli\s+zero,\s*31,\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tumu_vl31(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_tumu(mask, dest, op1, op2, 31);
}

/*
** test_vfwmsac_vv_f32mf2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tama_vl32(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tama_vl32(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tama_vl32(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tama_vl32(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tama_vl32(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m1_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tama_vl32(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m2_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tama_vl32(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m4_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tama_vl32(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m8_tama_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tama_vl32(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_tama(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32mf2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tamu_vl32(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tamu_vl32(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tamu_vl32(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tamu_vl32(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tamu_vl32(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m1_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tamu_vl32(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m2_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tamu_vl32(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m4_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tamu_vl32(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m8_tamu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tamu_vl32(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_tamu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32mf2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tuma_vl32(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tuma_vl32(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tuma_vl32(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tuma_vl32(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tuma_vl32(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m1_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tuma_vl32(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m2_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tuma_vl32(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m4_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tuma_vl32(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m8_tuma_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*ma
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tuma_vl32(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_tuma(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32mf2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tumu_vl32(vbool64_t mask, vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tumu_vl32(vbool32_t mask, vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tumu_vl32(vbool16_t mask, vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tumu_vl32(vbool8_t mask, vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tumu_vl32(vbool4_t mask, vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m1_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tumu_vl32(vbool64_t mask, vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m2_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tumu_vl32(vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m4_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tumu_vl32(vbool16_t mask, vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m8_tumu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*mu
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tumu_vl32(vbool8_t mask, vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_tumu(mask, dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32mf2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_ta_vl32(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_ta_vl32(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_ta_vl32(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_ta_vl32(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_ta_vl32(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m1_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_ta_vl32(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m2_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_ta_vl32(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m4_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_ta_vl32(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m8_ta_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_ta_vl32(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_ta(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32mf2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_tu_vl32(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_tu_vl32(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_tu_vl32(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_tu_vl32(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_tu_vl32(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m1_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_tu_vl32(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m2_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_tu_vl32(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m4_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_tu_vl32(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m8_tu_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_tu_vl32(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8_tu(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32mf2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32mf2_t 
test_vfwmsac_vv_f32mf2_vl32(vfloat32mf2_t dest, vfloat16mf4_t op1, vfloat16mf4_t op2)
{
  return vfwmsac_vv_f32mf2(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m1_t 
test_vfwmsac_vv_f32m1_vl32(vfloat32m1_t dest, vfloat16mf2_t op1, vfloat16mf2_t op2)
{
  return vfwmsac_vv_f32m1(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat32m2_t 
test_vfwmsac_vv_f32m2_vl32(vfloat32m2_t dest, vfloat16m1_t op1, vfloat16m1_t op2)
{
  return vfwmsac_vv_f32m2(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat32m4_t 
test_vfwmsac_vv_f32m4_vl32(vfloat32m4_t dest, vfloat16m2_t op1, vfloat16m2_t op2)
{
  return vfwmsac_vv_f32m4(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f32m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat32m8_t 
test_vfwmsac_vv_f32m8_vl32(vfloat32m8_t dest, vfloat16m4_t op1, vfloat16m4_t op2)
{
  return vfwmsac_vv_f32m8(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m1_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m1_t 
test_vfwmsac_vv_f64m1_vl32(vfloat64m1_t dest, vfloat32mf2_t op1, vfloat32mf2_t op2)
{
  return vfwmsac_vv_f64m1(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m2_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
vfloat64m2_t 
test_vfwmsac_vv_f64m2_vl32(vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  return vfwmsac_vv_f64m2(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m4_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vfloat64m4_t 
test_vfwmsac_vv_f64m4_vl32(vfloat64m4_t dest, vfloat32m2_t op1, vfloat32m2_t op2)
{
  return vfwmsac_vv_f64m4(dest, op1, op2, 32);
}

/*
** test_vfwmsac_vv_f64m8_vl32:
**  ...
**	vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*m[au]
**  ...
**	vfwmsac\.vv\s+(?:v[08]|v16|v24),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
vfloat64m8_t 
test_vfwmsac_vv_f64m8_vl32(vfloat64m8_t dest, vfloat32m4_t op1, vfloat32m4_t op2)
{
  return vfwmsac_vv_f64m8(dest, op1, op2, 32);
}

