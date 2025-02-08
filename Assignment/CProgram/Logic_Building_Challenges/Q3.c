/*WAP that generates Pascal’s Triangle up to N rows using loops. 
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
#include <stdio.h>
int main() 
{
    int row;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++) 
    {
        int val = 1; 

        for (int j = 0; j < row - i - 1; j++) 
        {
            printf(" ");
        }

        // Print Pascal's Triangle values for the current row
        for (int j = 0; j <= i; j++) 
        {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
