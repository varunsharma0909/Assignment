#include <stdio.h>

int main()
{
    float p,t,r,f;

    printf("Input principle amount: ");
    scanf("%f", &p);

    printf("Enter time: ");
    scanf("%f", &t);

    printf("Input rate: ");
    scanf("%f", &r);

    f = (p*r*t)/100;

    printf("Simple interest for given amount in %.0f years is: %f", t, f);

    return 0;
}