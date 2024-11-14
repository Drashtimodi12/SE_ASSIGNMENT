//	Find circumference of Triangle formula : triangle = a + b + c 

#include<stdio.h>
int main()
{
    float Perimeter, SideA, SideB, SideC;

    printf("Enter the length of Side A:");
    scanf("%f", &SideA);
    printf("Enter the length of Side B:");
    scanf("%f", &SideB);
    printf("Enter the length of Side C:");
    scanf("%f", &SideC);

    Perimeter= SideA+SideB+SideC;

    printf("Circumference of Triangle: %f\n", Perimeter);
    
    return 0;
}