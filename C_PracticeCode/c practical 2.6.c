#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the value of x = ");
    scanf("%d", &x);
    y = 4*x^3 - 5*x + 9;
    printf("ans = %d", y);
    return 0;
}
