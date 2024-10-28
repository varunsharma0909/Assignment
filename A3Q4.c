#include <stdio.h>

int main()
{
    int year;

    printf("Enter amount of days: ");
    scanf("%d", &year);

    if ( year % 366 == 0)
    {
        printf("The given year is a leap year");
    }
    else 
    {
        printf("The given year is not a leap year");
    }    

    return 0;
}