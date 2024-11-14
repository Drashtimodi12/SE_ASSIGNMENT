// Write a program in C to combine two strings manually
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], commbine[200];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin); 

    if (str1[strlen(str1) - 1] == '\n') str1[strlen(str1) - 1] = '\0';
    if (str2[strlen(str2) - 1] == '\n') str2[strlen(str2) - 1] = '\0';

    
    while (str1[i] != '\0')
    {
        commbine[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0')
    {
        commbine[i] = str2[j];
        i++;
        j++;
    }
    printf("Combined string: %s\n", commbine);
}
