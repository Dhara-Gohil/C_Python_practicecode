// red integer numbers in array using pointer

#include<stdio.h>
#include<conio.h>

int main ()
{
    int m[10];
    int *ptr = m;// declaration of pointer

    printf("Enter 10 integer numbers : \n");
    for (int i =0; i<10; i++)
    {
        scanf("%d",ptr+i); // for add write ptr+i for value we should *(ptr+i)
    }
    printf("Enter elements of the array : \n");

    for (int i=0; i<10; i++)
    {
        printf("%d \n", *(ptr+i));
    }
    printf("\n");
    return 0;
}
