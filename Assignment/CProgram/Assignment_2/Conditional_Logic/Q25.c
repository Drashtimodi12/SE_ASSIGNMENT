// Accept the input month number and print number of days in that month.
#include <stdio.h>
int main() 
{
    int monthNumber;
    int year;
    int days;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber == 2) 
    {
        printf("Enter the year: ");
        scanf("%d", &year);
    }

    switch (monthNumber) 
    {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31;
            break;

        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;

        case 2: // February
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
            {
                days = 29; 
                printf("Leap Year\n");
            } 
            else 
            {
                days = 28; 
                printf("Not leap year\n");
            }
            break;
        default:
            
            printf("Please enter a number between 1 and 12.\n");
            return 1; // Exit with error code
    }

    printf("Number of days in %d month: %d\n", monthNumber, days);
}