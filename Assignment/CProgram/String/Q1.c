// Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
int main()
{
    char str[200];
    int length = 0;

    printf("Enter a String: ");
    gets(str);

    while(str[length] != '\0')
    {
        length++;
    }

    printf("Length of the String is: %d",length);
}