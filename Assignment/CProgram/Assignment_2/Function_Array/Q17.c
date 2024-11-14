// Accept 5 numbers from user and perform sum of array 
#include <stdio.h>
int main() 
{
    int arr[5], sum = 0;

    printf("Enter 5 numbers.\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) 
    {
        sum = sum + arr[i];
    }

    printf("\nThe sum of the array elements is: %d\n", sum);
}
