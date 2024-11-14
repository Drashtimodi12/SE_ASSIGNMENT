// Challenge: Write the program without using built-in string handling functions.
#include <stdio.h>
int reverseString(char str[])
{
    int start = 0;
    int end = 0;
    char temp;

    // length
    while (str[end] != '\0')
    {
        end++; 
    }
    end--; 

    // Reverse
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    while (1)
    {
        char ch = getchar(); 
        if (ch == '\n')
        { // Stop when the user presses Enter
            break;
        }
        str[i] = ch;
        i++;
    }
    str[i] = '\0'; 
    
    reverseString(str);
    printf("Reversed string: %s\n", str);
}
