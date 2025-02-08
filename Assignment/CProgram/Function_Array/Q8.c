// WAP to reverse a string and check that the string is palindrome or not  
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], reverse[100];
    int length = 0, i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate length and reverse the string
    while (str[length] != '\0')
    {
        length++;
    }
    for (i = 0; i < length; i++)
    {
        reverse[i] = str[length - i - 1];
    }
    reverse[length] = '\0'; 

    printf("Reversed string: %s\n", reverse);

    // Check if the string is a palindrome
    for (i = 0; i < length; i++)
    {
        if (str[i] != reverse[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
}
