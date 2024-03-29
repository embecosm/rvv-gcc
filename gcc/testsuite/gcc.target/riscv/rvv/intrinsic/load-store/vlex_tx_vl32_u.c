
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>

vuint8mf8_t
test_vle8_v_u8mf8_ta_vl32 (uint8_t *base)
{
  return vle8_v_u8mf8_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf8_ta_vl32 )?} 1 } } */
vuint8mf8_t
test_vle8_v_u8mf8_tu_vl32 (vuint8mf8_t dest, uint8_t *base)
{
  return vle8_v_u8mf8_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf8_tu_vl32 )?} 1 } } */
vuint8mf4_t
test_vle8_v_u8mf4_ta_vl32 (uint8_t *base)
{
  return vle8_v_u8mf4_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf4_ta_vl32 )?} 1 } } */
vuint8mf4_t
test_vle8_v_u8mf4_tu_vl32 (vuint8mf4_t dest, uint8_t *base)
{
  return vle8_v_u8mf4_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf4_tu_vl32 )?} 1 } } */
vuint8mf2_t
test_vle8_v_u8mf2_ta_vl32 (uint8_t *base)
{
  return vle8_v_u8mf2_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf2_ta_vl32 )?} 1 } } */
vuint8mf2_t
test_vle8_v_u8mf2_tu_vl32 (vuint8mf2_t dest, uint8_t *base)
{
  return vle8_v_u8mf2_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8mf2_tu_vl32 )?} 1 } } */
vuint8m1_t
test_vle8_v_u8m1_ta_vl32 (uint8_t *base)
{
  return vle8_v_u8m1_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m1_ta_vl32 )?} 1 } } */
vuint8m1_t
test_vle8_v_u8m1_tu_vl32 (vuint8m1_t dest, uint8_t *base)
{
  return vle8_v_u8m1_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m1_tu_vl32 )?} 1 } } */
vuint8m2_t
test_vle8_v_u8m2_ta_vl32 (uint8_t *base)
{
  return vle8_v_u8m2_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m2_ta_vl32 )?} 1 } } */
vuint8m2_t
test_vle8_v_u8m2_tu_vl32 (vuint8m2_t dest, uint8_t *base)
{
  return vle8_v_u8m2_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m2_tu_vl32 )?} 1 } } */
vuint8m4_t
test_vle8_v_u8m4_ta_vl32 (uint8_t *base)
{
  return vle8_v_u8m4_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m4_ta_vl32 )?} 1 } } */
vuint8m4_t
test_vle8_v_u8m4_tu_vl32 (vuint8m4_t dest, uint8_t *base)
{
  return vle8_v_u8m4_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m4_tu_vl32 )?} 1 } } */
vuint8m8_t
test_vle8_v_u8m8_ta_vl32 (uint8_t *base)
{
  return vle8_v_u8m8_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m8_ta_vl32 )?} 1 } } */
vuint8m8_t
test_vle8_v_u8m8_tu_vl32 (vuint8m8_t dest, uint8_t *base)
{
  return vle8_v_u8m8_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle8\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle8_v_u8m8_tu_vl32 )?} 1 } } */
vuint16mf4_t
test_vle16_v_u16mf4_ta_vl32 (uint16_t *base)
{
  return vle16_v_u16mf4_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16mf4_ta_vl32 )?} 1 } } */
vuint16mf4_t
test_vle16_v_u16mf4_tu_vl32 (vuint16mf4_t dest, uint16_t *base)
{
  return vle16_v_u16mf4_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16mf4_tu_vl32 )?} 1 } } */
vuint16mf2_t
test_vle16_v_u16mf2_ta_vl32 (uint16_t *base)
{
  return vle16_v_u16mf2_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16mf2_ta_vl32 )?} 1 } } */
vuint16mf2_t
test_vle16_v_u16mf2_tu_vl32 (vuint16mf2_t dest, uint16_t *base)
{
  return vle16_v_u16mf2_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16mf2_tu_vl32 )?} 1 } } */
vuint16m1_t
test_vle16_v_u16m1_ta_vl32 (uint16_t *base)
{
  return vle16_v_u16m1_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m1_ta_vl32 )?} 1 } } */
vuint16m1_t
test_vle16_v_u16m1_tu_vl32 (vuint16m1_t dest, uint16_t *base)
{
  return vle16_v_u16m1_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m1_tu_vl32 )?} 1 } } */
vuint16m2_t
test_vle16_v_u16m2_ta_vl32 (uint16_t *base)
{
  return vle16_v_u16m2_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m2_ta_vl32 )?} 1 } } */
vuint16m2_t
test_vle16_v_u16m2_tu_vl32 (vuint16m2_t dest, uint16_t *base)
{
  return vle16_v_u16m2_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m2_tu_vl32 )?} 1 } } */
