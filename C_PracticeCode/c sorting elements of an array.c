// arrange elements of an array in ascending order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int array[10],i,j,temp;// for arranging any normally we use temp '3'.
    printf("enter 10 elements of array : ");//for enter elements in array always use loop and in it use scanf.
    for (i=0; i<10; i++)//first loop for take ele from user
    {
        scanf("%d",&array[i]);
    }
    for (i=0; i<9; i++) // 2 for compare i to all elements.
    {
        for (j=i+1; i<10; j++) //3 for compare.( 0th element compare to all other with the help of this.)
        {
            if(array[j]<array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\n ascending ordered array :\n");
    for (i=0; i<10; i++)
    {
        printf("%d\t", array[i]);
    }
    return 1;
}
