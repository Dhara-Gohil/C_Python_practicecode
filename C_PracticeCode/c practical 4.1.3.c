#include<stdio.h>
int main()
{
    int i,sum;
    i = 0;
    sum = 0;
    do
    {
        sum = sum + i;
        i++;
    }
     while(i<=100);
    printf("Ans = %d", sum);

    return 0;
}
