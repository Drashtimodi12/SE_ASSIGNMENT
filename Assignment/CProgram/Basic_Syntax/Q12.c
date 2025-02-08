// Accept number of students from user. I need to give 5 apples to each student. How many apples are required?

#include<stdio.h>
int main()
{
    int Num, Total_Apple;

    printf("Enter the Numbers of Students:");
    scanf("%d", &Num);

    Total_Apple= 5*Num;

    printf("Apples Required for Students: %d", Total_Apple);

    return 0;
}