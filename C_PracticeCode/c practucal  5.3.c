#include<stdio.h>
 int main()
{
    int num,number,num1=0,num2=1,i;

    printf("Enter number to find fibonacci series : ");
    scanf("%d",&num);
    for (i=0; i<=num; i++)
    {
        number = num2+num1;
        num1=num2;
        num2=number;
        printf("%d \n", number);
    }
    return 0;


}
