// string to accept elements and print them
#include<stdio.h>
#include<conio.h>
int main()
{
    char array[10];
    int i;
    printf("\n Enter 10 character : ");
    for (i=0; i<10; i++)
    {
        scanf("%c",&array[i]);
    }
    printf("\n Enter array is : ");
    for (i=0; i<10; i++)
    {
        printf("%c",array[i]);
    }
    return 1;
}
