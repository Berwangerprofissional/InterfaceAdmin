/*convertendo segundos*/

#include <stdio.h>
#include <stdlib.h>

void converteHora(int totalSegundos,int *hora, int *min, int *seg){
    *hora = totalSegundos/3600;
    totalSegundos %= 3600;

    *min = totalSegundos / 60;
    *seg = totalSegundos % 60;
}

int main(){
    int totalSeg;
    int hora;
    int min;
    int seg;
    printf("Digite os segundos\n");
    scanf("%i",&totalSeg);

    converteHora(totalSeg, &hora, &min, &seg);

    printf("%i/%i/%i",hora, min, seg);
}