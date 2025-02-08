#include<stdio.h>
void main()
{
    int i,sum;
    for (i=101; i<200; i++)
    {
        if (i%5 == 0)
        {
           sum = sum + i;
        }
    }
    printf("Ans = %d",sum);
}
