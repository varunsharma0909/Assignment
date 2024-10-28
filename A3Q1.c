#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter First Integer:\n");
    scanf("%d", &x);

    printf("Enter Second Integer:\n");
    scanf("%d", &y);

    if (x>y)
    {
        printf("X (%d) is maximum\n", x);
    }
    
    else 
    {
        printf("Y (%d) is maximum\n", y);
    }

    return 0;
}