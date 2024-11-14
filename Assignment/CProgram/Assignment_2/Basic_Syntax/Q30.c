// WAP to convert years into days and days into years
#include <stdio.h>
int main() 
{
    int year, day, remaining_day;

    // Conversion factors
    const int day_in_a_year = 365; // Assume non-leap years

    printf("Enter the number of years: ");
    scanf("%d", &year);
    day = year * day_in_a_year;
    printf("%d years is equivalent to %d days.\n", year, day);

    printf("\nEnter the number of days: ");
    scanf("%d", &day);
    year = day / day_in_a_year;
    remaining_day = day % day_in_a_year;
    printf("%d days is equivalent to %d years and %d days.\n", day, year, remaining_day);
}