// Accept 5 employees name and salary and count average and total salary 

#include<stdio.h>
int main()
{
    char name[5][20];
    float salary[5], total_salary, average_salary;
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter employess name %d: ", i+1);
        scanf("%s",&name[i]);
        printf("Enter monthly salary %d: ", i+1);
        scanf("%f",&salary[i]);

        total_salary += salary[i];
        
    }
    average_salary= total_salary / 5;

    printf("\nToal Salary: %f\n", total_salary);
    printf("Average Salary: %f\n", average_salary);
}