// WAP to find factorial using recursion - 5!=5*4*3*2*1=120
#include<stdio.h>
int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        n=n*fact(n-1);
    }
}
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial = %d", fact(num));
    }
}