/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize " } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "gather_load_15.c"
#include <stdio.h>

int main (void)
{
    uint16_t dest_uint16_t_uint8_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint16_t src1_uint16_t_uint8_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint8_t src2_uint16_t_uint8_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    int32_t indices_uint16_t_uint8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint16_t expect_uint16_t_uint8_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_uint16_t_uint8_t = sizeof(indices_uint16_t_uint8_t)/sizeof(indices_uint16_t_uint8_t[0]);
    f_uint16_t_uint8_t(dest_uint16_t_uint8_t,src1_uint16_t_uint8_t,src2_uint16_t_uint8_t,indices_uint16_t_uint8_t,len_uint16_t_uint8_t);
    for(int i=0; i<len_uint16_t_uint8_t; i++) {
        if (dest_uint16_t_uint8_t[i]!=expect_uint16_t_uint8_t[i] ) {
            printf("f_uint16_t_uint8_t=dest_uint16_t_uint8_t:%d,expect_uint16_t_uint8_t:%d\n",dest_uint16_t_uint8_t[i],expect_uint16_t_uint8_t[i]);
            __builtin_abort();
        }
    }

    uint32_t dest_uint32_t_uint8_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint32_t src1_uint32_t_uint8_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint8_t src2_uint32_t_uint8_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    int32_t indices_uint32_t_uint8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint32_t expect_uint32_t_uint8_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_uint32_t_uint8_t = sizeof(indices_uint32_t_uint8_t)/sizeof(indices_uint32_t_uint8_t[0]);
    f_uint32_t_uint8_t(dest_uint32_t_uint8_t,src1_uint32_t_uint8_t,src2_uint32_t_uint8_t,indices_uint32_t_uint8_t,len_uint32_t_uint8_t);
    for(int i=0; i<len_uint32_t_uint8_t; i++) {
        if (dest_uint32_t_uint8_t[i]!=expect_uint32_t_uint8_t[i] ) {
            printf("f_uint32_t_uint8_t=dest_uint32_t_uint8_t:%d,expect_uint32_t_uint8_t:%d\n",dest_uint32_t_uint8_t[i],expect_uint32_t_uint8_t[i]);
            __builtin_abort();
        }
    }

    uint64_t dest_uint64_t_uint8_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint64_t src1_uint64_t_uint8_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint8_t src2_uint64_t_uint8_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    int32_t indices_uint64_t_uint8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint64_t expect_uint64_t_uint8_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_uint64_t_uint8_t = sizeof(indices_uint64_t_uint8_t)/sizeof(indices_uint64_t_uint8_t[0]);
    f_uint64_t_uint8_t(dest_uint64_t_uint8_t,src1_uint64_t_uint8_t,src2_uint64_t_uint8_t,indices_uint64_t_uint8_t,len_uint64_t_uint8_t);
    for(int i=0; i<len_uint64_t_uint8_t; i++) {
        if (dest_uint64_t_uint8_t[i]!=expect_uint64_t_uint8_t[i] ) {
            printf("f_uint64_t_uint8_t=dest_uint64_t_uint8_t:%d,expect_uint64_t_uint8_t:%d\n",dest_uint64_t_uint8_t[i],expect_uint64_t_uint8_t[i]);
            __builtin_abort();
        }
    }

    _Float16 dest__Float16_uint8_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    _Float16 src1__Float16_uint8_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    uint8_t src2__Float16_uint8_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    int32_t indices__Float16_uint8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    _Float16 expect__Float16_uint8_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len__Float16_uint8_t = sizeof(indices__Float16_uint8_t)/sizeof(indices__Float16_uint8_t[0]);
    f__Float16_uint8_t(dest__Float16_uint8_t,src1__Float16_uint8_t,src2__Float16_uint8_t,indices__Float16_uint8_t,len__Float16_uint8_t);
    for(int i=0; i<len__Float16_uint8_t; i++) {
        if (dest__Float16_uint8_t[i]!=expect__Float16_uint8_t[i] ) {
            printf("f__Float16_uint8_t=dest__Float16_uint8_t:%d,expect__Float16_uint8_t:%d\n",dest__Float16_uint8_t[i],expect__Float16_uint8_t[i]);
            __builtin_abort();
        }
    }

    float dest_float_uint8_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    float src1_float_uint8_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    uint8_t src2_float_uint8_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    int32_t indices_float_uint8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    float expect_float_uint8_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len_float_uint8_t = sizeof(indices_float_uint8_t)/sizeof(indices_float_uint8_t[0]);
    f_float_uint8_t(dest_float_uint8_t,src1_float_uint8_t,src2_float_uint8_t,indices_float_uint8_t,len_float_uint8_t);
    for(int i=0; i<len_float_uint8_t; i++) {
        if (dest_float_uint8_t[i]!=expect_float_uint8_t[i] ) {
            printf("f_float_uint8_t=dest_float_uint8_t:%d,expect_float_uint8_t:%d\n",dest_float_uint8_t[i],expect_float_uint8_t[i]);
            __builtin_abort();
        }
    }

    double dest_double_uint8_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    double src1_double_uint8_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    uint8_t src2_double_uint8_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    int32_t indices_double_uint8_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    double expect_double_uint8_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len_double_uint8_t = sizeof(indices_double_uint8_t)/sizeof(indices_double_uint8_t[0]);
    f_double_uint8_t(dest_double_uint8_t,src1_double_uint8_t,src2_double_uint8_t,indices_double_uint8_t,len_double_uint8_t);
    for(int i=0; i<len_double_uint8_t; i++) {
        if (dest_double_uint8_t[i]!=expect_double_uint8_t[i] ) {
            printf("f_double_uint8_t=dest_double_uint8_t:%d,expect_double_uint8_t:%d\n",dest_double_uint8_t[i],expect_double_uint8_t[i]);
            __builtin_abort();
        }
    }

    uint32_t dest_uint32_t_uint16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint32_t src1_uint32_t_uint16_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint16_t src2_uint32_t_uint16_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    int32_t indices_uint32_t_uint16_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint32_t expect_uint32_t_uint16_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_uint32_t_uint16_t = sizeof(indices_uint32_t_uint16_t)/sizeof(indices_uint32_t_uint16_t[0]);
    f_uint32_t_uint16_t(dest_uint32_t_uint16_t,src1_uint32_t_uint16_t,src2_uint32_t_uint16_t,indices_uint32_t_uint16_t,len_uint32_t_uint16_t);
    for(int i=0; i<len_uint32_t_uint16_t; i++) {
        if (dest_uint32_t_uint16_t[i]!=expect_uint32_t_uint16_t[i] ) {
            printf("f_uint32_t_uint16_t=dest_uint32_t_uint16_t:%d,expect_uint32_t_uint16_t:%d\n",dest_uint32_t_uint16_t[i],expect_uint32_t_uint16_t[i]);
            __builtin_abort();
        }
    }

    uint64_t dest_uint64_t_uint16_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint64_t src1_uint64_t_uint16_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint16_t src2_uint64_t_uint16_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    int32_t indices_uint64_t_uint16_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint64_t expect_uint64_t_uint16_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_uint64_t_uint16_t = sizeof(indices_uint64_t_uint16_t)/sizeof(indices_uint64_t_uint16_t[0]);
    f_uint64_t_uint16_t(dest_uint64_t_uint16_t,src1_uint64_t_uint16_t,src2_uint64_t_uint16_t,indices_uint64_t_uint16_t,len_uint64_t_uint16_t);
    for(int i=0; i<len_uint64_t_uint16_t; i++) {
        if (dest_uint64_t_uint16_t[i]!=expect_uint64_t_uint16_t[i] ) {
            printf("f_uint64_t_uint16_t=dest_uint64_t_uint16_t:%d,expect_uint64_t_uint16_t:%d\n",dest_uint64_t_uint16_t[i],expect_uint64_t_uint16_t[i]);
            __builtin_abort();
        }
    }


    float dest_float_uint16_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    float src1_float_uint16_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    uint16_t src2_float_uint16_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    int32_t indices_float_uint16_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    float expect_float_uint16_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len_float_uint16_t = sizeof(indices_float_uint16_t)/sizeof(indices_float_uint16_t[0]);
    f_float_uint16_t(dest_float_uint16_t,src1_float_uint16_t,src2_float_uint16_t,indices_float_uint16_t,len_float_uint16_t);
    for(int i=0; i<len_float_uint16_t; i++) {
        if (dest_float_uint16_t[i]!=expect_float_uint16_t[i] ) {
            printf("f_float_uint16_t=dest_float_uint16_t:%d,expect_float_uint16_t:%d\n",dest_float_uint16_t[i],expect_float_uint16_t[i]);
            __builtin_abort();
        }
    }

    double dest_double_uint16_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    double src1_double_uint16_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    uint16_t src2_double_uint16_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    int32_t indices_double_uint16_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    double expect_double_uint16_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len_double_uint16_t = sizeof(indices_double_uint16_t)/sizeof(indices_double_uint16_t[0]);
    f_double_uint16_t(dest_double_uint16_t,src1_double_uint16_t,src2_double_uint16_t,indices_double_uint16_t,len_double_uint16_t);
    for(int i=0; i<len_double_uint16_t; i++) {
        if (dest_double_uint16_t[i]!=expect_double_uint16_t[i] ) {
            printf("f_double_uint16_t=dest_double_uint16_t:%d,expect_double_uint16_t:%d\n",dest_double_uint16_t[i],expect_double_uint16_t[i]);
            __builtin_abort();
        }
    }


    uint64_t dest_uint64_t_uint32_t[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint64_t src1_uint64_t_uint32_t[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint32_t src2_uint64_t_uint32_t[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    int32_t indices_uint64_t_uint32_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint64_t expect_uint64_t_uint32_t[] = {96,99,102,105,108,111,114,117,120,123,126,129,132,135,138,141};
    int len_uint64_t_uint32_t = sizeof(indices_uint64_t_uint32_t)/sizeof(indices_uint64_t_uint32_t[0]);
    f_uint64_t_uint32_t(dest_uint64_t_uint32_t,src1_uint64_t_uint32_t,src2_uint64_t_uint32_t,indices_uint64_t_uint32_t,len_uint64_t_uint32_t);
    for(int i=0; i<len_uint64_t_uint32_t; i++) {
        if (dest_uint64_t_uint32_t[i]!=expect_uint64_t_uint32_t[i] ) {
            printf("f_uint64_t_uint32_t=dest_uint64_t_uint32_t:%d,expect_uint64_t_uint32_t:%d\n",dest_uint64_t_uint32_t[i],expect_uint64_t_uint32_t[i]);
            __builtin_abort();
        }
    }


    double dest_double_uint32_t[] = {16.1,17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1};
    double src1_double_uint32_t[] = {32.0,33.0,34.0,35.0,36.0,37.0,38.0,39.0,40.0,41.0,42.0,43.0,44.0,45.0,46.0,47.0};
    uint32_t src2_double_uint32_t[] = {48.0,49.0,50.0,51.0,52.0,53.0,54.0,55.0,56.0,57.0,58.0,59.0,60.0,61.0,62.0,63.0};
    int32_t indices_double_uint32_t[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    double expect_double_uint32_t[] = {96.1,99.1,102.1,105.1,108.1,111.1,114.1,117.1,120.1,123.1,126.1,129.1,132.1,135.1,138.1,141.1};
    int len_double_uint32_t = sizeof(indices_double_uint32_t)/sizeof(indices_double_uint32_t[0]);
    f_double_uint32_t(dest_double_uint32_t,src1_double_uint32_t,src2_double_uint32_t,indices_double_uint32_t,len_double_uint32_t);
    for(int i=0; i<len_double_uint32_t; i++) {
        if (dest_double_uint32_t[i]!=expect_double_uint32_t[i] ) {
            printf("f_double_uint32_t=dest_double_uint32_t:%d,expect_double_uint32_t:%d\n",dest_double_uint32_t[i],expect_double_uint32_t[i]);
            __builtin_abort();
        }
    }


    return 0;
}
