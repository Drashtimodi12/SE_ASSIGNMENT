// File Handling in C:- WAP to create a file, write a string into it, close the file,
// then open the file again to read and display its contents.
#include <stdio.h>
int main()
{
    FILE *file;
    char str[] = "This is a string written to the file.";
    char buffer[100];

    file = fopen("C:\\Tops_Work\\C Program\\Assignment\\String\\File.txt", "w"); 
    if (file == NULL)
    {
        printf("Error opening the file for writing.\n");
        return 1; 
    }

    fprintf(file, "%s", str);

    fclose(file);

    file = fopen("C:\\Tops_Work\\C Program\\Assignment\\String\\File.txt", "r"); 
    if (file == NULL)
    {
        printf("Error opening the file for reading.\n");
        return 1; 
    }

    printf("Contents of the file: ");
    fgets(buffer, sizeof(buffer), file); 

    printf("%s\n", buffer);

    fclose(file);
}
