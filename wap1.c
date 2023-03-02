//read the inputs from user and find the sum and average of those numbers.

#include <stdio.h>
int main(){
  int x,sum,num;
  printf("Enter the number of numbers: \n");
  scanf("%d",&x);
  for (int i = 0; i < x; i++)
  {
    printf("Enter the number: ");
    scanf("%d",&num);
    sum+=num;
  }
  printf("Sum of %d numbers you gave is %d\n",x,sum);
  printf("Average of %d numbers you gave is %d\n",x,sum/x);
  
  return 0;
}