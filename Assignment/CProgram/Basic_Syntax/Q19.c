// Calculate compound interest

#include<stdio.h>
#include<math.h>
int main() 
{
    float principal, rate, time, interest;
    int n;  

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter the time period in years: ");
    scanf("%f", &time);
    
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Compound interest formula: A = P(1 + r/n)^(nt)
    // Compound Interest = A - P
    interest = principal * pow((1 + (rate / (100 * n))), (n * time)) - principal;

    printf("The compound interest is: %f\n", interest);
}