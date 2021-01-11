#include <stdio.h>
#include <math.h>
//funkcijas definīcijas apgabala vērtības (0;500)
double mans_bess(double x){
    double a,S;
    int k=0;
    a=pow(-1,k)*pow(x,2*k)/(1.);
    S=a;
    printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
    
    while(k<500){
        k++;
        a=a+(-1)*x*x/(4*k*k);
        S=S+a;
        printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
    }
    return S;
}

void main(){
    double x,y,yy;
    printf("Cien. lietotajs ievidet x vetribu :",x);
    scanf("%lf",&x);
    y=j0(x);
    printf("standarta fukncija(funkcijas izteiksme) j0 - y=j0(%.2f)=%.2f\n",x,y);
    
    yy=mans_bess(x);
    printf("lietotaja fukncija(Teilora rindas izteiksme) j0 - y=mans_bess(%.2f)=%.2f\n",x,yy);
}
