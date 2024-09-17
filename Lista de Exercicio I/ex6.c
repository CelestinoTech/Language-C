#include <stdio.h>

int main() {

    int s, m, h, se;

    printf("Digite quantos segundos deseja traduzir: \n");
    scanf("%d", &s);

    h = s / 3600;     // Calcula o total de horas
    m = (s % 3600) / 60;  // Calcula o total de minutos restantes
    se = s % 60;      // Calcula os segundos restantes

    printf("%d:%d:%d\n", h, m, se);  // Exibe no formato horas:minutos:segundos

    return 0;
}
