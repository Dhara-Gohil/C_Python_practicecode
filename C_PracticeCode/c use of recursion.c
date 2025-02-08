// sum 5 digits number
#include<stdio.h>

int sumofdigits(int n);

int main()
{
    int num;
    printf("Enter a 5 digit positive number ");
    scanf("%d",&num);

    if (num <10000 || num > 99999)
    {
        printf(" Invalid numbers \n please enter valid number \n");
        return 0;
    }
    int sum = sumofdigits(num);
    printf("Answer is : %d",sum);
    return 0;
}

int sumofdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%10)+sumofdigits(n/10);
    }
}
