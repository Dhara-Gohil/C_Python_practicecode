#include<stdio.h>
void main ()
{
    int i,n,count1,count2;
    i = 0;
    count1 = 0;
    count2 = 0;

    for (i=0; i<10; i++)
    {
      printf("Enter Number = ");
      scanf("%d",&n);

     if (n%2 == 0)
     {
        count1++;
     }
     else
     {
         count2++;
     }

    }
     printf("Even numbers = %d\n",count1);
     printf("Odd numbers = %d",count2);

}
