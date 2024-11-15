// File Handling in C:- WAP to create a file, write a string into it, close the file, then open the file again to read and display its contents.
#include <stdio.h>
int main()
{
    FILE *filePointer;
    const char *fileName = "FileCreate.txt";
    const char *text = "Hello, this is a test string.";
    char str[100];

    filePointer = fopen(fileName, "w");
    
    if (filePointer == NULL) 
    {
        printf("Error: Could not open file %s for writing.\n", fileName);
        return 1;
    }

    fprintf(filePointer, "%s", text);

    fclose(filePointer);

    printf("File created and string written successfully.\n");


    filePointer = fopen(fileName, "r"); //reopen

    if (filePointer == NULL) 
    {
        printf("Error: Could not open file %s for reading.\n", fileName);
        return 1;
    }
    printf("File found and data are:\n");
    while (fgets(str, sizeof(str), filePointer) != NULL) 
    {
        printf("%s", str);
    }
    fclose(filePointer);
}