// WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
int main()
{
    int height, cat;
    printf("Enter your Hight in Centimeter:");
    scanf("%d",&height);

    if(height<150)
    {
        printf("Your hight is Short.");
    }
    else if(height>=150 && height<=180)
    {
        printf("Your hight is Averge.");
    }
    else
    {
        printf("Your hight is Tall.");
    }
}