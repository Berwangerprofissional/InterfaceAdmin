/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para cada um  deles.
Associe  as  variáveis  aos  ponteiros  (use  &).  
Modifique  os  valores  de  cada variável   usando   os   ponteiros.   
Imprima   os   valores   das   variáveis   antes   e   após   a modificação. 
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 3;
    float real = 2.2;
    char A = 'a';

    int *ponteiro = &n;
    float *ponteiroR = &real;
    char *ponteiroC = &A;

    *ponteiro = 10;
    *ponteiroR = 1.9;
    *ponteiroC = 'P';

    printf("\n\n%i numero inteiro, \n%.2f numero real, \n%c caracter\n\n", n, real, A);
    printf("%i ponteiro do numero inteiro, \n%.2f ponteiro do numero real, \n%c ponteiro do caracter", *ponteiro, *ponteiroR, *ponteiroC);

}