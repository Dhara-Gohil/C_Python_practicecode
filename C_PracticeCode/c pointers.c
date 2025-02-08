#include<stdio.h>
int main()
{
    int no = 50;
    int *p;
    p=&no;
    printf("\n value stored in no :%d ", no);
    printf("\n address of value no is :%u ", &no);
    printf("\n value store in pointer variable p is :%u ", p);
    printf("\n value pointed by pointer variable *p is  :%d ", *p);

    // p = &no;
    // *no = p;

    return 1;
}
