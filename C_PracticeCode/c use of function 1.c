// find maximum of two using functions
#include<stdio.h>
int max(int,int);
int main()
{
    int a,b;
    printf(" Enter 2 numbers to find max : ");
    scanf("%d %d",&a,&b);
    int maximum = max(a,b);
    return 0;
}

int max(int a, int b)
{
    if (a>b)
    {
        printf(" A is maximum");
        return a;
    }
    else
    {
        printf("B is maximum");
        return b;
    }
}
