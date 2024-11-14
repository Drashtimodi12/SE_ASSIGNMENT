// WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
int main()
{
    int num[5];

    printf("Enter 5 Numbers.\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Number %d: ",i + 1);
        scanf("%d", &num[i]);
    }
    
    printf("\nCheck Number is Odd or Even.\n");
    for (int i = 0; i < 5; i++) 
    {
        if(num[i] %2 == 0)
        {
            printf("Number %d (%d) is even.\n", i + 1, num[i]);
        }
        else
        {
            printf("Number %d (%d) is odd.\n", i + 1, num[i]);
        }
    }
}