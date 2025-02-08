// Find area of Triangle Formula : A = 1/2 × b × h

#include<stdio.h>
int main()
{
    float Area, Base, Height;
     
    printf("Enter the Base of Triangle:");
    scanf("%f", &Base);

    printf("Enter the Height of Triangle:");
    scanf("%f", &Height);

    Area= 0.5*Base*Height;

    printf("Area of Triangle: %f\n", Area);

    return 0;
}