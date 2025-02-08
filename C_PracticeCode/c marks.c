#include<stdio.h>
void main()
{
    int english,hindi,maths,total;

    printf("\n Marks of English :");
    scanf("%d",&english);

    printf("\n Marks of HIndi :");
    scanf("%d", &hindi);

    printf("\n Marks of Maths :");
    scanf("%d", &maths);


    total = english + hindi + maths;
    printf("Total = %d",total);
    return 0;

}
