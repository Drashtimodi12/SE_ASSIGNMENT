// Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.
#include<stdio.h>
int main()
{
    int matrix1[3][3], matrix2[3][3], sum[3][3], mul[3][3];
    // first matrix
    printf("Enter elements of the first 3*3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // second matrix
    printf("\nEnter elements of the second 3*3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element at position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mul[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }

    //add result
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    //multiply
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++) 
            {
                mul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // print sum
    printf("\nThe sum of the two matrices is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    // print multiply
    printf("\nThe multiply of the two matrices is:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}
