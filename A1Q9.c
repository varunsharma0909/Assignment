#include <stdio.h>
int main()
{
    int amt;

    printf("Enter amount of money: ");
    scanf("%d",&amt);

    int a,b,c,d,e,f,g,h,i,j,k,l,m;

    a = amt / 100;
    b = amt % 100;
    c = b / 50;
    d = b % 50;
    e = d / 20;
    f = d % 20;
    g = f / 10;
    h = f % 10;
    i = h / 5;
    j = h % 5;
    k = j / 2;
    l = j % 2;
    m = l / 1;

    printf("%d Note(s) of 100.00\n",a);
    printf("%d Note(s) of 50.00\n",c);
    printf("%d Note(s) of 20.00\n",e);
    printf("%d Note(s) of 10.00\n",g);
    printf("%d Note(s) of 5.00\n",i);
    printf("%d Note(s) of 2.00\n",k);
    printf("%d Note(s) of 1.00\n",m);

    return 0;
}