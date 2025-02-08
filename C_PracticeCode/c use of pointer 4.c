// length of string using pointer and function.
#include<stdio.h>
#include<string.h>

int stringlength (char *str)
{
    int length;
    while(*str!='\0') // for value write *str and for add write ptr
    {
        length++;
        str++;
    }
    return length;
}

int main ()
{
    char str[100];
    printf("Enter string : ");
    gets(str);

    int length = stringlength(str);
    printf("Ans = : %d \n",length);

    return 0;
}
