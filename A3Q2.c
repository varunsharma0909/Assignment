#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Enter first integer: ");
    scanf("%d", &x);

    printf("Enter second integer: ");
    scanf("%d", &y);

    printf("Enter third integer: ");
    scanf("%d", &z);

    if ( x>y && x>z )
    {
        printf("X (%d) is maximum", x);
    }
    else
    {
        if ( y>x && y>z )
        {
            printf("Y (%d) is maximum", y);
        }
        else 
        {
            printf("Z (%d) is maximum", z);
        }
    }

    return 0;
}