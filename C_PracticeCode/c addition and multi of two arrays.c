// addition and multiplication
#include<stdio.h>
main()
{
    int i,array1[5],array2[5],array3[5];
    printf("Enter elements for first array");
    for (i=0; i<5; i++)
    {
        printf("\n Enter number for array1[%d]",i);
        scanf("%d",&array1[i]);
    }
    printf("\n Enter elements for second array");
    for(i=0; i<5; i++)
    {
        printf("\n enter number for array2[%d]",i);
        scanf("%d",&array2[i]);
    }
    printf("\n addition of array1 and array2");
    for(i=0; i<5; i++)
    {
        array3[i]=array1[i]+array2[i];
        printf("\n array1[%d] + array2[%d] = array3[%d] = %d",i,i,i,array3[i]);
    }
    printf("\n multiplication of array1 and array2");
    for (i=0; i<5; i++)
    {
        array3[i]=array1[i]*array2[i];
        printf("\n array1[%d] * array2[%d] = array3[%d] = %d",i,i,i,array3[i]);
    }
}
