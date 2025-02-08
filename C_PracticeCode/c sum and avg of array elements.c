// calculating sum and avg of array elements.
// find sum and avg of marks.
#include<stdio.h>
#include<conio.h>
int main()
{
    int avg,sum=0;
    int i;
    int marks[10];
    for (i=0; i<10; i++)
    {
        printf("\n Enter marks : ");
        scanf("%d",&marks[i]);
    }
    for (i=0; i<10; i++)
    {
        sum = sum + marks[i];
    }
    printf("\n sum of marks is = %d",sum);
    avg = sum / 10;
    printf("\n avg of marks is = %d",avg);

    return 0;
}
