// Convert temperature Fahrenheit to Celsius 
#include<stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter Fahrenhiet: ");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Celsius: %f",celsius);
}