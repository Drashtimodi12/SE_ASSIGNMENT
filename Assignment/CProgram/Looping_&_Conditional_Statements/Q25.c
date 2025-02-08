// Series Program:	(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>
int main() 
{
    int num, sum=0, temp;
    printf("Enter number: ");
    scanf("%d",&num);

    for (int i=1; i<=num; i++) 
    {
        temp=0; 
        for (int j=1; j<=i; j++) 
        {
            temp=j+temp;
        }
        sum=temp+sum;
    }

    printf("Sum of the series %d: %d", num,sum);
}