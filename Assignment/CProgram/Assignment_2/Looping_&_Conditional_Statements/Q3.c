/* WAP to take 10 no. Input from user find out below values
a.	How many Even numbers are there
b.	How many odd numbers are there
c.	Sum of even numbers
d.	Sum of odd numbers
*/

#include<stdio.h>
int main()
{
    int i, num[10];
    int even=0, odd=0, total, even_sum = 0, odd_sum = 0;

    printf("Enter 10 Numbers.\n");
    for (i=0;i<10;i++)
    {
        printf("%d: ", i + 1);
        scanf("%d",&num[i]);
    }
    printf("The Number you entered are:\n");
    for (i=0;i<10;i++) 
    {
        printf("%d ", num[i]);
    }

    for (i = 0; i < 10; i++) 
    {
        if (num[i] % 2 == 0) 
        {
            even++;
            even_sum += num[i];
        } 
        else 
        {
            odd++;
            odd_sum += num[i];
        }
    }
    printf("\nTotal Even numbers: %d", even);
    printf("\nTotal Odd numbers: %d", odd);
    printf("\nSum of Even numbers: %d", even_sum);
    printf("\nSum of Odd numbers: %d", odd_sum);
} 