#include<stdio.h>
int main()
{
    int i,sum;
    i = 0;
    sum = 0;
    for (i=0; i<=100; i++)
    {
        sum = sum + i;
    }
    printf ("Ans = %d",sum );
    return 0;
}
