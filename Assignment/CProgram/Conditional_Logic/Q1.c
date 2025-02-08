// Write a C program to accept two integers and check whether they are equal or not.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);

    if(a==b)
    {
        printf("Number A and B is equal.\n");
    }
    else
    {
        printf("Number A and B is not Qual.");
    }
}