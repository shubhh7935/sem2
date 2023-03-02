#include <stdio.h>

int main() {
    int w;
    printf("Enter the number W: ");
    scanf("%d",&w);
    if (w%2==0 & w%3==0){
      printf("The number is divisible by both 2 and 3");
    }
    else{
      printf("The number is not divisible by either 2 or 3");
    }
    

    return 0;
}