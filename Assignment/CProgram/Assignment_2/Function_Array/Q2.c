// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include <stdio.h>
int main()
{
    float num1, num2, Total;
    int ch, n1, n2, Total1;
    char coi;
    do
    {
        printf("Enter First Number: ");
        scanf("%f", &num1);
        printf("Enter Second Number: ");
        scanf("%f", &num2);

        printf("\nCalculator Menu:");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulo");
        printf("\n6. Exit");
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &ch);

        if (ch == 6)
        {
            printf("Exiting the program.\n");
        }

        switch (ch)
        {
        case 1:
            Total = num1 + num2;
            printf("Addition= %f\n", Total);
            break;
        case 2:
            Total = num1 - num2;
            printf("Subtraction= %f\n", Total);
            break;
        case 3:
            Total = num1 * num2;
            printf("Multiplication= %f\n", Total);
            break;
        case 4:
            if (num2 != 0)
            {
                Total = num1 / num2;
                printf("Division= %f\n", Total);
            }
            else
            {
                printf("Division by 0 is not allowed.\n");
            }
            break;
        case 5:
            n1 = (int)num1; // Casting num1 to integer
            n2 = (int)num2; // Casting num2 to integer
            if (n2 != 0)
            {
                Total1 = n1 % n2;
                printf("Modulo= %d\n", Total1);
            }
            else
            {
                printf("Modulo by 0 is not allowed, \n");
            }
            break;
        default:
            printf("Invalid choice! Please select a valid option.\n");
        }
        printf("\nEnter 'n' to exit or any other key to continue: ");
        scanf(" %c", &ch);
    } 
    while (coi != 'n' && coi != 'N');
}