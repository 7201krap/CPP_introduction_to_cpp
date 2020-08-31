#include <stdio.h>

int main(){
  // Q3
  // Get an alphabet and print the next alphabet
  printf("=====QUESTION 3=====\n");

  char p;
  int next_p;

  printf("Input alphabet: ");
  scanf("%c", &p);

  next_p = (int)p + 1;

  printf("The next alphabet is: %c\n", next_p);
}
