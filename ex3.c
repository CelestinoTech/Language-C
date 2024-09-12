#include <stdio.h>

int main(){

    float despesa,gorjeta,valor;
    int pessoas;


    printf("Digite a despesas: \n");
    scanf("%f",&despesa);

     printf("Digite a gorjeta: \n");
     scanf("%f",&gorjeta);

     gorjeta = (gorjeta / 100);

    printf("Digite o numero de pessoas: \n");
    scanf("%d",&pessoas);

    valor = ((despesa * gorjeta) + despesa) /pessoas;
    printf("Cada pessoa devera pagar %.2f\n", valor);
    printf("Gorjeta %.0f%% \n", gorjeta*100);
    
    return 0;
}