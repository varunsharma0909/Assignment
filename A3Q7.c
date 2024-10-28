#include <stdio.h>

int main()
{
    int x, d1, d2, d3, d4;

    printf("Enter four digit integer: ");
    scanf("%d", &x);

    d1 = (x % 10) / 1;

    d2 = ((x % 100) - d1) / 10;

    d3 = ((x % 1000) - d2) / 100;

    d4 = ((x % 10000) - d3) / 1000;

    printf("Digit in ones place: %d\n", d1);

    printf("Digit in tens place: %d\n", d2);

    printf("Digit in hundreds place: %d\n", d3);
    
    printf("Digit in thousands place: %d\n", d4);

    return 0;
}