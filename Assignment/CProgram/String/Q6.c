// Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main()
{
    char str[200];
    int alphabet = 0, number = 0, specialcharacter = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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