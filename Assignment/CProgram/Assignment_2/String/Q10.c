// Write a program in C to extract a substring from a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200], substr[200];
    int start, length;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter the string index: ");
    scanf("%d", &start);

    printf("Enter the length of subdtring: ");
    scanf("%d",&length);

    if (start < 0 || start >= strlen(str)) 
    {
        printf("Invalid starting index.\n");
        return 1;
    }
    if (length < 0 || start + length > strlen(str)) 
    {
        printf("Invalid length.\n");
        return 1;
    }
    if (length < 0 || start + length > strlen(str)) 
    {
        printf("Invalid length.\n");
        return 1;
    }
    substr[length] = '\0';

    printf("Extracted substring: %s\n", substr);
}