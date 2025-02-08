// WAP that checks whether a given number is a prime number or not using a for loop.
#include <stdio.h>
int main()
{
    int num, i, prime=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // less than 2 (not prime)
    if (num <= 1)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0) // divide by 2
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
}
