#include <stdio.h>

int maior(int n, int n1, int n2){
    int ma = 0;
   if (n1 > n && n1 > n2){
        ma = n1;
   }else if (n2 > n && n2 > n1){
         ma = n2;
   }else{
        ma = n;
   }
    return ma; 
}
int menor(int n, int n1, int n2){
      int me = 0;
   if (n1 < n && n1 < n2){
        me = n1;
   }else if (n2 < n && n2 < n1){
         me = n2;
   }else{
        me = n;
   }    
    return me;
}

int main(){

    int n1,n2,n3;

    scanf("%d", &n1); // 3
    scanf("%d", &n2); // 9
    scanf("%d", &n3); // 1

    printf("%d\n", maior(n1,n2,n3));
    printf("%d",menor(n1,n2,n3));
    

    return 0;
}