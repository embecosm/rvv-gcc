/* { dg-do run } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <riscv_vector.h>
#include <stdio.h>

#define start_clobber                                                         \
  size_t a0, a1, a2, a3, a4, a5, a6, a7;                                      \
  size_t t0, t1, t2, t3, t4, t5, t6;                                          \
  size_t s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11;                    \
  /* clobber scalar register, cause vl(32) to have no registers tu use */     \
  asm volatile ("nop"                                                         \
                : "=r" (a0), "=r" (a1), "=r" (a2), "=r" (a3), "=r" (a4),      \
                  "=r" (a5), "=r" (a6), "=r" (a7),                            \
                  "=r" (t0), "=r" (t1), "=r" (t2), "=r" (t3), "=r" (t4),      \
                  "=r" (t5), "=r" (t6),                                       \
                  "=r" (s0), "=r" (s1), "=r" (s2), "=r" (s3), "=r" (s4),      \
                  "=r" (s5), "=r" (s6), "=r" (s7), "=r" (s8), "=r" (s9),      \
                  "=r" (s10), "=r" (s11)                                      \
                :                                                             \
                :);                                                           \
  vint16m8_t v0, v8, v16, v24;                                                \
  /* clobber all vector registers, cause mask variable is spilled to       */ \
  /* memory when reload, and then cause mach pass insert new vsetvl insns  */ \
  asm volatile ("nop"                                                         \
                : "=vr" (v0), "=vr" (v8), "=vr" (v16), "=vr" (v24)            \
                :                                                             \
                :);

#define end_clobber                                                           \
  asm volatile ("nop"                                                         \
                :                                                             \
                : "vr" (v0), "vr" (v8), "vr" (v16), "vr" (v24)                \
                :);                                                           \
  /* repeating twice for increasing the cost of spilling these variables */   \
  asm volatile ("nop"                                                         \
                :                                                             \
                : "r" (a0), "r" (a1), "r" (a2), "r" (a3), "r" (a4),           \
                  "r" (a5), "r" (a6), "r" (a7),                               \
                  "r" (t0), "r" (t1), "r" (t2), "r" (t3), "r" (t4),           \
                  "r" (t5), "r" (t6),                                         \
                  "r" (s0), "r" (s1), "r" (s2), "r" (s3), "r" (s4),           \
                  "r" (s5), "r" (s6), "r" (s7), "r" (s8), "r" (s9),           \
                  "r" (s10), "r" (s11)                                        \
                :);                                                           \
  asm volatile ("nop"                                                         \
                :                                                             \
                : "r" (a0), "r" (a1), "r" (a2), "r" (a3), "r" (a4),           \
                  "r" (a5), "r" (a6), "r" (a7),                               \
                  "r" (t0), "r" (t1), "r" (t2), "r" (t3), "r" (t4),           \
                  "r" (t5), "r" (t6),                                         \
                  "r" (s0), "r" (s1), "r" (s2), "r" (s3), "r" (s4),           \
                  "r" (s5), "r" (s6), "r" (s7), "r" (s8), "r" (s9),           \
                  "r" (s10), "r" (s11)                                        \
                :);

void __attribute__ ((noinline, noclone))
test_vsm_v (vbool1_t mask, uint8_t *base)
{
  start_clobber;
  
  vsm_v_b1(base, mask, 32);

  end_clobber;
}

int 
main ()
{
  vbool1_t mask = vmset_m_b1(33);
  uint8_t result[8] = {0};
  uint8_t golden[8] = {255, 255, 255, 255, 0, 0, 0, 0};
  test_vsm_v (mask, result);
  for (int i = 0; i < 8; i++) {
    if (golden[i] != result[i])
      __builtin_abort ();  
  }

  return 0;
}
