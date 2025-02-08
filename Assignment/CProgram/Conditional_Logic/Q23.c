// WAP to input the week number and print week day
#include <stdio.h>
int main() 
{
    int weekNumber;

    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);

    switch (weekNumber) 
    {
        case 1:
            printf("Day: Sunday\n");
            break;
        case 2:
            printf("Day: Monday\n");
            break;
        case 3:
            printf("Day: Tuesday\n");
            break;
        case 4:
            printf("Day: Wednesday\n");
            break;
        case 5:
            printf("Day: Thursday\n");
            break;
        case 6:
            printf("Day: Friday\n");
            break;
        case 7:
            printf("Day: Saturday\n");
            break;
        default:
            printf("Please enter a number between 1 and 7.\n");
            break;
    }
}
