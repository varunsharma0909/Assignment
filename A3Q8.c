#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("Given number is positive");
    }
    else
    {
        if (x < 0)
        {
            printf("Given number is negative");
        }
        else
        {
            printf("Given number is zero");
        }
    }

    return 0;
}