// WAP to perform Palindrome number using for loop and function
#include<stdio.h>
int palindrom(int num)
{
    int original,rem,rev=0;
    original = num;

    for(; num != 0; num /= 10)
    {
        rem = num % 10;
        rev = rev * 10+ rem;
    }
    return (original == rev);
}
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if(palindrom(num))
    {
        printf("Number is palindrome.");
    }
    else
    {
        printf("Number is not a palindrome.");
    }
}