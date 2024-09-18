#include <stdio.h>

int main(){
    int senha = 123456,t;
    printf("Digite a Senha: \n");
    scanf("%d",&t);
    while(t != senha){
        printf("Senha incorreta, Digite novamente: \n");
        scanf("%d",&t);
    }
    printf("Senha Correta");
    
}