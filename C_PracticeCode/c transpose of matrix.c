// transpose of 3 cross 3 matrix.
#include<stdio.h>
int main()
{
    int i,j,org_matrix[3][3],tran_matrix[3][3];
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter matrix[%d][%d] element = ",i,j);
            scanf("%d",&org_matrix);

            tran_matrix[j][i]=org_matrix[i][j];
        }
    }
    printf("\n original matrix : \n\t ");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\t",org_matrix[i][j]);
        }
        printf("\n\t");
    }
    printf("\n transpose matrix : \n\t ");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",tran_matrix[i][j]);
        }
        printf("\n\t");
    }
}
