// Find ascii value of given number

#include<stdio.h>
int main()
{
    int asciivalue;
    printf("Enter number between 0 to 127:");
    scanf("%d",&asciivalue);

    if(asciivalue>=0 && asciivalue<=127)
    {
        printf("A ASCII value %d is '%c'.", asciivalue, asciivalue);
    }
    else
    {
        printf("Please enter the value between 0 to 127.");
    }
}