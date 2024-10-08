/*real e sua fração*/

#include <stdlib.h>
#include <stdio.h>

void fracao(float num, int *inteiro, float *frac){
    *inteiro = (int)num;
    *frac = num-*inteiro;
}

int main(){
    float num = 1.1;
    int inteiro;
    float frac;
    
    fracao(num, &inteiro, &frac);
    printf("o numero real : %f\n", num);
    printf("o numero real inteiro : %i\n", inteiro);
    printf("a fracao do numero real : %f\n", frac);
}