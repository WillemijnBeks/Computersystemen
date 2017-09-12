#include<stdio.h>



int main (){
    int n =2;
    int x=1;
    int shifts = 32 + (~n + 1); //32 bits - the bits you have
    printf("x = %d\n", x );
    printf("shifts = %d\n", shifts);
    int mask_check = x << shifts;
    printf("mask_check = %d\n", mask_check );
    mask_check = mask_check >> shifts;
    printf("mask check2 = %d\n", mask_check);
return 0;
}
