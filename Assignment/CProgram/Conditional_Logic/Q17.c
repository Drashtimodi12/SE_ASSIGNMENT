// Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
int main() 
{
    float a, b, c, sum;

    printf("Enter the first angle of the triangle: ");
    scanf("%f", &a);
    printf("Enter the second angle of the triangle: ");
    scanf("%f", &b);
    printf("Enter the third angle of the triangle: ");
    scanf("%f", &c);

    sum = a + b + c;

    if (sum == 180 && a > 0 && b > 0 && c > 0) 
    {
        printf("A triangle can be formed with the given angles.\n");
    } 
    else 
    {
        printf("A triangle cannot be formed with the given angles.\n");
    }
}