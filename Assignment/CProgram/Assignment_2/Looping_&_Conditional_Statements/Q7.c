// WAP to print number in reverse order e.g.: number = 64728 --> reverse = 82746
// Challenge: Extend the program to reverse the digits of the number.
#include<stdio.h>
int main()
{
    int num,rev=0,rem;
    printf("Enter number:");
    scanf("%d",&num);
    
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse number=%d",rev);
}