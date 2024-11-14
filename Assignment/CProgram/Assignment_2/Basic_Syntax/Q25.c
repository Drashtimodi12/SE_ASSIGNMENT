// Accept 5 expense from user and find average of expense
#include<stdio.h>
int main()
{
    float expanes[5], total_expanes, average_expanes;
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter expanse %d: ", i+1);
        scanf("%f",&expanes[i]);
        total_expanes += expanes[i];
    }
    average_expanes = total_expanes / 5;
    printf("\nToal Expanse: %f\n", total_expanes);
    printf("Average Expanse: %f\n", average_expanes);
}