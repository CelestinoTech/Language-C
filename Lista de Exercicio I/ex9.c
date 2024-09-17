#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    n % 2 == 0 ? printf("Divisivel por 2\n") : printf("Nao divisivel por 2\n");
    n % 3 == 0 ? printf("Divisivel por 3\n") : printf("Nao divisivel por 3\n");
    n % 5 == 0 ? printf("Divisivel por 5\n") : printf("Nao divisivel por 5\n");


}