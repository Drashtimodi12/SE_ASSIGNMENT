// Calculate person’s Annual salary
#include<stdio.h>
int main()
{
    float salary, annual;
    printf("Enter Mothly Salary:");
    scanf("%f",&salary);
    if (salary <= 0) 
    {
        printf("Invalid salary amount. Please enter a valid positive number.\n");
        return 1; 
    }
    annual=12*salary;
    printf("Your Annual Salary is: %f\n", annual);
} 