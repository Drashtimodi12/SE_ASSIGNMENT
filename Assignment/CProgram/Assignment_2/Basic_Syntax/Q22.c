/* Calculate compound interest (Compound Interest formula:
a.	Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b.	Compound Interest = Amount – P   */ 


#include<stdio.h>
#include<math.h>
int main() 
{
    float principal, rate, time, amount, interest;
    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter the time period in years: ");
    scanf("%f", &time);
    
   /* printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n); */

    // Calculate Amount using the compound interest formula
    amount = principal * pow((1 + rate / 100), time);

    // Calculate Compound Interest
    interest = amount - principal;

    printf("The compound interest is: %f\n", interest);

    printf("Amount after %f years: %f\n", time, amount);
    printf("Compound Interest: %f\n", interest);
}