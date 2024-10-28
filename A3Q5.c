#include <stdio.h>

int main()
{
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);

    if ( (a >='a' && a<='z')  || (a >= 'A' && a<='Z'))
    {
        printf("Given character is an alphabet");
    }
    else
    {
        printf("Given character is not an alphabet");
    }

    return 0;
}