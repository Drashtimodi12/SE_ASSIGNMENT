/* Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 
0,      0 when m is 0 and       -1 when m is less than 0 .
m > 0, n is set to 1.
m == 0, n is set to 0.
m < 0, n is set to -1.
*/

#include<stdio.h>
int main()
{
    int n, m;
    printf("Enter the value of Number:");
    scanf("%d",&m);

    if(m>0)
    {
        n=1;
    }
    else if(m==0)
    {
        n=0;
    }
    else
    {
        n=-1;
    }
    printf("You enter %d is %d.",m,n);
}