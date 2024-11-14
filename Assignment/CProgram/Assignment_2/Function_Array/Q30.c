// Challenge: Modify the program to also find the average of the numbers.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int numbers[num]; 
    int sum = 0;

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
    // average
    float average = (float)sum / num;
    
    // print answer
    printf("The sum of the array elements is: %d\n", sum);
    printf("The average of the array elements is: %f\n", average);
}
