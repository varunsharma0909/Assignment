#include <stdio.h>

int main()
{
    char x, m, l;

    printf("Enter first character:\n");
    scanf(" %c", &x);

    printf("Enter second character:\n");
    scanf(" %c", &m);

    printf("Enter third character:\n");
    scanf(" %c", &l);
    
    printf("The reverse of %c%c%c is %c%c%c", x, m, l, l, m, x);

    return 0;
}