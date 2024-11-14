/* Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary. */

#include<stdio.h>
int main()
{
    float salary, insurance, loan,  total, remaining_salary;
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    if (salary <= 0) 
    {
        printf("Invalid salary amount. Please enter a valid positive number.\n");
        return 1; 
    }

    insurance=(10.0 / 100.0)*salary;
    printf("10%% Insurance Premium: %f\n", insurance);
    loan= (10.0 / 100.0)*salary;
    printf("10%% Loan Installment: %f\n", loan);

    total=insurance+loan;

    remaining_salary=salary-total;

    printf("Your remaining salary after deductions is: %f\n", remaining_salary);


}
