// Accept 2 numbers and find out its sum check it size.
#include<stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter number for a:");
    scanf("%d",&a);
    printf("Enter number for b:");
    scanf("%d",&b);

    sum= a+b;
    printf("Sum of %d and %d is: %d", a, b, sum);
     
    printf("\nThe size of the Sum is: %lu bytes\n", sizeof(sum));
}