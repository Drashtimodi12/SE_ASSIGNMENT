// Calculate person’s insurance premium based on salary
#include<stdio.h>
int main() 
{
    float salary, premium;
    printf("Enter your annual salary: ");
    scanf("%f", &salary);

    if (salary <= 0) 
    {
        printf("Invalid salary amount. Please enter a valid positive number.\n");
        return 1; 
    }

    if (salary < 30000) 
    {
        premium = salary * 0.02;  // 2% of salary for salaries below 30,000
    } 
    else if (salary >= 30000 && salary <= 60000) 
    {
        premium = salary * 0.03;  // 3% of salary for salaries between 30,000 and 60,000
    } 
    else 
    {
        premium = salary * 0.04;  // 4% of salary for salaries above 60,000
    }

    printf("Your insurance premium is: %f\n", premium);
}
