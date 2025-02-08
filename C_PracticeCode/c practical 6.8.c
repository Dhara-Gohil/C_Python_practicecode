#include<stdio.h>
int main()
{
    int i,j,n,a=65;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (i=n; i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
            printf("%c",a);
        }
        printf("\n");
        a++;
    }
    return 0;
}
