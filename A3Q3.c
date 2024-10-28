#include <stdio.h>

int main()
{
    int x, ans;

    printf("Enter an integer: ");
    scanf("%d", &x);

    ans = (x % 2);

    if (ans == 0)
    {
        printf("Given number (%d) is even", x);
    }
    else 
    {
        printf("Given number (%d) is odd", x);
    }

    return 0;
}