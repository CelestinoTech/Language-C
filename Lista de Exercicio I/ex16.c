#include <stdio.h>

int main(){
    float a,b,c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (((a+b) > c) && ((a+c) > b) && (b+c)>a){
        printf("Podemos formar um triangulo\n");
        if (a == b && a == c && c == b) printf("Triangulo equilatero\n");
        if (a == b || a == c || c == b) printf("Triangulo Isosceles\n");
        if (a != b && a != c && c != b) printf("Triangulo Escaleno\n");
    }else{
        printf("Nao eh um triangulo");
    }
    
    return 0;
}