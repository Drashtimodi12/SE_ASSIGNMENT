// WAP to print table up to given numbers
// WAP that takes an integer input from the user and prints its multiplication table using a for loop.
#include<stdio.h>
int main()
{
    int num,i=1;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Multiplication Table of %d:\n", num);

    for (int i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}