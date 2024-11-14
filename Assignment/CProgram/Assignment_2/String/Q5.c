// Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
int main()
{
    char str1[200], str2[200];
    int i = 0, equal = 1;

    printf("Enter a First strng: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter a Second strng: ");
    fgets(str2, sizeof(str2), stdin);

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            equal = 0;
            break;
        }
        i++;
    }
    if(equal && str1[i] == '\0' && str2[i] == '\0')
    {
        printf("The String are Equal.\n");
    }
    else
    {
        printf("The String are not Equal.\n");
    }

}