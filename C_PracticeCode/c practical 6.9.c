#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (j=n; j>=i; j--)
        {
            printf("%c", (n-j+65));
        }
        printf("\n");
    }
    return 0;
}
