/*verificar primos mias próximos com relação a um numero*/

#include <stdio.h>
#include <stdbool.h> 

bool verificarPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void primo(int *p1, int *p2, int m) {
    for (int i = m - 1; i > 1; i--) { 
        if (verificarPrimo(i)) {
            *p1 = i;
            break;
        }
    }

    for (int i = m + 1; ; i++) { 
        if (verificarPrimo(i)) {
            *p2 = i;
            break;
        }
    }
}

int main() {
    int p1;
    int p2;
    int m = 45;
    primo(&p1, &p2, m); 
    printf("%i p1, %i p2\n", p1, p2);

    printf("Numero primo mais proximo e menor que dez eh %i\n", p1);
    printf("Numero primo mais proximo e maior que dez eh %i\n", p2);

    return 0;
}
