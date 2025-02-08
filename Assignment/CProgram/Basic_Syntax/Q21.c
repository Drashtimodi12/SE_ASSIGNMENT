// Accept 2 numbers from user and swap 2 numbers with using 3rd variable  and without using 3rd variable.
/*
// swap 2 numbers with using 3rd variable
#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);

    printf("Before Swaping.\n a=%d\n b=%d\n", a,b);

    temp=a;
    a=b;
    b=temp;

    printf("After Swaping.\n a=%d\n b=%d\n", a,b);
}   */


//without using 3rd variable
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);

    printf("Before Swaping.\n a=%d\n b=%d\n", a,b);

    a = a + b;  // a now holds the sum of both a and b
    b = a - b;  // b now holds the original value of a
    a = a - b;  // a now holds the original value of b

    printf("After Swaping.\n a=%d\n b=%d\n", a,b);
}