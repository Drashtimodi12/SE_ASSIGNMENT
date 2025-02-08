// Challenge: Implement both an iterative and a recursive version of the factorial function and compare their 
// performance for large numbers.

#include <stdio.h>
// Recursive function 
int factorial_recursive(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        n=n*factorial_recursive(n-1);
    }
}
// Iterative function
int factorial_iterative(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main() 
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        printf("Factorial for recursive number %d is: %d\n", num, factorial_recursive(num));
        printf("Factorial for iterative number %d is: %d\n", num, factorial_iterative(num));
    }
}
