// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: 5)
#include <stdio.h>
int main()
{
    int num, sum, fdigit, ldigit;
    printf("Enter the Number: ");
    scanf("%d", &num);

    ldigit= num % 10; //find last digit
    fdigit= num; // find first digit

    while (fdigit >= 10)
    {
        fdigit = fdigit / 10; 
    }

    sum= fdigit +ldigit;

    printf("Sum of first and last digits is: %d\n", sum);
}