// Convert days into months
#include<stdio.h>
int main()
{
    int day, month, remaining_day;
    printf("Enter the number of Days:");
    scanf("%d",&day);

    month = day / 30;
    remaining_day = day % 30;

    printf("%d days is equivalent to %d months and %d days.\n", day, month, remaining_day);
}