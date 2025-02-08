// Write a C program that accepts 10 integers from the user and stores them in an array.
// The program should then find and print the maximum and minimum values in the array.
#include <stdio.h>
int main()
{
    int arr[10];
    int max, min;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The entered integers are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // maximum and minimum
    max = arr[0];
    min = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nThe maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);
}