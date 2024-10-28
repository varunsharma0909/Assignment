#include <stdio.h>
#include <math.h>

int main()
{
    double s1, s2, s3, s4, s5;

    printf("Enter marks of first subject:\n");
    scanf("%lf", &s1);

    printf("Enter marks of second subject:\n");
    scanf("%lf", &s2);

    printf("Enter marks of third subject:\n");
    scanf("%lf", &s3);

    printf("Enter marks of fourth subject:\n");
    scanf("%lf", &s4);

    printf("Enter marks of fifth subject:\n");
    scanf("%lf", &s5);


    printf("Total Marks: %.0lf\n", s1 + s2 + s3 + s4 + s5);

    printf("Average Marks: %.0lf\n", (s1 + s2 + s3 + s4 + s5) / 5 );

    printf("Percentage: %.2lf\n", ( s1 + s2 + s3 + s4 + s5) / 500 * 100 );

    return  0;
} 