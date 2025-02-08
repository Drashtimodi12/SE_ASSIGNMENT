// calculate the Factorial of a Given Number using while loop 
#include<stdio.h>
int main()
{
    int num,fact=1,i;
    
    printf("Enter number:");
    scanf("%d", &num);
    i=num;
    while (i>1)
    {
        fact=fact*i;
        i--;
    }
    printf("%d \t",fact);
}