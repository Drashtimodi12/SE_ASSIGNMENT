// Series Program: (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main()
{
    int num, sum=0, mul;
    printf("Enter Number: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        sum=(i*i)+sum;
    }
    printf("Sum of the series %d: %d", num, sum);
}