// C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);

    if (a >= 'A' && a<= 'Z')
    {
        printf("Character %c is Uppercase.", a);
    }
    else if (a >= 'a' && a<= 'z')
    {
        printf("Character %c is Uppercase.", a);
    }
    else if (a >= '0' && a<= '9')
    {
        printf("Character %c is Uppercase.", a);
    }
    else
    {
        printf("%c is Special Character.", a);
    }
}