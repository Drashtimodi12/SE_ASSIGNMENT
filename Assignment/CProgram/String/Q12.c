// Write a program in C to find the number of times a given word 'is' appears in the given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200], *ptr;
    int count = 0;
    
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    // Using strstr to find occurrences of "is"
    ptr = str;
    while ((ptr = strstr(ptr, "is")) != NULL) 
    {
        count++; 
        ptr++;  
    }
    printf("The word 'is' appears %d times in the sentence.", count);
}