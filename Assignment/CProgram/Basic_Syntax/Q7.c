// Find area of Rectangle Formula : A=wl

#include<stdio.h>
int main()
{
    float Area, Weigth, Length;

    printf("Enter the length of Rectangle:");
    scanf("%f", &Length);

    printf("Enter the weigth of Rectangle:");
    scanf("%f", &Weigth);

    Area= Weigth*Length;

    printf("Area of Rectangle: %f\n", Area);

    return 0;
}