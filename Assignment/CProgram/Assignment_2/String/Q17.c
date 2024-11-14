// Write a C program that takes a string as input and reverses it using a function.
#include <stdio.h>
#include <string.h>
int reverseString(char str[]) 
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;
    
    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);
    printf("Reversed string: %s\n", str);
}