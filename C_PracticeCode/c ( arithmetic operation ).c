#include<stdio.h>
 void main()
 {
     int n1,n2,r;
     printf("Enter two numbers :");
     scanf("%d%d",&n1,&n2);

     r = n1 + n2;
     printf("\n Addition :%d",r);

     r = n1 - n2;
     printf("\n Subtraction :%d", r);

     r = n1 * n2;
     printf("\n Multiplication :%d", r);

     r = n1 % n2;
     printf("\n Modulo :%d", r);

     r = n1 / n2;
     printf("\n division :%f",(float) r);
     return 0;

 }
