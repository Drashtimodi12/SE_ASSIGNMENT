// Write a program in C to read any Month Number in integer and display the number of days for this month.
// Challenge: Solve the problem using both if-else and switch-case statements.
#include <stdio.h>
int main() 
{
    int month, year, days;

    printf("Enter month number: ");
    scanf("%d", &month);
    
    if (month < 1 || month > 12) 
    {
        printf("Please enter a number between 1 and 12.\n");
        return 1;
    }



    // For February, read the year to check for leap year
    if (month == 2) 
    {
        printf("Enter year: ");
        scanf("%d", &year);
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        {
            days = 29; //leap year
        } 
        else 
        {
            days = 28; //no leeap year
        }
    } 
    else 
    {
        switch (month) 
        {
            case 1: // January
            case 3: // March
            case 5: // May
            case 7: // July
            case 8: // August
            case 10: // October
            case 12: // December
                days = 31; // 31 days
                break;
            case 4: // April
            case 6: // June
            case 9: // September
            case 11: // November
                days = 30; // 30 days
                break;
        }
    }

    printf("Number of days in month %d: %d\n", month, days);
}