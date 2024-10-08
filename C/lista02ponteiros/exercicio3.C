/*endereco de memoria e seus tamanhos*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    int b;

    printf("Digite um numero\n");
    scanf("%i", &a);
    printf("Digite um outro numero\n");
    scanf("%i", &b);

    int *enderecoA = &a;
    int *enderecoB = &b;

    if (enderecoA > enderecoB){
        printf("O endereco da variavel 'a' e maior que o endereco da variavel 'b'\n");
        printf("%p e %x sao o endereco de memoria de 'a'\n", enderecoA, enderecoA);
        printf("%p e %x sao o endereco de memoria de 'b'\n", enderecoB, enderecoB);
    } else if (enderecoB > enderecoA){
        printf("O endereco da variavel 'b' e maior que o endereco da variavel 'a'\n");
        printf("%p e %x sao o endereco de memoria de 'b'\n", enderecoB, enderecoB);
        printf("%p e %x sao o endereco de memoria de 'a'\n", enderecoA, enderecoA);
    } else {
        printf("As variaveis tem o mesmo endereco de memoria");
    }
}
