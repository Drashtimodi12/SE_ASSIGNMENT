// Write a program in C to find the largest and smallest words in a string.
#include<stdio.h>
#include<string.h>
#include <limits.h>
int main()
{
    char str[200], longword[200], shortword[200];
    int maxlength = 0, minlength = INT_MAX;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char *word = strtok(str, " ");
    while (word != NULL) 
    {
        int length = strlen(word);
        if (length > maxlength) 
        {
            maxlength = length;
            strcpy(longword, word);
        }
        if (length < minlength) 
        {
            minlength = length;
            strcpy(shortword, word);
        }
        word = strtok(NULL, " ");
    }

    printf("The longest word is '%s' with length %d.\n", longword, maxlength);
    printf("The shortest word is '%s' with length %d.\n", shortword, minlength);

}