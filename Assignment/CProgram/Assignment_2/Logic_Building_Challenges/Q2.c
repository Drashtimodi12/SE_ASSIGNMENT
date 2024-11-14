// Challenge: Write a program to find all Armstrong numbers between 1 and 1000.
/* armstrong numbers:= 153=1*1*1=1
5=5*5*5=125
3=3*3*3=27
1+125+27=153 */

#include <stdio.h>
int main()
{
    int num, originalnum, remainder, result;

    printf("Armstrong numbers between 1 and 1000 are:\n");
    for (num = 1; num <= 1000; num++)
    {
        originalnum = num;
        result = 0;

        while (originalnum != 0)
        {
            remainder = originalnum % 10;
            result += remainder * remainder * remainder;
            originalnum = originalnum / 10;

            // Check if num is equal to the result
            if (result == num)
            {
                printf("%d\t", num);
            }
        }
    }
}