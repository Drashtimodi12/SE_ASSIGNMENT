/* Take string input from user and perform string operations listed below :
● reverse a string
● Concatenation
● Palindrome
● Copy a string
● Length of the string
● Frequency of character in s string
● Find number of vowels and consonants
● Find number of blank spaces and digits
As given above perform the operation as per user’s choice
If user will not select any of the above then it should not perform any operation and
give an appropriate user friendly message
After performing the operation ask the user if the user wants to continue or not ?
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100], str2[100], ch, copy[100];
    int choice;
    char cont;

    do
    {
        printf("\nEnter a string: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
// It shows All operation and user choose any one option
        printf("\nChosse any one Operation.\n");
        printf("1. Reverse A String.\n");
        printf("2. Concatenation\n");
        printf("3. Palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of character in s string\n");
        printf("7. Find number of vowels and consonants\n");
        printf("8. Find number of blank spaces and digits\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume newline character left by scanf

// Operation 1: Reverse a string
        if(choice == 1)
        {
            int length = strlen(str);
            printf("Reversed String: ");
            for(int i = length - 1; i >= 0; i--)
            {
                printf("%c", str[i]); 
            }
            printf("\n");
        }
// Operation 2: Concatenation
        else if(choice == 2)
        {
            printf("Enter another string to concatenate: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0'; 
            strcat(str, str2);
            printf("Concatenated string: %s\n", str);
        }
// Opertion 3: Palindrome
        else if (choice == 3) 
        {
            int length = strlen(str);
            int isPalindrome = 1;
            for (int i = 0; i < length / 2; i++) 
            {
                if (str[i] != str[length - i - 1]) 
                {
                    isPalindrome = 0;
                    break;
                }
            }
            if (isPalindrome) 
            {
                printf("The string is a palindrome.\n");
            } else 
            {
                printf("The string is not a palindrome.\n");
            }
        }
// Operation 4: Copy a string
        else if (choice == 4) 
        {
            strcpy(copy, str);
            printf("Copied string: %s\n", copy);
        }
// Operation 5: Length of the string
        else if (choice == 5) 
        {
            int length = strlen(str);
            printf("Length of the string: %d\n", length);

        } 
// Operation 6: Frequency of character in s string
        else if (choice == 6) 
        {
            printf("Enter the character to find frequency: ");
            scanf("%c", &ch);
            getchar(); 
            int count = 0;
            for (int i = 0; str[i] != '\0'; i++) 
            {
                if (str[i] == ch) 
                {
                    count++;
                }
            }
            printf("Frequency of '%c' in the string: %d\n", ch, count);
        }
// Operation 7: Find number of vowels and consonants
        else if (choice == 7) 
        {
            int vowels = 0, consonants = 0;
            for (int i = 0; str[i] != '\0'; i++) 
            {
                char ch = tolower(str[i]);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
                {
                    vowels++;
                } 
                else if (isalpha(ch)) 
                {
                    consonants++;
                }
            }
            printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
        } 
// Operation 8: Find number of blank spaces and digits
        else if (choice == 8) 
        {
            int spaces = 0, digits = 0;
            for (int i = 0; str[i] != '\0'; i++) 
            {
                if (isspace(str[i])) 
                {
                    spaces++;
                } 
                else if (isdigit(str[i])) 
                {
                    digits++;
                }
            }
            printf("Spaces: %d, Digits: %d\n", spaces, digits);
        }
        else 
        {
            printf("Invalid choice! Please select a valid option.\n");
        }
// Ask if the user wants to continue
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &cont);
        getchar(); 
    } 
    while (cont == 'y' || cont == 'Y');
    printf("Program ended.\n");
}

