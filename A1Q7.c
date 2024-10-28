#include <stdio.h>
int main()
{
    int a1,a2,a3;
    
    printf("Enter two angles of triangle seprated by comma: ");
    scanf("%d,%d", &a1, &a2);

    a3 = 180 - ( a1 + a2);

    printf("Third angle of triangle = %d", a3);

    return 0;
}