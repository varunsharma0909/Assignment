#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x < 20 && x > 10)
    {
        printf("Given number is within the specified range");
    }
    else
    {
        printf("Given number is not within the specified range");
    }

    return 0;
}