// Write a C program that takes two strings from the user and concatenates them using strcat(). 
// Display the concatenated string and its length using strlen().
#include <stdio.h>
#include <string.h> 
int main() 
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);  
    str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character if present

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); 
    str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character if present

    // Concatenate str2 to str1
    strcat(str1, str2);

    printf("The concatenated string is: %s\n", str1);
    printf("The length of the concatenated string is: %zu\n", strlen(str1));
}
