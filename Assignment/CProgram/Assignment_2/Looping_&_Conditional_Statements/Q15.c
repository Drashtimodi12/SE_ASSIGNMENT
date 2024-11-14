// Calculate sum of 10 numbers using of while loop
#include <stdio.h>
int main()
{
    int num[10], i=0, sum=0;

    printf("Enter 10 number.\n");
    for (i = 0; i < 10; i++)
    {
        printf("number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    i=0;
    while (i<10)
    {
        sum=sum+num[i];
        i++;
    }
    printf("%d \t",sum);

}