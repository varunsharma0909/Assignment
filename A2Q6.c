#include <stdio.h>

int main()
{
    float d, f;

    printf("Enter distance covered: ");
    scanf("%f", &d);

    printf("Enter fuel consumed: ");
    scanf("%f", &f);

    printf("Average consumption:%.3f", (d / f));
    
    return 0;
}