/* { dg-do run } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize " } */
/* { dg-require-effective-target riscv_d } */
/* { dg-require-effective-target riscv_v_ok } */
/* { dg-require-effective-target riscv_zfh_ok } */
/* { dg-add-options riscv_v } */
/* { dg-add-options riscv_zfh } */

#include "gather_load_19.c"
#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    uint64_t dest_f1[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint16_t src1_f1[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint8_t src2_f1[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    uint32_t indices_f1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint64_t expect_f1[] = {96,99,102,105,108,111,114,23,24,25,26,27,28,29,30,31};
    int len_f1 = sizeof(indices_f1)/sizeof(indices_f1[0]);
    f1(dest_f1,src1_f1,src2_f1,indices_f1);
    for(int i=0; i<len_f1; i++) {
        if (dest_f1[i]!=expect_f1[i] ) {
            printf("f1=dest_f1:%d,expect_f1:%d\n",dest_f1[i],expect_f1[i]);
            __builtin_abort();
        }
    }

    uint64_t dest_f2[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint16_t src1_f2[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint8_t src2_f2[] = {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    uint64_t indices_f2[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    uint64_t expect_f2[] = {96,99,102,105,108,111,114,23,24,25,26,27,28,29,30,31};
    int len_f2 = sizeof(indices_f2)/sizeof(indices_f2[0]);
    f2(dest_f2,src1_f2,src2_f2,indices_f2);
    for(int i=0; i<len_f2; i++) {
        if (dest_f2[i]!=expect_f2[i] ) {
            printf("f2=dest_f2:%d,expect_f2:%d\n",dest_f2[i],expect_f2[i]);
            __builtin_abort();
        }
    }

    uint64_t dest_f3[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    uint16_t src1_f3[] = {32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47};
    uint8_t *src2_f3[16];
    uint8_t test_f3[]= {48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
    for(int i=0; i<16; i++) {
        src2_f3[i]=malloc(sizeof(uint8_t*)*1);
        *src2_f3[i]=test_f3[i];
    }
    uint64_t expect_f3[] = {96,99,102,105,108,111,114,23,24,25,26,27,28,29,30,31};
    f3(dest_f3,src1_f3,src2_f3);
    for(int i=0; i<16; i++) {
        if (dest_f3[i]!=expect_f3[i] ) {
            printf("f3=dest_f3:%d,expect_f3:%d\n",dest_f3[i],expect_f3[i]);
            __builtin_abort();
        }
    }



    return 0;
}
