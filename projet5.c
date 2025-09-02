#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int x , f ;
    printf("entrer un nombre de x: \n");
    scanf("%d",&x);
    printf("l'expression est:((((3x+2)x-5)x-1)x+7)x-6 \n");
    f = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("le resultat est: %d\n",f);
    return 0;
}