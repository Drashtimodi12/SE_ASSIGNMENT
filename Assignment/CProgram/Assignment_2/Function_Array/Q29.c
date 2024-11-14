// Write a C program that takes N numbers from the user and stores them in an array.
// The program should then calculate and display the sum of all array elements.
#include <stdio.h>
int main()
{
    int num;
    int numbers[num]; 
    int sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter %d numbers:\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // sum
    for (int i = 0; i < num; i++)
    {
        sum += numbers[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
}
