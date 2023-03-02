#include <stdio.h>
int main(){
  int i,j,k;
  printf("Enter the number: ");
  scanf("%d",&k);
  printf("the tables form 1 to %d: \n",k);
  for (int i = 1; i < k; i++){
    for (int j = 1; j <= 10; j++)
    {
      printf("%d * %d ==%d\n",i,j,i*j);
    }
    printf("\n");
  }
  
  return 0;
}