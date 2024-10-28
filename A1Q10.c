#include <stdio.h>
int main ()
{
    int se;

    printf("Input Seconds: ");
    scanf("%d",&se);
    
    int h,m,s,th;

    h = se / 3600;
    th = se % 3600;
    m = th / 60;
    s = th % 60;

    printf("H:M:S- %d:%d:%d", h, m, s);

    return 0;
}