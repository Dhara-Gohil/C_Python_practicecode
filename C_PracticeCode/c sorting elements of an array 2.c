// descending order
#include<stdio.h>
#include<conio.h>
int main()
{
    int array[6],i,j,temp;
    printf("enter elements for array :\n");
    for (i=0; i<6; i++)
    {
        scanf("%d",array[i]);
    }
    for (i=0; i<5; i++)
    {
        for (j=i+1; j<6;j++)
        {
            if (array[j]>array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("descending ordered array :\n ");
    for (i=0; i<6; i++)
    {
        printf("%d\t",array[i]);
    }
    return 1;
}
