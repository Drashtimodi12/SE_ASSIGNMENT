// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    printf("N^1 = %d\n", num);
    printf("N^2 = %d\n", num * num);
    printf("N^3 = %d\n", num * num * num);
}