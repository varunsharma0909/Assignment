#include <stdio.h>
int main ()
{
    int min,h,m;

    printf("Input Minutes: ");
    scanf("%d",&min);

    h = min / 60;
    m = min % 60;

    printf("%d Hours,%d Minutes", h, m);

    return 0;
}