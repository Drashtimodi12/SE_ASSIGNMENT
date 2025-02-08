// Convert kilometers into meters
#include<stdio.h>
int main()
{
    float kilometers, meters;
    printf("Enter the number of Kilometers: ");
    scanf("%f",&kilometers);

    meters= kilometers * 1000;

    printf("%f kilometers is equivalent to %f meters.", kilometers, meters);
}