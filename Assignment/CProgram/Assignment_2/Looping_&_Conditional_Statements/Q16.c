// Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main()
{
    int num,sum=0,i=0;
    printf("Enter number:");
    scanf("%d",&num);

    if (num<1) 
    {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    while(i<=num)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of numbers=%d",sum);
}