#include <stdio.h>

int main() {
    int t;
    int p1 = 3, p2 = 3, p3 = 4; // Pesos para a média ponderada
    float n1, n2, n3; // Notas

    // Entrada das notas
    printf("Digite as notas:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    // Escolha do tipo de média
    printf("Escolha o tipo de média:\n");
    printf("1 - Aritmética\n");
    printf("2 - Ponderada\n");
    scanf("%d", &t);

    // Variável para armazenar o resultado da média
    float media;

    // Cálculo da média com base na escolha do usuário
    if (t == 1) {
        // Média ponderada (pesos: 3, 3, 4)
        media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
    } else if (t == 2) {
        // Média aritmética
        media = (n1 + n2 + n3) / 3;
    } else {
        printf("Opção inválida!\n");
        return 1; // Retorna erro se a opção for inválida
    }

    // Exibe o resultado da média
    printf("A média é: %.2f\n", media);

    return 0; // Sucesso
}
