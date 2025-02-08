// WAP to check whether a number is negative, positive or zero.
// WAP that takes an integer from the user and checks the following using different operators: 
// ii. Whether the number is positive, negative, or zero.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number for check positive or negative:");
    scanf("%d",&a);
    if(a==0)
    {
        printf("%d is Zero.",a);
    }
    else if (a>0)
    {
        printf("%d is Positive.",a);
    }
    else
    {
        printf("%d is Negative.",a);
    }
}