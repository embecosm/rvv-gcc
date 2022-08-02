/* { dg-do compile } */
/* { dg-require-effective-target rv64 } */
/* { dg-skip-if "" { *-*-* } { "-O0" } } */

int
sge (int x, int y)
{
  return x >= y;
}

/* { dg-final { scan-assembler-not "sext\\.w" } } */
