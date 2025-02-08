// Write a program in C to count the total number of vowels or consonants in a string.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[200];
    int vowel = 0, constant = 0, alphabet = 0, number = 0, specialcharacter = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if(ch >= 'a' && ch <= 'z')
        {
            alphabet++;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowel++;
            }   
            else
            {
                constant++;
            }
        } 
        else if(str[i] >= '0' && str[i] <= '9')
        {
            number++;
        }
        else if(str[i] !='\n')
        {
            specialcharacter++;
        }
    }
    printf("Total alphabets: %d\n", alphabet);
    printf("Total vowels: %d\n", vowel);
    printf("Total constants: %d\n", constant);
    printf("Total digits: %d\n", number);
    printf("Total special characters: %d\n", specialcharacter);
}