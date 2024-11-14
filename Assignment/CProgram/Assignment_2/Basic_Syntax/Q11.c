// Find circumference of square formula : C = 4 * a

#include<stdio.h>
int main()
{
    float Circumference, Area;

    printf("Enter the Are of square:");
    scanf("%f", &Area);

    Circumference= 4*Area;

    printf("Circumference of Square: %f\n", Circumference);

    return 0;
}