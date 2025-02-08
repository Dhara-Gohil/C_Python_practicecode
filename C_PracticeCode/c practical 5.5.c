#include<stdio.h>
void main ()
{
    int i,n,r,reverse;
    reverse = 0;
    printf("Enter a number to find reverse : ");
    scanf("%d",&n);
    for (i=n; i>0; i=n)
    {
        i = n%10;
        reverse = reverse*10 + i;
        n=n/10;
    }
    printf("reverse number is = %d",reverse);
}
