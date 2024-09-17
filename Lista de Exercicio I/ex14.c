#include <stdio.h>

int main() {
    int mes;

    // Solicita ao usuário o número do mês
    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    // Estrutura switch para determinar o número de dias do mês
    switch (mes) {
        case 1: // Janeiro
        case 3: // Março
        case 5: // Maio
        case 7: // Julho
        case 8: // Agosto
        case 10: // Outubro
        case 12: // Dezembro
            printf("O mês %d tem 31 dias.\n", mes);
            break;

        case 4: // Abril
        case 6: // Junho
        case 9: // Setembro
        case 11: // Novembro
            printf("O mês %d tem 30 dias.\n", mes);
            break;

        case 2: // Fevereiro
            printf("O mês %d tem 28 dias.\n", mes);
            break;

        default:
            // Caso o número do mês seja inválido
            printf("Número do mês inválido. Por favor, digite um número entre 1 e 12.\n");
            break;
    }

    return 0;
}
