// Write a program of structure employee that provides the following
//b.	Write a program of structure for five employee that provides the following information -print and
// display empno, empname, address andage
#include <stdio.h>
struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};
int main() 
{
    struct Employee employees[5];

    printf("\nEnter details for Employee.\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter employee number: ");
        scanf("%d", &employees[i].empno);
        printf("Enter employee name: ");
        scanf("%s", employees[i].empname);
        printf("Enter employee address: ");
        scanf("%s", employees[i].address);
        printf("Enter employee age: ");
        scanf("%d", &employees[i].age);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Employee Address: %s\n", employees[i].address);
        printf("Employee Age: %d\n", employees[i].age);
    }
}
