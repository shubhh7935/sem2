#include <stdio.h>
int main(){
  //taking a character as input
  char ch;
  printf("enter the character:\n");
  scanf("%c",&ch);
  //checking if the character is UpperCase
  if (ch>='A' && ch<='Z'){
    printf("Entered character is UpperCase.\n");
  }
  //checking if the character is LowerCase
  else if (ch>='a' && ch<='z'){
    printf("Entered character is LowerCase.\n");
  }
  //checking if the character is digit
  else if (ch>='0' && ch<='9'){
    printf("Entered character is a Digit.\n");
  }
  //checking if the character is SpecialCharacter
  else{
    printf("Entered Character  is a special character.\n");
  }

  return 0;
}