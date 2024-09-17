#include <stdio.h>

float IMC(float p, float a) {
    return p / (a * a);
}

int main() {
    float p, a;

    // Entrada de peso e altura
    printf("Digite seu peso: \n");
    scanf("%f", &p);
    printf("Digite sua altura: \n");
    scanf("%f", &a);

    // Cálculo do IMC
    float imc = IMC(p, a);
    printf("Seu IMC eh %.2f\n", imc);

    // Classificação do IMC
    if (imc < 18.5) {
        printf("Abaixo do Peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Peso Normal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}
