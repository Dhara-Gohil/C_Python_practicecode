// find sum of array elements
#include<stdio.h>
int main ()
{
    int array[6];
    int sum=0,i;
    int *ptr=array;
    printf("Enter 6 elements to find out sum : \n");
    for (i=0; i<6; i++)
    {
        scanf("%d",&array[i]);
        sum = sum + *ptr; //for value we should write *ptr for add just ptr.
        ptr++;
    }
    printf("Ans : %d",sum);
    return 0;

}
