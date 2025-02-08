// WAP to accept 5 numbers from user and display in reverse order using for loop and array
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
    
    printf("\nNumbers in reverse order:   ");
    for (int i = 4; i >= 0; i--) 
    {
        printf("%d\t", num[i]);
    }
}