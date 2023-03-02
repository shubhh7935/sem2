//WAP a program in which user has to enter even value to stop the program and user is given only 3 chances.

#include <stdio.h>
int main(){
  int x;
  for (int i = 0; i < 3; i++)
  {
    printf("%d\n",i);
    printf("Enter an even value to stop the program:");
    scanf("%d/n",&x);
    if (x%2==0){
      break;
    }
    else{
      continue;
    }
  }
  return 0;
}