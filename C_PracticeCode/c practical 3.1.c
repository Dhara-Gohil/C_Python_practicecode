#include<stdio.h>
 void main()
 {
     int a;
     printf("enter one number = ");
     scanf("%d", &a);
     if (a%2 == 0)
     {
         printf("Number is Even");
     }
     if ( a%2 != 0)
     {
         printf("Number is Odd");
     }
     return 0;
 }
