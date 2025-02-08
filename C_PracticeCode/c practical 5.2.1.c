#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for (i=2; i<=n/2; i++)
    {
      if (n%i==0)
      {
          printf("Number is not prime");
          break;
      }
      else
      {
          printf("Number is prime");
          break;
      }
    }


}
