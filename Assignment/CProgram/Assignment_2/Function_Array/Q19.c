// Write a C program that generates the Fibonacci sequence up to N terms using a recursive function.
#include<stdio.h>  
int fibonacci(int n) 
{
    if(n == 0)  
        return 0;
    else if(n == 1)  
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  
}
int main() 
{
    int n, i;
    printf("Enter number to calculate Fibonacci number: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d \t", fibonacci(i));
    }
}