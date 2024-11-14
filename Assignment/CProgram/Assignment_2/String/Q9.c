// Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int maxcount = 0;
    char maxchar;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;
        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }
        if(count > maxcount)
        {
            maxcount = count;
            maxchar = str[i];
        }
    }
    printf("Character '%c' appears the most (%d times) in the string.\n", maxchar, maxcount);
}