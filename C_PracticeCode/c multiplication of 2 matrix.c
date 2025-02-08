// multiplication of 2 matrix.
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,sum=0;
    int ma1[2][2],ma2[2][2],ma3[2][2];
    printf("Enter elements for ma1 : \n ");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d",&ma1[i][j]);
        }
    }
    printf("Enter elements for ma2 : \n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d",&ma2[i][j]);
        }
    }
    printf(" multiplying 2 matrices.....\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            sum=0;
            for (k=0; k<2; k++)
            {
                sum = sum + ma1[i][j]*ma2[i][j];
            }
            ma3[i][j] = sum;
        }
    }
    printf("\n multiplication of two matrices : \n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("\t%d ",ma3[i][j]);
        }
        printf("\n");
    }
    getch();
}
