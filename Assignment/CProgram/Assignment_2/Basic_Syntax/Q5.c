// Find Area of Cube formula : a = 6a2

#include<stdio.h>
int main()
{
    float Area, a;

    printf("Enter the length of Cube:");
    scanf("%f", &a);

    Area= 6*a*a;

    printf("Area of the Cube: %f\n", Area);

    return 0;
}