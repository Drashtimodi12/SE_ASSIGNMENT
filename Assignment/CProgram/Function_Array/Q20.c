//Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative and recursive methods. 
// Compare their efficiency.

#include <stdio.h>
// Recursive function
int fibonacci_recursive(int n) 
{
    if(n == 0)  
        return 0;
    else if(n == 1)  
        return 1;
    else
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);  
}

// Iterative function
int fibonacci_iterative(int n) 
{
    if (n <= 1)
        return n;

    int a = 0, b = 1, fib = 1;
    for (int i = 2; i <= n; i++) 
    {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() 
{
    int n;
    
    printf("Enter number to calculate Fibonacci number: ");
    scanf("%d", &n);

    printf("Fibonacci sequence using recursion up to %d terms:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", fibonacci_recursive(i));
    }

    printf("\nFibonacci sequence using iteration up to %d terms:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", fibonacci_iterative(i));
    }
}
