#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float V;
    int r;
    float p;
    printf("entrer le rayon de la sphere: \n");
    scanf("%d",&r);
    p = 3.14 ;
    V = (4.0f/3.0f)*p*r*r*r;
    printf("le voloume the sphere est: %.2f\n",V);
    return 0;
}