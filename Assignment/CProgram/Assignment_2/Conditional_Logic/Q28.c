// WAP that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. 
#include <stdio.h>
int main() 
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Arithmetic
    printf("Arithmetic Operations:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, (num2 != 0) ? (num1 / num2) : 0);  
    printf("%d %% %d = %d\n", num1, num2, (num2 != 0) ? (num1 % num2) : 0); 

    // Relational 
    printf("Relational Operations:\n");
    printf("%d == %d : %d\n", num1, num2, num1 == num2);
    printf("%d != %d : %d\n", num1, num2, num1 != num2);
    printf("%d > %d  : %d\n", num1, num2, num1 > num2);
    printf("%d < %d  : %d\n", num1, num2, num1 < num2);
    printf("%d >= %d : %d\n", num1, num2, num1 >= num2);
    printf("%d <= %d : %d\n", num1, num2, num1 <= num2);

    // Logical
    printf("Logical Operations:\n");
    printf("(%d > 0) && (%d > 0) : %d\n", num1, num2, (num1 > 0) && (num2 > 0));
    printf("(%d > 0) || (%d > 0) : %d\n", num1, num2, (num1 > 0) || (num2 > 0));
    printf("!(%d > 0) : %d\n", num1, !(num1 > 0));
}