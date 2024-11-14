// Check Number Is Positive or Negative
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number for check positive or negative:");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("%d is Positive.",a);
    }
    else
    {
        printf("%d is Negative.",a);
    }
}
   