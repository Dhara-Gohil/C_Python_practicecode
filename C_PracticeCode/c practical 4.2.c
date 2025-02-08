#include<stdio.h>
int main()
{
    int n,a,b,i;

    printf("Enter no. = ");
    scanf("%d",&n);

    printf("Enter range = ");
    scanf("%d %d",&a,&b);

    for (i=a; i<=b; i++)
    {
        if (i%n == 0)
        {
            printf("\n Ans = %d",i);
        }
    }


    return 0;
}
