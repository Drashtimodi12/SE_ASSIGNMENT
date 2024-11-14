// WAP that checks whether a given number is an Armstrong number or not (e.g., 153 = 1^3 + 5^3 + 3^3).
#include <stdio.h>
#include <math.h>

int main() 
{
    int num, originalnum, remainder, result=0, n=0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalnum = num; //store number of digit
    while (originalnum != 0) 
    {
        originalnum= originalnum / 10;
        ++n;
    }
    originalnum = num; //restore number
    
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
