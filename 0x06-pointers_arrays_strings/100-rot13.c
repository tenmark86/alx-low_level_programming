#include "main.h"
#include <stdio.h>


/**
* ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet.
* ROT13 is an example of the Caesar cipher.
* This function takes a string and returns the string ciphered with Rot13. 
If there are numbers or special characters included in the string, they are returned as they are. 
* Only letters from the latin/english alphabet are shifted, like in the original Rot13 "implementation".
*/

int rot13(int c){
  if('a' <= c && c <= 'z'){
    return rot13b(c,'a');
  } else if ('A' <= c && c <= 'Z') {
    return rot13b(c, 'A');
  } else {
    return c;
  }
}

int rot13b(int c, int basis){
  c = (((c-basis)+13)%26)+basis;
  return c;
}

int main() {
  printf("The given args will be rotated");
  int c;
  while((c = getchar()) != EOF){
    c = rot13(c);
    putchar(c);
  }
  return 0;
}
