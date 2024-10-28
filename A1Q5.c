#include <stdio.h>
int main ()
{
    float km,m;
    printf("Enter kilometers per hour: ");
    scanf("%f",&km);

    m = (km * 0.621371);

    printf("%.6f miles per hour", m);
    
    return 0;
}