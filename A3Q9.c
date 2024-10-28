#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number to find its absolute value: ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("Absolute value of given number is: %d", x * (-1));
    }
    else
    {
        printf("Absolute value of given number is: %d", x);
    }

    return 0;
}