#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
float MT , P , t ;
float r1 , r2 , r3 ;
printf("entrer le montant total: \n");
scanf("%f",&MT);
printf("entrer le paiment mensuel: \n");
scanf("%f",&P);
printf("entrer le taux d'imposition: \n");
scanf("%f",&t);
r1 = MT - P + (MT * t/12 / 100);
r2 = r1 - P + (r1 * t/12 / 100);
r3 = r2 - P + (r2 * t/12 / 100);
printf("le solde reste apres le premier paiment est : %.2f\n",r1);
printf("le solde reste apres le deuxieme paiment est : %.2f\n",r2);
printf("le solde reste apres le troisieme paiment est : %.2f\n",r3);
    return 0;
}