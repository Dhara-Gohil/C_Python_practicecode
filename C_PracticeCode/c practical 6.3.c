#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number to print pattern :");
    scanf("%d",&n);
    for (i=0; i<=n; i++)
    {
        for (j=0; j<i; j++)
        {
            printf(" ");
        }
        for (k=n; k>i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
