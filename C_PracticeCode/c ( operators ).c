#include<stdio.h>
 int main()
 {
     // relational operator
     printf("%d \n", 4==4);

     printf("%d \n", 4<3);
     printf("%d \n", 3<4);
     printf("%d \n", 4<4);
     printf("%d \n", 4<=4);

     printf("%d \n", 4>3);
     printf("%d \n", 3>4);
     printf("%d \n", 4>=4);

     printf("%d \n", 4!=4);
     printf("%d \n", 3!=4);

    // logical operator
    printf("%d \n",3<4 && 3<5);
    printf("%d \n", 3<4 || 3<5);
    printf("%d \n", !(3<4 && 3<5));

    // assignment operator
    int a = 10;
    a =+ 10;
    printf("a+10 = %d \n", a);
    return 0;

