#include <stdio.h>
#include <math.h>
int main()
{
    double p,r,t;

    printf("Enter principle(amount):" );
    scanf("%lf",&p);
    
    printf("Enter time:");
    scanf("%lf",&t);
    
    printf("Enter rate:");
    scanf("%lf",&r);
    
    double i =  p * ((pow(( 1 + r / 100) , t)));

    printf("%.6lf",i);

    return 0;

}