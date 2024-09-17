#include <stdio.h>
#include <ctype.h> // Para a função tolower()

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    // Converter o caractere para minúsculo para simplificar a verificação
    //c = tolower(c);

 
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("O caractere '%c' é uma vogal.\n", c);
    } else {
        printf("O caractere '%c' não é uma vogal.\n", c);
    }

    return 0;
}
