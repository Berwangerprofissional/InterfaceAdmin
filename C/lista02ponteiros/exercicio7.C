/*calculando volume*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcEsfera(float R, float *area, float *volume){
    *area = 4* P * pow(R,2);
    *volume = (4.0/3.0) * M_PI * pow(R,3);
}

int main(){
    float area=0;
    float volume=0;
    float raio = 5.0;

    calcEsfera(raio, &area, &volume);

    printf("%f eh a area\n", area);
    printf("%f eh o volume\n",volume);
}