// WAP to find maximum number among 3 numbers using ternary operator 
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    printf("Enter Number 1:");
    scanf("%d",&c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The Maximum Number is %d,",max);
}