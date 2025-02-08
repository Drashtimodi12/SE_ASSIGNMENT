// Write a program in C to remove characters from a string except alphabets. 
#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[200];
    int j = 0;

    printf("Enert a String: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String After the removing non-alphabet characters: %s", str);
}