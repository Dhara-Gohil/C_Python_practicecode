// addition and subtraction of 2 matrix.
#include<stdio.h>
int main()
{
    int i,j,matrix1[2][2],matrix2[2][2],matrix3[2][2];
    printf("\n Enter elements for first matrix : ");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\n Enter elements for second matrix : ");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\n Matrix 1:\n\t\t");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n\t\t");
    }
    printf("\n Matrix 2: \n\t\t");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("%d\t",matrix2[j][j]);
        }
        printf("\n\t\t");
    }
    printf("\n addition of both matrices :\n\t\t");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d\t",matrix3[i][j]);
        }
        printf("\n\t\t");
    }
    printf("\n subtraction of both matrices :\n\t\t");
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            matrix3[i][j]=matrix1[i][j]-matrix2[i][j];
            printf("%d\t",matrix3[i][j]);
        }
        printf("\n\t\t");
    }
}
