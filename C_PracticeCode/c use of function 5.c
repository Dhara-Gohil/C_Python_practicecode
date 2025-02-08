// find length of string using functions
#include<stdio.h>
int stringlength(char str[], int size);
int main()
{
    char str[100];
    int length;
    printf("\nEnter a string : ");
    scanf("%s",&str);
    length=stringlength(str,100);
    printf(" length of string is = %d", length);
    return 0;
}
int stringlength(char str[],int size)
{
   int length = 0;
   while(str[length]!='\0')
   {
       length++;
   }
   return length;
}
