// WAP that uses the break statement to stop printing numbers when it reaches 5.
// Modify the program to skip printing the number 3 using the continue statement.
#include <stdio.h>
int main()
{
    printf("Stop at 5:\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");

    
    printf("Skip at 3:\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
        {
            continue; 
        }
        printf("%d ", i);
    }
    printf("\n");
}
