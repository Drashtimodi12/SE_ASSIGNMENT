// WAP to check if the given year is a leap year or not.

#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year:");
    scanf("%d", &year);

    if(year%4==0 && year%100!=0 || year%400==0)
    {
        printf("Leap Year %d", year);
    }
    else
    {
        printf("Not Leap Year %d", year);
    }
    
}