// Challenge: Modify the program to print all prime numbers between 1 and a given number.
#include <stdio.h>
int main()
{
    int num, i, j, prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are:\n", num);

    for (i = 2; i <= num; i++)
    {
        prime = 1;

        //divisible by 2 to sqrt(i)
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prime = 0; 
                break;     
            }
        }

        if (prime)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
