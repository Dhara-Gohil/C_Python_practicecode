// sum of first natural numbers
#include<stdio.h>

int sumofnumbers(int);

int main()
{
    int n, sum;
    printf("Enter a positive integer : ");
    scanf("%d",&n);

    sum=sumofnumbers(n);
    printf("Ans is : %d",sum);
    return 0;
}

int sumofnumbers(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return n+sumofnumbers(n-1);
    }
}
