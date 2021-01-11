#include <stdio.h>
#include <math.h>
//funkcijas definīcijas apgabala vērtības (0;500)
double mans_bess(double x){
    double a,S;
    int k=0;
    a=pow(-1,k)*pow(x,2*k)/(1.);
    S=a;
    printf("a0 = %.2f S0 = %.2f\n",S,a);
    printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
    
    while(k<500){
        k++;
        a=a+(-1)*x*x/(4*k*k);
        S=S+a;
        printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
    }
    printf("a499 = %.2f S499 = %.2f\n",S,a);
    k++;
    a=a+(-1)*x*x/(4*k*k);
    S=S+a;
    printf("a500 = %.2f S500 = %.2f\n",S,a);
     printf("j0(%.2f) caur summu : %.2f\n",x,a);
    return S;
}

void main(){
    double x,y,yy;
    printf("Cien. lietotajs ievidet x vetribu :");
    scanf("%lf",&x);
    y=j0(x);
    printf("j0(%.2f)=%.2f\n",x,y);
    
    yy=mans_bess(x);
    
    printf("             500     \n");
    printf("            _____\n");
    printf("            \\                     k   2*k\n");
     printf("             \\               (-1) * x\n");
      printf("     sin(%.f) = >           ______________\n",x);
       printf("             /                   2   k\n");
        printf("            /____            (k!) * 4\n");
        printf("            k=0\n");
        printf("\n");
         printf("                                      2\n");
          printf("                             (-1) * x\n");
           printf("rekurences reizinajas :     ___________\n"); 
           printf("                                  2\n");
           printf("                             4 * k\n");
}
