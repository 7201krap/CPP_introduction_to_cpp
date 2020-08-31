#include <stdio.h>

int main(){
  int b;

  printf("What integer do you want to convert? ");
  scanf("%d", &b);
  printf("%d 의 ASCII 값: %c\n", b, b);
}
