// reverse an aaray

#include<stdio.h>

 int swap(int *a, int *b)
 {
     int temp = *a;
     *a = *b;
     *b = temp;
 }

 int reversearray ( int arr[], int size)
 {
     int start = 0, end = size-1;
     while(start<end)
     {
         swap(&arr[start],&arr[end]);
         start++;
         end--;
     }
 }

 int main()
 {
     int arr[10];
     int i;
     printf("Enter 10 elements for an  array : ");
     for (i=0; i<10; i++)
     {
        scanf("%d",&arr[i]);
     }
     reversearray(arr,10);
     printf("\n reversed array is: ");
     for(i=0; i<10; i++)
     {
         printf("%d \t",arr[i]);
     }
     return 0;

 }



