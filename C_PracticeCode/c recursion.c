#include<stdio.h>
int sum(int n);
int main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d",&no);
    printf("sum is = %d",sum(no));
    return 0;
}

int sum(int n)
{
   if(n != 0)
   {
    return n + sum(n - 1);
   }
   else
    return n;
}
