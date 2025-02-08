// WAP to show difference between Structure and Union.
#include <stdio.h>
struct studentstruct
{
    int rollno;
    char name[20];
    float percent;
}; //}st[5];
union studentunion
{
    int rollno;
    char name[20];
    float percent;
}; //}st[2];
int main()
{
    int i;
    struct studentstruct st[2]; // method to define variable for structure
    union studentunion un[2]; 

    printf("Enter details for Structure.\n");
    for (i = 0; i < 2; i++)
    {
        printf("Enter rollno:");
        scanf("%d", &st[i].rollno);
        printf("Enter name:");
        scanf("%s", &st[i].name);
        printf("Enter percent:");
        scanf("%f", &st[i].percent);
    }

    printf("\nStructure:- Printig Student Details.");
    for (i = 0; i < 2; i++)
    {
        printf("\n Student=%d", i+1);
        printf("\n Rollno=%d", st[i].rollno);
        printf("\n Name=%s", st[i].name);
        printf("\n Percent=%.2f", st[i].percent);
    }
    

    printf("\n\nEnter details for union students.\n");
    for (i = 0; i < 2; i++) 
    {
        printf("Enter rollno: ");
        scanf("%d", &un[i].rollno);
        printf("Enter name: ");
        scanf("%s", un[i].name);
        printf("Enter percent: ");
        scanf("%f", &un[i].percent);
    }

    printf("\nUnion:- Printig Student Details.");
    for (i = 0; i < 2; i++)
    {
        printf("\n Student =%d", i+1);
        printf("\n Rollno=%d", un[i].rollno);
        printf("\n Name=%s", un[i].name);
        printf("\n Percent=%.2f", un[i].percent);
    }
}