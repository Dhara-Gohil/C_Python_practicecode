#include<stdio.h>
void main()
{
    int i,k,sum;

    printf("Enter Number = ");
    scanf("%d",&k);
    for (i=0 ; i<=k; i++)
    {
      sum = sum + i;
    }
    printf("Ans = %d\n",sum);

    return 0;
}
