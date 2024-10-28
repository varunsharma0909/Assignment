#include <stdio.h> 
int main ()
{
    int day;

    printf("Enter number of days :");
    scanf("%d",&day);

    int y,ty,w,d;

    y = day / 365;
    ty = day % 365;
    w = ty / 7;
    d = ty % 7;

    printf("Years : %d\n",y);
    printf("Weeks : %d\n",w);
    printf("Days : %d\n",d);

    return 0;
}