// Find circumference of Rectangle formula : C = 4 * a

#include<stdio.h>
int main()
{
    float Circumference, Area;

    printf("Enter the Area of circumference:");
    scanf("%f", &Area);
    
    Circumference= 4*Area;

    printf("Circumference of Rectangle: %f\n", Circumference);

    return 0;
}