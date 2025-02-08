// program to display the contents of given file.
#include<stdio.h>
#include<stdlib.h>
 int main()
 {
     FILE *file; // declare file pointer

     file = fopen("example.txt","w"); // opening a file for writing

     if(file == NULL)
     {
         printf("Error opening the file. \n");
         return 1;
     }

     // writing to the file
     fprintf(file,"this is a simple example of file management in c\n\n");
     fprintf(file,"you can use functions like fopen,fprint and fclose for file operations.\n");

     // closing the file after write
     fclose(file);

     //opening file for reading
     file = fopen("example.txt","r");

     if (file==NULL)
     {
         printf("Error opening the file. \n");
         return 1;
     }

     // read and print the content of the file
     char ch;
     while((ch = fgetc(file))!=EOF)
     {
         putchar(ch);
     }
     // closing file after reading
     fclose(file);

     return 0;
 }
