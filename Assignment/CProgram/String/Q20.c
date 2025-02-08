// Challenge: Extend the program to also count digits and special characters.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[200];
    int alphabet = 0, number = 0, specialcharacter = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if(ch >= 'a' && ch <= 'z')
        {
            alphabet++;
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
    printf("Total digits: %d\n", number);
    printf("Total special characters: %d\n", specialcharacter);
}