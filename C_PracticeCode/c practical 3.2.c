#include<stdio.h>
void main()
{
    int a;
    printf("Enter one number = ");
    scanf("%d", &a);
    if( a%2 == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
    return 0;
}
