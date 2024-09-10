/*Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.*/
#include <stdio.h>

int main(){
    int n1,n2;

    printf("Diga um numero: \n");
    scanf("%d",&n1);

    printf("Diga um numero: \n");
    scanf("%d",&n2);

    printf("N1 = %d\n",n1);
    printf("N2 = %d\n",n2);

    
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    

    printf("N1 = %d\n",n1);
    printf("N2 = %d\n",n2);

    return 0;
}