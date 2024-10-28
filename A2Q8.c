#include <stdio.h>

int main()
{
    int a, b;
     
    printf("Enter First Value(A):");
    scanf("%d", &a);

    printf("Enter Second Value(B):");
    scanf("%d", &b);

    printf("A = %d , B = %d \n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping:\n A = %d , B = %d", a, b);

    return 0;
}