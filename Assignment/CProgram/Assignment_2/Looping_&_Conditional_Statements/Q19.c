//	Patterns:

/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
/*#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(col%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
    printf("\n");
    }
}
*/

/*
A
B C
D E F 
G H I J
K L M N O
*/
/*
#include <stdio.h>
int main() 
{
    char letter = 'A';  
    int n = 5;          
    for (int row = 1; row <= n; row++) 
    {
        for (int j = 1; j <= row; j++) 
        {
            printf("%c ", letter);                
            letter++;  
        }
        printf("\n");
    } 
}
*/


/*
1
2  3
4  5   6
7  8   9 10 
11 12 13 14 15 
*/
/*
#include <stdio.h>
int main() 
{  
    int row,col,num=1;          
    for (row = 1; row <= 5; row++) 
    {
        for (col = 1; col <= row; col++) 
        {
            printf("%d ", num);  
            num++;               
        }
        printf("\n");
    } 
}
*/

/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * * 
*/
/*
#include <stdio.h>
int main()
{
    int rows = 5;
    for (int row = 0; row < rows; row++) 
    {
        for (int space = 0; space < 2 * (rows - row) - 1; space++) 
        {
            printf(" ");
        }
        for (int col = 0; col < 2 * row + 1; col++) 
        {
            printf("* ");
        }
        printf("\n");
    }
}*/

/*
*
* * 
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/
#include <stdio.h>
int main()
{
    int rows = 5;
    for (int row = 1; row <= rows; row++) 
    {
        for (int col = 1; col <= row; col++) 
        {
            printf("* ");
        }
        printf("\n");
    }
        for (int row = rows-1; row >= 1; row--) 
        {
            for(int col=1; col<= row; col++)
            {
                printf("* ");
            }
            printf("\n");
        } 
}
