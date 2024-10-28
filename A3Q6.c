#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Valude of X: ");
    scanf("%d", &x);

    printf("Enter Value of Y: ");
    scanf("%d", &y);

    printf(" X = %d, Y = %d\n", x, y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("After swapping:\n X = %d, Y = %d", x, y);

    return 0;
}