// Convert country’s name in abbreviate form
#include<stdio.h>
int main() 
{
    char first[20], second[20], third[20];  
    printf("Enter country's Name (3 words): ");
    scanf("%s %s %s", first, second, third);
    printf("Abbreviated Country Name: %c. %c. %c\n", first[0], second[0], third[0]);
}
