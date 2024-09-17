#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5;
    int i = 0, me = 0;

    
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);

    (n1 > 0) ? i++ : me++;
    (n2 > 0) ? i++ : me++;
    (n3 > 0) ? i++ : me++;
    (n4 > 0) ? i++ : me++;
    (n5 > 0) ? i++ : me++;

    // Saída
    printf("Positivos: %d\n", i);
    printf("Negativos ou zeros: %d\n", me);

    return 0;
}
