#include <stdio.h>
int main()
{
    int id, hr, ph;
    float sal;
    
    printf("Enter Employee ID:\n");
    scanf("%d",&id);
    
    printf("Enter Amount Of Hours Worked:\n");
    scanf("%d",&hr);
    
    printf("Enter Salary/hr:\n");
    scanf("%d",&ph);
    
    sal = hr * ph;
    
    printf("Employee ID= %d\n",id);
    printf("Salary= %.2f", sal);
    return 0;
}