// Perform 2D matrix array
#include <stdio.h>
int main()
{
    int row, col;
    int matrix[row][col];

    printf("Enter number for row: ");
    scanf("%d", &row);
    printf("Enter number for column: ");
    scanf("%d", &col);

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
    }
}