#include <stdio.h>

int main(){
    int e;
    float taxa = 5.30, d, c;

    printf("Escolha a conversão:\n1 - Real para Dólar\n2 - Dólar para Real\n");
    scanf("%d", &e);

    printf("Digite a quantidade a ser convertida: \n");
    scanf("%f", &d);

    if (e == 1) {
        c = d / taxa;
        printf("Valor em Dólares: $%.2f\n", c);
    }
    else if (e == 2) {
        c = d * taxa;
        printf("Valor em Reais: R$%.2f\n", c);
    }
    else {
        printf("Opção inválida.\n");
    }

    return 0;
}
