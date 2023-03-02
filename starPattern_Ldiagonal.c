#include <stdio.h>
int main(){
  int row;
  printf("enter then number of rows: ");
  scanf("%d",&row);
  for (int i = 0; i <= row; i++){
    for (int j = 0; j <= i; j++){
      printf("*\t");
    }
    printf("\n");
  }
  
  return 0;
}