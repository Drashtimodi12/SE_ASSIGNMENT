// Convert years into days and months 
#include<stdio.h>
int main()
{
    int year, day, month;
    printf("Enter the number of Years:");
    scanf("%d",&year);

    month= year * 12;
    day= month * 30;

    printf("%d Years is equivalent to %d months and %d days.\n", year, month,day);
}