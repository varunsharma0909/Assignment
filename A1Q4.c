#include <stdio.h>
int main()
{
    float pi = 3.14,r;
    float volume;

    printf("Radius of sphere:");
    scanf("%f",&r);

    volume = 4* pi * r * r * r/3;

    printf("Volume of sphere= %.6f", volume);
    return 0;
}