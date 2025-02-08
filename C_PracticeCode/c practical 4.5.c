#include<stdio.h>
void main()
{
    int i,n,sum;
    i = 0;
    sum = 0;
    printf("Enter Number = ");
    scanf("%d",&n);
    for (i=0; i<=n; i++)
    {
        if (i%2 != 0)
        {
          sum = sum + i;
        }
    }
    printf("Ans = %d",sum);

}
