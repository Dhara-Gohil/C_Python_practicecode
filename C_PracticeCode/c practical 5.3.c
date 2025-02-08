#include<stdio.h>
int main()
{
    int num,number,num1,num2,i;
    num1 = 0;
    num2 = 1;
    printf("enter no. for series : ");
    scanf("%d",&num);
    printf("0   1   ");
    for (i=1; i<=num; i++)
    {
        number= num2+num1;
        num1=num2;
        num2=number;
        printf("%d \t",number);
    }
    return 0;

}
