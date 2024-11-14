// Challenge: Modify the program to find the longest word in the sentence.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200], longword[200];
    int maxlength = 0;

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
        word = strtok(NULL, " ");
    }

    printf("The longest word is '%s' with length %d.\n", longword, maxlength);

}