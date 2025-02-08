// Program of Armstrong Number in C Using For Loop & While Loop
/*Counting Digits (n): 153 has 3 digits, so n = 3.
Armstrong Calculation:
=1power3+5power3+3power3
=(1*1*1)+(5*5*5)+(3*3*3)
=1+125+27
=1531
Since 153 equals the original number, the program outputs that 153 is an Armstrong number.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int num, originalnum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalnum = num; // store number of digit
    while (originalnum != 0)
    {
        originalnum = originalnum / 10;
        ++n;
    }
    originalnum = num; // restore number

    // Calculate the sum of the power of individual digits
    for (int i = 0; i < n; i++)
    {
        remainder = originalnum % 10;
        result = pow(remainder, n) + result;
        originalnum = originalnum / 10;
    }

    // Check if num is equal to the result
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}
