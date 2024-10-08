#include <stdio.h>

int Comb(int n, int k) {
    // Caso base 1: se k == 1, há n combinações possíveis
    if (k == 1) {
        return n;
    }
    // Caso base 2: se k == n, há 1 combinação possível
    else if (k == n) {
        return 1;
    }
    // Caso recursivo
    else {
        return Comb(n - 1, k - 1) + Comb(n - 1, k);
    }
}

int main() {
    int n, k;
    printf("Digite o numero total de pessoas (n): ");
    scanf("%d", &n);
    printf("Digite o numero de pessoas no grupo (k): ");
    scanf("%d", &k);

    int resultado = Comb(n, k);
    printf("O numero de grupos possíveis é: %d\n", resultado);

    return 0;
}