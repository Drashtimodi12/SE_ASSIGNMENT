// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include <stdio.h>
int main() 
{
    int size1, size2, i, j, choice;
    // how many number-1
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int array1[size1];

    // Input number
    printf("Enter %d elements for the first array:\n", size1);
    for (i = 0; i < size1; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // how many number-1
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int array2[size2];

    // Input number
    printf("Enter %d elements for the second array:\n", size2);
    for (i = 0; i < size2; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // 1 array Display
    printf("\nFirst array elements are:\n");
    for (i = 0; i < size1; i++) 
    {
        printf("%d ", array1[i]);
    }
    // 2 array Display
    printf("\nSecond array elements are:\n");
    for (i = 0; i < size2; i++) 
    {
        printf("%d ", array2[i]);
    }


    // choice for sorting order
    printf("\nChoose sorting order:\n1. Ascending\n2. Descending\nEnter choice: ");
    scanf("%d", &choice);

    // sorting first array;
    for(int i=0;i<size1 - 1;i++)
    {
        for(int j=i+1;j<size1;j++)
        {
            if ((choice == 1 && array1[i] > array1[j]) || (choice == 2 && array1[i] < array1[j]))
            {
               int temp = array1[i];
                array1[i] = array1[j];
                array1[j] = temp;
            }
        }
    }
    // Sorting second array 
    for (i=0; i <size2 - 1; i++) 
    {
        for (j=i + 1; j<size2; j++) 
        {
            if ((choice == 1 && array2[i] > array2[j]) || (choice == 2 && array2[i] < array2[j])) 
            {
                int temp = array2[i];
                array2[i] = array2[j];
                array2[j] = temp;
            }
        }
    }
    
    // printing array after 
    printf("\nFirst array after sorting:\n");
    for (i = 0; i < size1; i++) 
    {
        printf("%d ", array1[i]);
    }

    printf("\nSecond array after sorting:\n");
    for (i = 0; i < size2; i++) 
    {
        printf("%d ", array2[i]);
    }
}