vuint16m4_t
test_vle16_v_u16m4_ta_vl32 (uint16_t *base)
{
  return vle16_v_u16m4_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m4_ta_vl32 )?} 1 } } */
vuint16m4_t
test_vle16_v_u16m4_tu_vl32 (vuint16m4_t dest, uint16_t *base)
{
  return vle16_v_u16m4_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m4_tu_vl32 )?} 1 } } */
vuint16m8_t
test_vle16_v_u16m8_ta_vl32 (uint16_t *base)
{
  return vle16_v_u16m8_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m8_ta_vl32 )?} 1 } } */
vuint16m8_t
test_vle16_v_u16m8_tu_vl32 (vuint16m8_t dest, uint16_t *base)
{
  return vle16_v_u16m8_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle16\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle16_v_u16m8_tu_vl32 )?} 1 } } */
vuint32mf2_t
test_vle32_v_u32mf2_ta_vl32 (uint32_t *base)
{
  return vle32_v_u32mf2_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32mf2_ta_vl32 )?} 1 } } */
vuint32mf2_t
test_vle32_v_u32mf2_tu_vl32 (vuint32mf2_t dest, uint32_t *base)
{
  return vle32_v_u32mf2_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32mf2_tu_vl32 )?} 1 } } */
vuint32m1_t
test_vle32_v_u32m1_ta_vl32 (uint32_t *base)
{
  return vle32_v_u32m1_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m1_ta_vl32 )?} 1 } } */
vuint32m1_t
test_vle32_v_u32m1_tu_vl32 (vuint32m1_t dest, uint32_t *base)
{
  return vle32_v_u32m1_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m1_tu_vl32 )?} 1 } } */
vuint32m2_t
test_vle32_v_u32m2_ta_vl32 (uint32_t *base)
{
  return vle32_v_u32m2_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m2_ta_vl32 )?} 1 } } */
vuint32m2_t
test_vle32_v_u32m2_tu_vl32 (vuint32m2_t dest, uint32_t *base)
{
  return vle32_v_u32m2_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m2_tu_vl32 )?} 1 } } */
vuint32m4_t
test_vle32_v_u32m4_ta_vl32 (uint32_t *base)
{
  return vle32_v_u32m4_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m4_ta_vl32 )?} 1 } } */
vuint32m4_t
test_vle32_v_u32m4_tu_vl32 (vuint32m4_t dest, uint32_t *base)
{
  return vle32_v_u32m4_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m4_tu_vl32 )?} 1 } } */
vuint32m8_t
test_vle32_v_u32m8_ta_vl32 (uint32_t *base)
{
  return vle32_v_u32m8_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m8_ta_vl32 )?} 1 } } */
vuint32m8_t
test_vle32_v_u32m8_tu_vl32 (vuint32m8_t dest, uint32_t *base)
{
  return vle32_v_u32m8_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle32\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle32_v_u32m8_tu_vl32 )?} 1 } } */
vuint64m1_t
test_vle64_v_u64m1_ta_vl32 (uint64_t *base)
{
  return vle64_v_u64m1_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m1_ta_vl32 )?} 1 } } */
vuint64m1_t
test_vle64_v_u64m1_tu_vl32 (vuint64m1_t dest, uint64_t *base)
{
  return vle64_v_u64m1_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m1_tu_vl32 )?} 1 } } */
vuint64m2_t
test_vle64_v_u64m2_ta_vl32 (uint64_t *base)
{
  return vle64_v_u64m2_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m2_ta_vl32 )?} 1 } } */
vuint64m2_t
test_vle64_v_u64m2_tu_vl32 (vuint64m2_t dest, uint64_t *base)
{
  return vle64_v_u64m2_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m2_tu_vl32 )?} 1 } } */
vuint64m4_t
test_vle64_v_u64m4_ta_vl32 (uint64_t *base)
{
  return vle64_v_u64m4_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m4_ta_vl32 )?} 1 } } */
vuint64m4_t
test_vle64_v_u64m4_tu_vl32 (vuint64m4_t dest, uint64_t *base)
{
  return vle64_v_u64m4_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[048]|v1[26]|v2[048]),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m4_tu_vl32 )?} 1 } } */
vuint64m8_t
test_vle64_v_u64m8_ta_vl32 (uint64_t *base)
{
  return vle64_v_u64m8_ta (base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*ta,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m8_ta_vl32 )?} 1 } } */
vuint64m8_t
test_vle64_v_u64m8_tu_vl32 (vuint64m8_t dest, uint64_t *base)
{
  return vle64_v_u64m8_tu (dest, base, 32);
}
/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*tu,\s*m[au]\s+(?:(?!vsetvli|vle..?\.v).)*\s+vle64\.v\s+(?:v[08]|v16|v24),\s*\((?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7])\)\n(?: test_vle64_v_u64m8_tu_vl32 )?} 1 } } */
