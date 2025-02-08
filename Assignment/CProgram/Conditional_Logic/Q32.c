/* Write a C program that takes three numbers from the user and determines:
•	The largest number.
•	The smallest number. */
#include <stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Enter the 1 number: ");
    scanf("%d", &num1);
    printf("Enter the 2 number: ");
    scanf("%d", &num2);
    printf("Enter the 3 number: ");
    scanf("%d", &num3);

    //largest num
    int largest = num1; 
    if (num2 > largest)
    {
        largest = num2; 
    }
    if (num3 > largest)
    {
        largest = num3; 
    }

    //smallest num
    int smallest = num1; 
    if (num2 < smallest)
    {
        smallest = num2;
    }
    if (num3 < smallest)
    {
        smallest = num3; 
    }

    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);
}
