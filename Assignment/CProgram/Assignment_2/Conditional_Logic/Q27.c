/* WAP to show
i.	Monday to Sunday using switch case
ii.	Vowel or Consonant using switch case
*/
 
// Monday to Sunday using switch case
/*
#include<stdio.h>
int main()
{
    int day;
    printf("Enter day to print:");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
      case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
      case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid day.");
    }
}  */

// Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'A':
    case 'a':
        printf("%c is a vowel.",ch);
        break;
    case 'E':
    case 'e':
        printf("%c is a vowel.",ch);
        break;
    case 'I':
    case 'i':
        printf("%c is a vowel.",ch);
        break;
    case 'O':
    case 'o':
        printf("%c is a vowel.",ch);
        break;
    case 'U':
    case 'u':
        printf("%c is a vowel.",ch);
        break;
    default:
        printf("%c is a consonant.",ch);
        break;
    }
}