#include<stdio.h>
void main()
{
    int i,j,n,flag;
    printf("Enter a positive number :");
    scanf("%d",&n);

    printf("Prime numbers b/w 1 to %d are :",n);
    for(i=2; i<=n; i++)
    {
        flag=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
                flag=1;
                break;
        }
        if(flag==0)
        {
            printf("%d",i);
        }
        return 0;
    }




}
