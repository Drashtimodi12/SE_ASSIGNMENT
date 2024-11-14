// Write a program to find out the max number from given array using function
#include<stdio.h>
int findMax(int arr[], int size) 
{
    int max=arr[0];
    for (int i=1; i<size; i++) 
    {
        if (arr[i]>max) 
        {
            max=arr[i];  
        }
    }
    return max;
}
int main()
{
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d element: \n", num);
    
    for (int i=0; i<num; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int maxNumber = findMax(arr, num);
    printf("The maximum number in the array is: %d", maxNumber);
}