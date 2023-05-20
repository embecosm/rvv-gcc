/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=2048 --save-temps" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

typedef unsigned char v128qi __attribute__((vector_size(128)));
typedef unsigned char v64qi __attribute__((vector_size(64)));
typedef unsigned short v64hi __attribute__((vector_size(128)));
typedef _Float16 v64hf __attribute__((vector_size(128)));

#define PERM0(B) B + 1, B
#define PERM1(B) PERM0 (B), PERM0 (B + 2)
#define PERM2(B) PERM1 (B), PERM1 (B + 4)
#define PERM3(B) PERM2 (B), PERM2 (B + 8)
#define PERM4(B) PERM3 (B), PERM3 (B + 16)
#define PERM5(B) PERM4 (B), PERM4 (B + 32)
#define PERM6(B) PERM5 (B), PERM5 (B + 64)

v128qi
qi_revh_s (v128qi x)
{
  return __builtin_shuffle (x, x, (v128qi) { PERM6 (0) });
}

v64qi
qi_revw_d (v64qi x)
{
  return __builtin_shuffle (x, x, (v64qi) { PERM5 (0) });
}

v64hi
hi_revw_d (v64hi x)
{
  return __builtin_shuffle (x, x, (v64hi) { PERM5 (0) });
}

v64hf
hf_revw_d (v64hf x)
{
  return __builtin_shuffle (x, x, (v64hi) { PERM5 (0) });
}

#undef PERM1
#define PERM1(B) PERM0 (B + 2), PERM0 (B)

v128qi
qi_revh_d (v128qi x)
{
  return __builtin_shuffle (x, x, (v128qi) { PERM6 (0) });
}

v64qi
qi_revw_q (v64qi x)
{
  return __builtin_shuffle (x, x, (v64qi) { PERM5 (0) });
}

v64hi
hi_revw_q (v64hi x)
{
  return __builtin_shuffle (x, x, (v64hi) { PERM5 (0) });
}

#undef PERM2
#define PERM2(B) PERM0 (B + 4), PERM0 (B)

v128qi
qi_revh_q (v128qi x)
{
  return __builtin_shuffle (x, x, (v128qi) { PERM6 (0) });
}

/* { dg-final { scan-assembler-times {\tvrgather.vv} 8 } } */
