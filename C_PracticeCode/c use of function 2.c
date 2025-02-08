// find sum of digits of number
#include<stdio.h>
int sumofdigits (int);
int main()
{
    int a,sum;
    printf("Enter a number to find sum of digits : ");
    scanf("%d",&a);
    sum = sumofdigits(a);
    printf(" ans is %d", sum);

    return 0;
}

int sumofdigits(int a)
{
    int sum = 0;
    do
    {
        int lastdigit = a%10;
        sum = sum + lastdigit;
        a= a/10;


    }
    while(a>0);
    return sum;
}


