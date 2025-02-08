#include<stdio.h>
void main()
{
    int a,b;
    char c;

    printf("Enter Operation = ");
    scanf("%c", &c);
    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);

    switch(c)
    {
        case'+':printf("Ans = %d",a+b);
        break;
        case'-':printf("Ans = %d",a-b);
        break;
        case'*':printf("Ans = %d",a*b);
        break;
        case'/':printf("Ans = %d",a/b);
        break;
        default:printf("invalid oparation");
    }
    return 0;
}
