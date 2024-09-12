#include <stdio.h>

float DIA = 45.00, IR = 0.08;


int main(){

    int dt;
    float sal,salbr,ir;

    printf("Digite os dias trabalhados: \n");
    scanf("%d", &dt);

    salbr = (dt * DIA);
    sal =  salbr - (salbr * IR) ;

    printf("Salario Bruto: %.2f\n", salbr);
    printf("Salario Liquido: %.2f\n", sal);
    

    return 0;
}