// Pointers in C:- WAP to demonstrate pointer usage. Use a pointer to modify the value of a variable and 
// print the result.
#include <stdio.h>
int main() 
{
    int num = 10;  
    int *ptr;      
    
    ptr = &num;
    printf("Value of num before modification: %d\n", num);
    
    // Modify the value
    *ptr = 20;
    printf("Value of num after modification: %d\n", num);
}
