// WAP that takes a string from the user and counts the number of vowels and consonants in the string.
#include <stdio.h>
#include<ctype.h>
int main()
{
    char str[200];
    int vowel = 0, constant = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                constant++;
            }
        }
    }
    printf("Total vowels: %d\n", vowel);
    printf("Total constants: %d\n", constant);
}