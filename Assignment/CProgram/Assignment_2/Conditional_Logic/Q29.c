// WAP that takes an integer from the user and checks the following using different operators: 
//iii. Whether the number is a multiple of both 3 and 5.
#include <stdio.h>
int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) 
    {
        printf("%d is a multiple of both 3 and 5.\n", num);
    } 
    else 
    {
        printf("%d is not a multiple of both 3 and 5.\n", num);
    }
}