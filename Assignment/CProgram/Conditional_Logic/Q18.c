// Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
    float cost, selling, profit, loss;

    printf("Enter the cost price:");
    scanf("%f",&cost);
    printf("Enter th selling price:");
    scanf("%f",&selling);

    if(selling > cost) 
    {
        profit = selling - cost;
        printf("Profit = %f\n", profit);
    } 
    else if(cost > selling) 
    {
        loss = cost - selling;
        printf("Loss = %f\n", loss);
    } 
    else 
    {
        printf("No Profit No Loss\n");
    } 
}