// WAP to find the largest of three numbers.
#include<stdio.h>
int main()
{
    int a,b,c,lar;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    printf("Enter Number 1:");
    scanf("%d",&c);

    if(a>=b && a>=c)
    {
        lar= a;
    }
    else if(b>=a && b>=c)
    {
        lar= b;
    }
    else
    {
        lar= c;
    }

    printf("%d is the largest Number.",lar);
}