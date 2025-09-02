#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int M;
    int a , b , c , d;
   printf("entrez le montant: \n") ;
   scanf("%d",&M);
   a = M / 20 ;
   b = (M % 20) / 10 ;
   c = (M % 10) / 5 ;
   d = M % 5 ;
   printf("le nombre de billets de 20 est: %d\n",a);
   printf("le nombre de billets de 10 est: %d\n",b);
   printf("le nombre de billets de 5 est: %d\n",c);
   printf("le nombre de pieces de 1 est: %d\n",d);
   return 0;
}
