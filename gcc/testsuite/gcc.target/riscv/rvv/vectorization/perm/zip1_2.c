/* { dg-do compile } */
/* { dg-additional-options "-O -mriscv-vector-bits=2048  --save-temps" } */

typedef unsigned char v128qi __attribute__((vector_size(128)));
typedef unsigned char v64qi __attribute__((vector_size(64)));
typedef unsigned char v32qi __attribute__((vector_size(32)));
typedef unsigned char v16qi __attribute__((vector_size(16)));
typedef unsigned short v64hi __attribute__((vector_size(128)));
typedef unsigned short v32hi __attribute__((vector_size(64)));
typedef _Float16 v64hf __attribute__((vector_size(128)));
typedef _Float16 v32hf __attribute__((vector_size(64)));
typedef unsigned int v32si __attribute__((vector_size(128)));
typedef float v32sf __attribute__((vector_size(128)));

#define PERM0(B, C) B, B + C
#define PERM1(B, C) PERM0 (B, C), PERM0 (B + 1, C)
#define PERM2(B, C) PERM1 (B, C), PERM1 (B + 2, C)
#define PERM3(B, C) PERM2 (B, C), PERM2 (B + 4, C)
#define PERM4(B, C) PERM3 (B, C), PERM3 (B + 8, C)
#define PERM5(B, C) PERM4 (B, C), PERM4 (B + 16, C)
#define PERM6(B, C) PERM5 (B, C), PERM5 (B + 32, C)

/*
** qi_zip1_h_a:
*/
v128qi
qi_zip1_h_a (v128qi x)
{
  return __builtin_shuffle (x, x, (v128qi) { PERM6 (0, 0) });
}

/*
** qi_zip1_h_b:
*/
v128qi
qi_zip1_h_b (v128qi x)
{
  return __builtin_shuffle (x, x, (v128qi) { PERM6 (0, 128) });
}

/*
** qi_zip1_h_c:
*/
v128qi
qi_zip1_h_c (v128qi x)
{
  return __builtin_shuffle (x, x, (v128qi) { PERM6 (128, 0) });
}

/*
** qi_zip1_h_two_op:
*/
v128qi
qi_zip1_h_two_op (v128qi x, v128qi y)
{
  return __builtin_shuffle (x, y, (v128qi) { PERM6 (0, 128) });
}

/*
** qi_zip1_s:
*/
v64qi
qi_zip1_s (v64qi x)
{
  return __builtin_shuffle (x, x, (v64qi) { PERM5 (0, 64) });
}

/*
** qi_zip1_s_two_op:
*/
v64qi
qi_zip1_s_two_op (v64qi x, v64qi y)
{
  return __builtin_shuffle (x, y, (v64qi) { PERM5 (0, 64) });
}

/*
** qi_zip1_d:
*/
v32qi
qi_zip1_d (v32qi x)
{
  return __builtin_shuffle (x, x, (v32qi) { PERM4 (0, 32) });
}

/*
** qi_zip1_d_two_op:
*/
v32qi
qi_zip1_d_two_op (v32qi x, v32qi y)
{
  return __builtin_shuffle (x, y, (v32qi) { PERM4 (0, 32) });
}

/*
** hi_zip1_s:
*/
v64hi
hi_zip1_s (v64hi x)
{
  return __builtin_shuffle (x, x, (v64hi) { PERM5 (0, 64) });
}

/*
** hi_zip1_s_two_op:
*/
v64hi
hi_zip1_s_two_op (v64hi x, v64hi y)
{
  return __builtin_shuffle (x, y, (v64hi) { PERM5 (0, 64) });
}

/*
** hf_zip1_s:
*/
v64hf
hf_zip1_s (v64hf x)
{
  return __builtin_shuffle (x, x, (v64hi) { PERM5 (0, 64) });
}

/*
** hf_zip1_s_two_op:
*/
v64hf
hf_zip1_s_two_op (v64hf x, v64hf y)
{
  return __builtin_shuffle (x, y, (v64hi) { PERM5 (0, 64) });
}

/*
** hi_zip1_d:
*/
v32hi
hi_zip1_d (v32hi x)
{
  return __builtin_shuffle (x, x, (v32hi) { PERM4 (0, 32) });
}

/*
** hi_zip1_d_two_op:
*/
v32hi
hi_zip1_d_two_op (v32hi x, v32hi y)
{
  return __builtin_shuffle (x, y, (v32hi) { PERM4 (0, 32) });
}

/*
** hf_zip1_d:
*/
v32hf
hf_zip1_d (v32hf x)
{
  return __builtin_shuffle (x, x, (v32hi) { PERM4 (0, 32) });
}

/*
** hf_zip1_d_two_op:
*/
v32hf
hf_zip1_d_two_op (v32hf x, v32hf y)
{
  return __builtin_shuffle (x, y, (v32hi) { PERM4 (0, 32) });
}

/*
** si_zip1_d:
*/
v32si
si_zip1_d (v32si x)
{
  return __builtin_shuffle (x, x, (v32si) { PERM4 (0, 32) });
}

/*
** sf_zip1_d:
*/
v32sf
sf_zip1_d (v32sf x)
{
  return __builtin_shuffle (x, x, (v32si) { PERM4 (0, 32) });
}

/* { dg-final { scan-assembler-times {\tvrgather.vv} 25 } } */
/* { dg-final { scan-assembler-times {\tvmsgeu.vx} 6 } } */
