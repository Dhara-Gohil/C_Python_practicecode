// swap two numbers using pointer
#include<stdio.h>
void swap(int* , int *);

int main()
{
    int a,b;
    printf("Enter first num : ");
    scanf("%d",&a);
    printf("Enter second num : ");
    scanf("%d",&b);

    swap(&a,&b);// call by reference so use & while calling function
    printf("After swaping \n:");
    printf("first num : %d\n ",a);
    printf("second num : %d", b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
