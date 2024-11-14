// WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);

    printf("Before Swaping.\n a=%d\n b=%d\n", a,b);

    if (a != 0 && b != 0) 
    { 
    a = a * b;  // a now holds the multipcation of both a and b
    b = a / b;  // b now holds the original value of a
    a = a / b;  // a now holds the original value of b

    printf("After Swaping.\n a=%d\n b=%d\n", a,b);
    }
    else
    {
        printf("Swapping with zero is not possible using multiplication and division.\n");
    }
}