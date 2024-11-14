// Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
int main()
{
    int i, num[5];
    int even=0, odd=0, even_sum = 0, odd_sum = 0;

    printf("Enter 5 Numbers.\n");
    for (i=0;i<5;i++)
    {
        printf("%d: ", i + 1);
        scanf("%d",&num[i]);
    }

    printf("The Number you entered are:\n");
    for (i=0;i<5;i++) 
    {
        printf("%d ", num[i]);
    }
    i=0;
    while(i<5)
    {
        if (num[i] % 2 == 0) 
        {
            even++;
            even_sum=even_sum+num[i];
        } 
        else 
        {
            odd++;
            odd_sum=odd_sum+num[i];
        }
        i++;
    }

    
    printf("\nCount of Even numbers: %d", even);
    printf("\nSum of Even numbers: %d", even_sum);
    printf("\nCount of Odd numbers: %d", odd);
    printf("\nSum of Odd numbers: %d", odd_sum);
} 