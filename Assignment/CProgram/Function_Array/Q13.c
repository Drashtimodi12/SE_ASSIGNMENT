// WAP to accept 5 students name and store it in array
#include<stdio.h>
int main()
{
    char name[5][100];

    printf("Enter 5 Students Name.\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Name %d: ",i + 1);
        scanf("%s", &name[i]);
    }
    
    printf("\nPrint All Student Name.\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Student %d: %s\n", i + 1, name[i]);
    }
}