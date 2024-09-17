#include <stdio.h>

int main(){
    float a,b,c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (((a+b) > c) && ((a+c) > b) && (b+c)>a){
        printf("Podemos formar um triangulo");
    }else{
        printf("Nao um triangulo");
    }
    
    return 0;
}