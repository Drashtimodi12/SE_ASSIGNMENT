// Series Program: 1/2 - 2/3 + 3/4 - 4/5 + 5/6…….n
#include<stdio.h>
int main()
{
    int num;
    float sum=0.0;
    printf("Enter number: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        if(i%2 ==0)
        {
            sum-=(float)i/(i+1);
        }
        else
        {
            sum+=(float)i/(i+1);
        }
    }

    printf("Sum of the series %d: %f", num, sum);
}