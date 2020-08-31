#include <stdio.h>

int main(){

  int a = 10;
  int *ptr_a = &a;

  printf("value of ptr_a: %d\n", ptr_a);
  printf("value of ptr_a + 1: %d\n", ptr_a + 1);

}
