#include <stdio.h>
#include <math.h>
int main()
{
    float a , b,B , x, delta_x, funca, funcb;
    printf("Cien. liet. ievadiet pirmo robežu : ");
    scanf("%f",&a);
     printf("Cien. liet. ievadiet otro robežu : ");
    scanf("%f",&b);
    printf("Cien. liet. ievadiet precizitātes vērtības iegūšanu : ");
    scanf("%f",&delta_x);
    
    int k = 0;
    B=b*M_PI;
    funca = j0(a); funcb = j0(B);
    if(funca*funcb>0){
        printf("Intervala [%.2f ; %.2f] j0(x) funkcijai",a,B);
        printf("Saknju nav (vai taja ir paru saknju skaits)\n");
        return 1;
    }
    printf("j0(%7.3f)=%7.3f\t\t\t\t",a,j0(a));
    printf("j0(%7.3f)=%7.3f\n",B,j0(B));
    
    while((B-a)>delta_x){
        k++;
        x = (a+B)/2.;
        if(funca*j0(x)>0)
        a = x;
        else
        B = x;
        printf("%2d. iteracija: j0(%7.3f)= %7.3f\t",k,a,j0(a));
        printf("j0(%7.3f)=%7.3f\t",x,j0(x));
         printf("j0(%7.3f)=%7.3f\n",B,j0(B));
    }
printf("Sakne atrodas pie x=%.3f, jo j0(x) ir %.3f\n",x,j0(x));
printf("Lai aprēķinātu šo x vērtību ar uzdoto precizitāti, vajadzēja %d iterāciju ",k);
    return 0;
}
