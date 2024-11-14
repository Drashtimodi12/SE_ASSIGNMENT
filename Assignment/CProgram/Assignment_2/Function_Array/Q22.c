// Write a C program that takes a number as input and checks whether it is a palindrome using a function.
#include <stdio.h>
int is_palindrome(int n)
{
    int num=n,rem,rev=0;
    
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==n)
        return 1;
    else
        return 0;
}
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_palindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
}
