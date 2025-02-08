#include<stdio.h>
void main ()
{
  int n,i,a,sum;
  sum = 0;
  printf("Enter number b/w 1 to 999 to check armstrong number = ");
  scanf("%d",&n);
  for (i=n; n>0; n=n/10)
  {
    a = n%10;
    sum = sum + (a*a*a);

  }
  if (sum == i)
  {
      printf("Number is armstrong");
  }
  else
  {
      printf("Number is not armstrong");
  }

}
