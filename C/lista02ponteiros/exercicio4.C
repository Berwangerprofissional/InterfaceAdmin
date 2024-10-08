/*soma e valores atualizados*/

#include <stdio.h>
#include <stdlib.h>
void soma(int *a, int *b){
    *a = *a + *b;
    printf("%i\n", *a);
}

int main(){
    int n1 = 1;
    int n2 = 3;
    soma(&n1, &n2);
    printf("%i eh o valor de 'a' atualizado\n", n1);
    printf("%i eh o valor de 'b' atualizado", n2);
}
