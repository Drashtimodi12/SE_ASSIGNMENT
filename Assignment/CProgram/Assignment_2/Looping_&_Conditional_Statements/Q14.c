// Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>
int main()
{
    int num[5], number, fact = 1, i;

    printf("Enter 5 number.\n");
    for (i = 0; i < 5; i++)
    {
        printf("number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (int j = 0; j < 5; j++)
    {
        number = num[j];
        fact = 1;

        i = number;
        while (i > 1)
        {
            fact = fact * i;
            i--;
        }
    }
    printf("%d \t", fact);
}