// Convert school’s name in abbreviated form
#include<stdio.h>
int main() 
{
    char first[20], second[20], third[20];  
    printf("Enter School's Name (3 words): ");
    scanf("%s %s %s", first, second, third);
    printf("Abbreviated School Name: %c. %c. %c\n", first[0], second[0], third);
}
