/* Copy from https://github.com/riscv-non-isa/rvv-intrinsic-doc/tree/master/examples */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include "common.h"
#include <riscv_vector.h>

// index arithmetic
void index_golden(double *a, double *b, double *c, int n) {
  for (int i = 0; i < n; ++i) {
    a[i] = b[i] + (double)i * c[i];
  }
}

void index_(double *a, double *b, double *c, int n) {
  size_t vlmax = vsetvlmax_e32m1();
  vuint32m1_t vec_i = vid_v_u32m1(vlmax);
  for (size_t vl; n > 0; n -= vl, a += vl, b += vl, c += vl) {
    vl = vsetvl_e64m2(n);

    vfloat64m2_t vec_i_double = vfwcvt_f_xu_v_f64m2(vec_i, vl);

    vfloat64m2_t vec_b = vle64_v_f64m2(b, vl);
    vfloat64m2_t vec_c = vle64_v_f64m2(c, vl);

    vfloat64m2_t vec_a =
        vfadd_vv_f64m2(vec_b, vfmul_vv_f64m2(vec_c, vec_i_double, vl), vl);
    vse64_v_f64m2(a, vec_a, vl);

    vec_i = vadd_vx_u32m1(vec_i, vl, vl);
  }
}

int main() {
  const int N = 31;
  const uint32_t seed = 0xdeadbeef;
  srand(seed);

  // data gen
  double B[N], C[N];
  gen_rand_1d(B, N);
  gen_rand_1d(C, N);

  // compute
  double golden[N], actual[N];
  index_golden(golden, B, C, N);
  index_(actual, B, C, N);

  // compare
  // puts(compare_1d(golden, actual, N) ? "pass" : "fail");
  if (!compare_1d(golden, actual, N)) {
    abort();
  }
}
