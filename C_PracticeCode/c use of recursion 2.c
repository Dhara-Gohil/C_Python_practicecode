// using recursion find factorial
#include<stdio.h>
 int factorial(int n);

 int main()
 {
     int num;
     printf(" Enter a number to find factorial : ");
     scanf("%d",&num);

     if (num<0)
     {
         printf("Invalid input ! please enter valid number \n");
         return 0;
     }
     int result = factorial(num);
     printf("Ans is : %d ",result);
     return 0;

 }

 int factorial(int n)
 {
     if (n==0)
     {
         return 1;
     }
     else
     {
         return n*factorial(n-1);
     }
 }
