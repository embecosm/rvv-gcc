/* vectorization of newlib/libm/mathfp/s_sine.c, with a few changes:
  - overflow is a bit farther off because we use 64 bit integers.
  - all errors are EDOM, for too large inputs, the output will be NaN.
  - redundant parts have been elided.
  - using the table from newlib/libm/mathfp/k_sin.c
/* The caller is expected to use a suitable v*setvl* instruction;
   could use m1 or m2.
   For m1: inputs: v2  Outputs: v2  Clobbered: a0-a2, v0, v4, v6, f0-f5
   For m2: inputs: v2/v3 Outputs: v2/v3 Clobbered: a0-a2, v0/v1, v4-v7, f0-f5
  (We don't use v0 for argument passing because it's the mask register. )  */

#ifdef __riscv_v

#include "riscv-asm.h"

#define EDOM 33

#define X v2
#define y v2
#define g v4
#define R v6
#define tmp v0

 /* The multiply-add operation in the Taylor series can't actually save us
    instruction count.  Either we have to use a strided load to slat the
    values into a vector register - then we need to adjust the address
    register, as there is no offset available for vector loads.  Or we
    need to load into a scalar register first and splat that into a vector
    register.  Or we use separate multiply and add instructions so that we
    can use a scalar register directly for the add.
    latency-wise, the strided loads is not guaranteed to avoid
    repeated loads even if using x0 for the stride, and the fused multiply-add
    might be faster (and more precise) than separate multiply and add, so we
    got fro loading into a scalar and moving that into a vector.  */

pies:
 .double 1.57079632679489661923 // PI/2
 .double 0.5
 .double 0.31830988618379067154 // 1/PI
 .double 3.1415926535897931 // PI approx in double 0x1.921fb54442d18e0p1
 .double 1.2247264338327951e-16 // PI correction aprrox in double
trouble:
 .quad 0x434921fb54442c00 // PI * (1ULL << 52)
 .quad 0x7ff8000000000000 // canonical NaN (qNaN)
tab:
 .double -1.66666666666666324348e-01, /* 0xBFC55555, 0x55555549 */
 .double  8.33333333332248946124e-03, /* 0x3F811111, 0x1110F8A6 */
 .double -1.98412698298579493134e-04, /* 0xBF2A01A0, 0x19C161D5 */
 .double  2.75573137070700676789e-06, /* 0x3EC71DE3, 0x57B1FE7D */
 .double -2.50507602534068634195e-08, /* 0xBE5AE5E6, 0x8A2B9CEB */
 .double  1.58969099521155010221e-10; /* 0x3DE5D93A, 0x5ACFD57C */
FUNC_BEGIN (__riscv_vect_cos):
 auipc a0,0
 fld f0,-13*8-12/*(pies-cos)*/(a0)
 vfadd.vf X,X,f0
FUNC_END (__riscv_vect_cos):
FUNC_BEGIN (__riscv_vect_sin)
 auipc a0,0
 ld  a1,-8*8-12/*(trouble-sin)+0*8*/(a0)

 fld f2,-12*8-12/*(pies-sin)+1*8*/(a0)
 fld f3,-11*8-12/*(pies-sin)+2*8*/(a0)
 fld f4,-10*8-12/*(pies-sin)+3*8*/(a0)
 fld f5, -9*8-12/*(pies-sin)+4*8*/(a0)

 /* Check for Inf / NaN / impeding overflow / loss of precision */
 vfsgnjx.vv tmp,X,X
 vmsge.vx v0,tmp, a1 // int compare to avoid invalid operation exception
 vfirst.m a1,v0
 bge a1,zero,large_input
constrain_inputs:
 vfmv.v.f tmp,f2
 vfsgnj.vv tmp,tmp,X
 vfmacc.vf tmp,f3,X
 vfcvt.rtz.x.f.v tmp,tmp
 vfcvt.f.x.v R,tmp
 vfnmsac.vf X,f4,R
 vfnmsac.vf X,f5,R

 fld f0,-6*8/*(tab-sim)+0*8 */(a0)
 fld f1,-5*8/*(tab-sin)+1*8 */(a0)
 fld f2,-4*8/*(tab-sin)+2*8 */(a0)
 fld f3,-3*8/*(tab-sin)+3*8 */(a0)
 fld f4,-2*8/*(tab-sin)+4*8 */(a0)
 fld f5,-1*8/*(tab-sin)+5*8 */(a0)

 li a1,63
 vsll.vx tmp,tmp,a1	// tmp & 1 -> sgn
 vfsgnjx.vv y,X,tmp

 /* Evaluate polynom */
 vfmul.vv g,y,y

 vfmv.v.f R,f4			// R = r[4]
 vfmacc.vf R,f5,g		// R = r[5] * g * R
 vfmv.v.f tmp,f3
 vfmadd.vv R,g,tmp
 vfmv.v.f tmp,f2
 vfmadd.vv R,g,tmp
 vfmv.v.f tmp,f1
 vfmadd.vv R,g,tmp
 vfmv.v.f tmp,f0
 vfmadd.vv R,g,tmp
 vfmadd.vv y,R,y // return value in y == v2
 ret

large_input:
 /* For finite, large values, we could do a more elaborate argument
    reduction here, (Like newlib/libm/math/e_rem_pio2.c), but that'll take
    a lot of code that takes long to write, long to execute, and bloats
    the program.  Large input values usually spell trouble anyway, since
    even tiny errors in their calculation make the result unpredictable.
    For now, just do the pragmatic thing and set the lane to NaN,
    errno to EDOM, and resume processing so that we get the results
    for the other lanes.  */
 /* Setting errno in assembler is non-portable because errno can be defined
    as a macro, and often is to provide thread-safety.  It's probably best
    to do this by saving any registers that need preserving and calling a
    function written in C.  We could limit the registers that need saving
    by making a bunch of registers call-saved or fixed to compile that
    function, but OTOH, we have a dependency problem since we need the
    library headers, and these are often only available after libc has
    been compiled.  */
 fld  f1,-7*8-12/*(trouble-sin)+1*8*/(a0)
 // lui     a1,%hi(errno)
 // li      a2, EDOM
 vfmerge.vfm X,X,f1,v0 // Put a NaN in each affected lane.
 // sw      a2,%lo(errno)(a1)
 j constrain_inputs
FUNC_END (__riscv_vect_sin)

#endif /* __riscv_v */
