#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float res,num;
    i=1;
    squart:
    printf("Enter the number  ");
    scanf("%f", &num);
    if (num<0)
    {
        printf("Enter valid  no \n");
        goto squart;
    }
    res = sqrt(num);
    printf("\n Ans = %f \n\n ",res);
    i++;
    if (i<=5)
    {
    goto squart;
    }

    return 0;

}

