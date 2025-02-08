// WAP to find reverse of string using recursion
#include<stdio.h>
int reverse(char str[], int index)
{
    if (str[index] == '\0') 
    {
        return;
    }
    // Recursive call to go to the end
    reverse(str, index + 1);

    printf("%c", str[index]);
}
int main()
{
    char str[100];
    printf("Enter a String:");
    scanf("%s",&str);
    printf("Reverse String:");
    reverse(str, 0);
}