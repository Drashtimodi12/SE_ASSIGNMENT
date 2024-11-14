// Write a program in C to separate individual characters from a string.
#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    printf("\nPrint The indidual character seprate: \n");
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '\n')
        {
            printf("%c\n", str[i]);
        }
    }
}