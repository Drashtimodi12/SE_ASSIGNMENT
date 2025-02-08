// Write a C program that counts the number of words in a sentence entered by the user.
#include<stdio.h>
int main()
{
    char str[200];
    int count = 0, i = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
    {
        if ((str[i] == ' ' || str[i] == '\n') && (str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n')) 
        {
            count++;
        }
        i++;
    }
    if (i > 0 && str[0] != ' ' && str[0] != '\n') 
    {
        count++;  
    }

    printf("Total number of words: %d\n", count);

}