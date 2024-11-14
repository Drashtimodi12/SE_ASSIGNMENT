/* WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) 
using conditional statement */

#include<stdio.h>
int main()
{
    char operator, ch;
    float  num1, num2, Total;
    int n1, n2, Total1;
    
label:
    printf("Calculater works for +,-,*,/,%%");
    printf("\nEnter Operator:");
    scanf(" %c",&operator);  // Added a space before %c to consume newline characters
    printf("Enter First Number: ");
    scanf("%f",&num1);
    printf("Enter Second Number: ");
    scanf("%f",&num2);

    if (operator== '+')
    {
        Total = num1+num2;
        printf("Addition\n%f + %f = %f\n",num1,num2,Total);
    }
    else if (operator== '-')
    {
        Total = num1-num2;
        printf("Subtraction\n%f - %f = %f\n",num1,num2,Total);
    }
    else if (operator== '*')
    {
        Total = num1*num2;
        printf("Multiplication\n%f * %f = %f\n",num1,num2,Total);
    }
    else if (operator == '/') 
    {
        if (num2 != 0) 
        {
            Total = num1 / num2;
            printf("Division: %f / %f = %f\n", num1, num2, Total);
        } else 
        {
            printf("Division by zero is not allowed.\n");
        }
    }
    else if (operator == '%') 
    {
        if (n2 != 0) 
        {
            Total = n1 % n2;
            printf("Modulo: %d %% %d = %d\n", n1, n2, (int)Total);
        } else 
        {
            printf("Modulo by zero is not allowed.\n");
        }
    }
    else 
    {
        printf("Invalid operator. Please use +, -, *, /, %%.\n");
    }

    printf("\nEnter 'n' to exit or any other key to continue: ");
    scanf(" %c",&ch);
    if(ch!='n')
    {
        goto label;
    }
}