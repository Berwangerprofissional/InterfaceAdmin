/*
comparacao dos numeros
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a = 10;
    int b = 10;

    int *enderecoA = &a;
    int *enderecoB = &b;

    if (enderecoA > enderecoB){
        printf("O endereco da variavel 'a' e maior que o endereco da variavel 'b'\n");
        printf("%p e %x sao o endereco de memoria de 'a'\n", enderecoA, enderecoA);
        printf("%p e %x sao o endereco de memoria de 'b'\n", enderecoB, enderecoB);
    } else if (enderecoB > enderecoA){
        printf("O endereco da variavel 'b' e maior que o endereco da variavel 'a'\n");
        printf("%p e %x sao o endereco de memoria de 'b'\n", enderecoB, enderecoB);
        printf("%p e %x sao o endereco de memoria de 'b'\n", enderecoB, enderecoB);
        printf("%p e %x sao o endereco de memoria de 'a'\n", enderecoA, enderecoA);
        printf("%p e %x sao o endereco de memoria de 'a'\n", enderecoA, enderecoA);
    } else {
        printf("As variaveis tem o mesmo endereco de memoria");
    }
}
