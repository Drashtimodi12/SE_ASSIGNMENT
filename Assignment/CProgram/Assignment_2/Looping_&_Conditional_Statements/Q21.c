// Accept 3 numbers from user using while loop and check each numbers palindrome
#include <stdio.h>
int main()
{
    int num[3], rem, rev = 0, original_num;
    printf("Enter 3 Numbers.\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        original_num = num[i];
        rev = 0;

        while (original_num > 0)
        {
            rem = original_num % 10;
            rev = rev * 10 + rem;
            original_num = original_num / 10;
        }
        if (rev == num[i])
        {
            printf("%d Number is palindrome.\n", num[i]);
        }
        else
        {
            printf("%d Number is not a palindrome.\n", num[i]);
        }
    }
}