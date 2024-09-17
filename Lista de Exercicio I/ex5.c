#include <stdio.h>

float CAB = 5.30;

int main(){

    int r,d;

    printf("Digite quantos reais voce tem: ");
    scanf("%d",&r);

    d = r / CAB;

    printf("Dolares: %d", d);



    return 0;
}