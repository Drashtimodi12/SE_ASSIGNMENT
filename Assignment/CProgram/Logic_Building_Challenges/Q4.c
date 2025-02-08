// Challenge: WAP that generates Pascal’s Triangle up to N rows using a recursive function.
#include <stdio.h>
int pascal(int row, int col) 
{
    if (col == 0 || col == row) 
    {
        return 1;  
    }
    // Recursive
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
}
int main() 
{
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) 
    {
        // spaces
        for (int j = 0; j < rows - i - 1; j++) 
        {
            printf(" ");
        }
        
        // row
        for (int j = 0; j <= i; j++) 
        {
            printf("%d ", pascal(i, j));
        }
        printf("\n");
    }
}
