// Write a program in C to copy one string to another string.
//strcpy() :to copy one string to other.
//strcpy("destination","original str")
#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char str1[50],str2[50],s3[50];
    printf("Enter string:");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter string2:");
    fgets(str2,sizeof(str2),stdin);
    
    if (str2[strlen(str2) - 1] == '\n') 
    {
        str2[strlen(str2) - 1] = '\0';
    }
    strcpy(s3, str2);

    printf("string 2 copied to string 3: %s",s3);
}