// for search any element.
// program to find out number of positive, negative and zero elements
#include<stdio.h>
#include<conio.h>
int main()
{
    int numbers[5];
    int i=0,cnt_pos=0,cnt_neg=0,cnt_zero=0;
    for (i=0; i<5; i++)
    {
        printf("\n Enter a number : ");
        scanf("%d",&numbers[i]);

        if(numbers[i]<0)
        {
            cnt_neg++;
        }
        if(numbers[i]==0)
        {
            cnt_zero++;
        }
        if(numbers[i]>0)
        {
            cnt_pos++;
        }

    }
    printf("\n negative numbers = %d",cnt_neg);
    printf("\n positive numbers = %d",cnt_pos);
    printf("\n zeros = %d",cnt_zero);
    return 1;
}
