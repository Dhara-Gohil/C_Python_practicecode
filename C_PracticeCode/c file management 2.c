// file management using functions.
#include<stdio.h>
#include<stdlib.h>

// function to write data to a file
void writetofile (const char *filename, const char *data)
{
    FILE*file=fopen(filename,"w");
    if (file == NULL)
    {
        printf("error opening the for writing.\n");
        return;
    }
    fprintf(file,"%s",data);

    fclose(file);
}

// function to read data from a file
void readfromfile (const char *filename)
{
    FILE *file = fopen(filename,"r");
    if (file == NULL)
    {
        printf("error !");
        return;
    }
    char ch;
    while((ch=fgetc(file))!=EOF) // Ahiya pehla ak ch input karvano ae aa file mathi read karva mate chhe ane aena input mate putchar use karel chhe.
    {
        putchar(ch);
    }

    fclose(file);
}

int main()
{
    const char *filename = "example.txt";
    const char *data = "this is a simple example of file management in c.\n you can use functions for file operations. \n";

    //write data to a file calling function .
    writetofile(filename,data);
    printf("Data has been written to the file. \n");

    // Read data from file .
    printf("content of the file:\n");
    readfromfile(filename);

    return 0;
}
