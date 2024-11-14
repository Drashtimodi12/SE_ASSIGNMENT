// Store 5 numbers in array and sort it in ascending order 
#include<stdio.h>
int main()
{
    int arr[5], temp;

    printf("Enter 5 numbers.\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i] > arr[j])
            {
               int temp =arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    // printing array
    printf("\nAscending order array\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}