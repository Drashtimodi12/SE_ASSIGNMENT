// Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).
#include <stdio.h>
int main()
{
    int i=1,j=1;

    //for loop
    printf("Using for loop:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    //while loop
    printf("Using while loop:\n");
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    //do-while loop
    printf("Using do-while loop:\n");
    do
    {
        printf("%d ", j);
        j++;
    } while (j <= 10);
    printf("\n");
}