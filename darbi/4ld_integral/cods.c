#include <stdio.h>
#include <math.h>

void main(){
    float a, b, eps, h, interg1=0, interg2;
    int k,n=2;
   printf("Cien. liet. ievadiet pirmo robežu : ");
    scanf("%f",&a);
    printf("Cien. liet. ievadiet otro robežu : ");
    scanf("%f",&b);
    printf("Cien. liet. ievadiet precizitātes vērtības iegūšanu : ");
    scanf("%f",&eps);
    interg2=(b-a)*(j0(a)+j0(b))/n;
    while(fabs(interg2-interg1)>eps){
        n*=2;
        h=(b-a)/n;
        interg1=interg2;
        interg2=0;
        for(k=0;k<n;k++)
        interg2+=h*j0(a+(k+0.5)*h);
    }
    printf("Intergralja vertiba: %.2f\n",interg2);
}
