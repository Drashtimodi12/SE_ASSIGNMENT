// Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
int main()
{
    char str[100];
    int length = 0;

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }
    printf("\nPrint The indidual character seprate in reverse: \n");
    for(int i = length - 1; i >= 0; i--)
    {
            printf("%c\n", str[i]);
    }
}