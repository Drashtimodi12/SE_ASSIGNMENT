// WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
    int i, num[5];
    printf("Enter 5 Numbers:");
    for (i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("The Number you entered are:\n");
    for (i=0;i<5;i++) 
    {
        printf("%d ", num[i]);
    }
}