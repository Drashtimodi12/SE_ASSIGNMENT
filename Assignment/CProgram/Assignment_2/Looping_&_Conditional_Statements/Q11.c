// Accept 5 names from user at run time.
#include <stdio.h>
int main() 
{
    int i;
    char names[5][100];
    printf("Enter 5 names.\n");

    for (i=0; i<5; i++) 
    {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]); 
    }

    printf("\nThe Name you entered are:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Name %d: %s\n", i + 1, names[i]);
    }
}