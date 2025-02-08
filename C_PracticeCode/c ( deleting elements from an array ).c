// deleting element from an array
#include<stdio.h>
int main()
{
    int array[10],i,n,pos;
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d elements \n", n); // now enter all element
    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the position to be deleted");
    scanf("%d",&pos);// now receive position from user
    if (pos >= n+1)
    {
        printf("deletion not possible\n");// if user input position more than the array size
    }
    else
    {
        for (i=pos-1; i<n-1; i++)
        {
            array[i]=array[i+1]; // shifts the element from right to left
        }
        printf("After deleting element at %d location the array is \n , pos ");
        for (i=0; i< n-1; i++)
        {
            printf("%d\n",array[i]);
        }
    }
    return 0;

}
