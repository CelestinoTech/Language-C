/*1) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.*/

#include <stdio.h>
#include <windows.h>

int main(){
    int n1,n2,ntroca;

    printf("Digite um numero: \n");
    scanf("%d",&n1);

    printf("Digite outro numero: \n");
    scanf("%d",&n2);

    printf("Primeiro Numero: %d\n Segundo Numero: %d\n",n1,n2);
    ntroca = n1;
    n1 = n2;
    n2 = ntroca;
    
    printf("Trocando numeros...\n");
    Sleep(5000);
    printf("Primeiro Numero: %d\n Segundo Numero: %d\n",n1,n2);




}