// Find the area of a rectangular prism formula : A=2(wl+hl+hw) 

#include<stdio.h>
int main()
{
    float Area, Length, Weigth, Height;

    printf("Enter the Length of Rectangular Prism:");
    scanf("%f",&Length);
    printf("Enter the Weigth of Rectangular Prism:");
    scanf("%f",&Weigth);
    printf("Enter the Height of Rectangular Prism:");
    scanf("%f",&Height);

    Area= 2*(Weigth*Length + Height*Length + Height*Weigth);

    printf("Area of a Rectangular Prism: %f\n", Area);

    return 0;
}