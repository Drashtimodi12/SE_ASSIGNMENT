// Write a program make a sum of given number (E.g., 1523 Ans: 11)
#include <stdio.h>
int main()
{
    int num, sum = 0, digit;
    printf("Enter the Number: ");
    scanf("%d", &num);

    // Convert to positive if the number is negative
    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        digit = num % 10; // Extract the last digit
        sum = digit + sum;     // Add it to sum
        num = num / 10;   // Remove the last digit
    }

    printf("Sum of digits is: %d\n", sum);
}