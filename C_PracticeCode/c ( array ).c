//example of array declaration , entering values and accessing elements for 1D array.
#include<stdio.h>
int main()
{
    float percentage [5]; // declaration of array
    int i; // variable for loop
    for (i=0; i<5; i++)
    {
        printf("Enter the value for student %d :",i+1);
        scanf("%f",&percentage[i]);
    }
    // entering value or take value from user.
    for (i=0; i<5; i++)
    {
        printf("\n percentage of student %d : %4.2f",i+1,percentage[i]);
    }
    return 1;
}
