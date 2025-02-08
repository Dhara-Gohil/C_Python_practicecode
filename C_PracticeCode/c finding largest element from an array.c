// largest element from an array
#include<stdio.h>
int main()
{
    int array[5] = {22,36,25,14,98},i;
    printf("\n array elements are : ");
    for(i=0; i<5; i++)
    {
        printf("%d\t",array[i]);
    }
    int max = array[0];
    for (i=0; i<5; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
    }
    printf("\n largest number is = %d",max);

    return 0;
}
