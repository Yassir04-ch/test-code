#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float M , MT ;
    /*M= le montant qui entrer*/ 
    /*MT= le montant avec une taxe de 5%*/ 
    printf("entrer le montant: \n");
    scanf("%f",&M);
    MT = M + (M * 0.05);
    printf("le montant total est: %.2f\n",MT);
    return 0;
}