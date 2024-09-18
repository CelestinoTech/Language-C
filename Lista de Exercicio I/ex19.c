#include <stdio.h>

int main() {
    int soma = 0;

    // Loop para somar os números ímpares de 1 até 1000
    for (int i = 1; i <= 1000; i += 2) {
        soma += i;
    }

    // Imprime o resultado da soma
    printf("A soma de todos os números ímpares de 1 a 1000 é: %d\n", soma);

    return 0;
}
