// WAP to print factorial of given number
// 5!=5*4*3*2*1=120
#include<stdio.h>
int main()
{
    int num,fact=1,i;
    
    printf("Enter number:");
    scanf("%d", &num);
    
    for(i=1; i<=num; i++)
    {
        fact=fact*i;
        printf("%d \t",fact);
    }
    
}