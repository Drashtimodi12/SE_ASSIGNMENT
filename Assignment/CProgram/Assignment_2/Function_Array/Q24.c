// Write a C program that stores 5 integers in a one-dimensional array and prints them.
// Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.
#include <stdio.h>
int main()
{
    int arr[5] = {11, 1, 5, 17, 26}; // integer array.
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    printf("\n");

    // sum
    int matrix[3][3];
    int sum = 0;

    printf("Enter elements for a 3x3 matrix:\n"); //input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // calculat
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }

    // Print
    printf("The 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("The sum of all elements in the matrix is: %d\n", sum);
}