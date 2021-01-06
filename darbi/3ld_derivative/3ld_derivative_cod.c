#include <stdio.h>
#include <math.h>


void main(){
  double a, b, x, delta_x;
   printf("Cien. liet. ievadiet pirmo robežu : ");
    scanf("%lf",&a);
     printf("Cien. liet. ievadiet otro robežu : ");
    scanf("%lf",&b);
    b = b*M_PI;
    printf("Cien. liet. ievadiet precizitātes vērtības iegūšanu  : ");
    scanf("%lf",&delta_x);
printf("x\t\tj0(x)\t\tj0\’(x)\t\t∆j0(x)\t\-j1\’(x)\t\t∆-j0(x)\n");
  x = a;
  while(x<=b)
  {
      printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,j0(x),-j1(x),(j0(x+delta_x)-j0(x))/delta_x,-j0(x),(-j0(x+delta_x)-j0(x))/delta_x);
      x += delta_x;
  }
}
