#include <stdio.h>

int main(){
  char a = 65;
  char b;

  printf("--> %c\n", a);

  printf("What character do you want to convert? ");
  scanf("%c", &b);
  printf("%c 의 ASCII 값: %d\n", b, b);
}
