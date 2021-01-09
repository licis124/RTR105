#include <stdio.h>
#include <math.h>
#include <conio.h>



void main(){
    float a, b, d, B, eps, h,h1,h2, interg1=0, interg2,S1,S2,x,x1,sum=0,sum1=0,integral,intergral;
    int k,n=2,i,i1;
      printf("Cien. liet. ievadiet punktu skaitu : ");
    scanf("%f",&d);
   printf("Cien. liet. ievadiet pirmo robežu : ");
    scanf("%f",&a);
    printf("Cien. liet. ievadiet otro robežu : ");
    scanf("%f",&B);
    printf("Cien. liet. ievadiet precizitātes vērtības iegūšanu : ");
    scanf("%f",&eps);
    b=M_PI/B;
    interg2=(b-a)*(j0(a)+j0(b))/n;
    //trapeces
   h1=fabs(b-a)/d;
   for(i=1;i<d;i++){
    x=a+i*h1;
    sum=sum+j0(x);
    
  }
  integral=(h1/2)*(j0(a)+j0(b)+2*sum);
  printf("Trapeces metodes intergralja vetiba : %f\n",integral);
  //trapeces beigas metode
  //Simspon metode sakums
   h2=fabs(b-a)/d;
  for(i1=1;i1<d;i1++){
    x1=a+i1*h2;
    if(i1%2==0){
      sum1=sum1+2*j0(x1);
    }
    else{
      sum1=sum1+4*j0(x1);
    }
  }
  intergral=(h2/3)*(j0(a)+j0(b)+sum1);
  printf("Simpsonas metodes intergrala vertiba : %f\n",intergral);
  //beigas
  // taisnstura sakums
    while(fabs(interg2-interg1)>eps){
        n*=2;
        h=(b-a)/n;
        interg1=interg2;
        interg2=0;
        for(k=0;k<n;k++)
        interg2+=h*j0(a+(k+0.5)*h);
    }
    
    printf("Tainstura metodes intergralja vertiba: %.2f\n",interg2);
 //beigas
}
