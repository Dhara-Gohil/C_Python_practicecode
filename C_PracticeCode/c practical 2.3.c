#include<stdio.h>
void main()
{
  int days,months;

  printf("Enter Days = %d ",days);
  scanf("%d", &days);

  months = (days)/30;
  days = days%months;

  printf("Months = %d\n",months);
  printf("Days = %d \n", days);
  return 0;
}
