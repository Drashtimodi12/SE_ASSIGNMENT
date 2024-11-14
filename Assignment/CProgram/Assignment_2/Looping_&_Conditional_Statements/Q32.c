// Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).
#include <stdio.h>
int main()
{
    int n, i, j;

    printf("Enter the value of N for: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Multiplication table for %d:\n", i);
        for (j = 1; j <= 10; j++)
        { 
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }
}
