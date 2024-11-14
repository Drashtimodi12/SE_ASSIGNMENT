// WAP Find out length of string without using inbuilt function
#include<stdio.h>
int main()
{
    char str[100];
    int length=0;

    printf("Enter a String: ");
    scanf("%s",str);

    while(str[length] != '\0')
    {
        length++;
    }
    printf("Length of String is= %d", length);
}