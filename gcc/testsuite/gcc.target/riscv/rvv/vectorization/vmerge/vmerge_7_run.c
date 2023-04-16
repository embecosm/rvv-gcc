/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize -mriscv-vector-bits=128 -flax-vector-conversions" } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */
#include <stdio.h>
#include "vmerge_7.c"


int main(void)
{
    vnx2qi vnx2qi_x= {1,2};
    vnx2qi vnx2qi_y= {101,102};
    vnx2qi vnx2qi_expect= {1,102};
    vnx2qi vnx2qi_real;
    vnx2qi_real=permute0(vnx2qi_x,vnx2qi_y);
    for(int i=0; i<2; i++)
        if(vnx2qi_real[i]!=vnx2qi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2qi_real[i],vnx2qi_expect[i]);
            __builtin_abort();
        }

    vnx2uqi vnx2uqi_x= {1,2};
    vnx2uqi vnx2uqi_y= {101,102};
    vnx2uqi vnx2uqi_expect= {1,102};
    vnx2uqi vnx2uqi_real;
    vnx2uqi_real=permute1(vnx2uqi_x,vnx2uqi_y);
    for(int i=0; i<2; i++)
        if(vnx2uqi_real[i]!=vnx2uqi_expect[i]) {
            printf("index:%d\nreal value:%d\nexpect value:%d\n",i,vnx2uqi_real[i],vnx2uqi_expect[i]);
            __builtin_abort();
        }

    return 0;
}


