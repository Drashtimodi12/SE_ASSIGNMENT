// WAP to make Simple calculator(to make addition, subtraction, multiplication, division, modulo)
// Extend the program to handle invalid operator inputs.
#include<stdio.h>
int main()
{
    char operator, ch;
    float  num1, num2, Total;
    int n1, n2, Total1;
    
label:
    printf("Enter First Number: ");
    scanf("%f",&num1);
    printf("Enter Second Number: ");
    scanf("%f",&num2);
    printf("Calculater works for +,-,*,/,%%");
    printf("\nEnter Operator:");
    scanf(" %c",&operator);  // Added a space before %c to consume newline characters

    switch (operator)
    {
    case '+':
        Total=num1+num2;
        printf("Addition= %f\n",Total);
        break;
    case '-':
        Total=num1-num2;
        printf("Subtraction= %f\n",Total);
        break;
    case '*':
        Total=num1*num2;
        printf("Multiplication= %f\n",Total);
        break;
    case '/':
        if (num2 != 0)
        {
            Total=num1/num2;
            printf("Division= %f\n",Total);
        }
        else
        {
            printf("Division by 0 is not allowed.\n");
        }
        break;
    case '%':
        n1 = (int)num1;  // Casting num1 to integer
        n2 = (int)num2;  // Casting num2 to integer
        if (n2 != 0)
        {
            Total1=n1%n2;
            printf("Modulo= %d\n",Total1);
        }
        else
        {
            printf("Modulo by 0 is not allowed, \n");
        }
        break;
    default:
        printf("Invalid operator= '%c'. Please use +,-,*,/,%% \n");
    }

    printf("\nEnter 'n' to exit or any other key to continue: ");
    scanf(" %c",&ch);
    if(ch!='n')
    {
        goto label;
    }
}