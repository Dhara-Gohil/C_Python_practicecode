// fibbonacci using function
#include<stdio.h>
void fibbo(int n)
{
    int a=0, b=1;
    int temp,i;
    printf("0  1  ");
    for (i=0; i<n-2; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        printf("%d\t", temp);
    }
}
int main()
{
    int n;
    printf("\n Enter a number to print series : ");
    scanf("%d",&n);
    fibbo(n);
    return 0;

}
