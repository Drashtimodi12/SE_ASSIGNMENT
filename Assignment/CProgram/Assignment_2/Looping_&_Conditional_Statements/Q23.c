// Series Program: 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter Number: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        sum=i+sum;
    }
    printf("Sum of the series %d: %d", num, sum);
}