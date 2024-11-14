#include<stdio.h>
#define PI 3.14
int main()
{
    float Redius, Area, Circumference;
    // Input radius
    printf("Enter the redius of circle: "); 
    scanf("%f", &Redius);
    // Calculate area and circumference
    Area=PI*Redius*Redius;
    Circumference=2*PI*Redius;
    printf("\nArea of Circle: %f", Area);
    printf("\nCircumference of Circle: %f", Circumference);
    return 0;
}
