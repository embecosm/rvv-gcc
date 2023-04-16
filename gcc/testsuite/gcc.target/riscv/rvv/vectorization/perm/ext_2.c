/* { dg-do compile } */
/* { dg-additional-options "-O -mriscv-vector-bits=256 " } */
/* { dg-add-options riscv_v } */

typedef int vnx4si __attribute__((vector_size (32)));

void
foo (void)
{
  register vnx4si x asm ("v0");
  register vnx4si y asm ("v1");

  asm volatile ("" : "=vr" (y));
  x = __builtin_shuffle (y, y, (vnx4si) { 1, 2, 3, 4, 5, 6, 7, 8 });
  asm volatile ("" :: "vr" (x));
}

/* { dg-final { scan-assembler-times {\tvslide1down.vx} 1 } } */
