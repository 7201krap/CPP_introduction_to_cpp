#include <stdio.h>

int main(){
  int a = 10;

  int *ptr;
  ptr = &a;

  int **ptr_ptr;
  ptr_ptr = &ptr;

  printf("a = %d\n", a);
  printf("*ptr = %d\n", *ptr);
  printf("**ptr_ptr = %d\n", *(*ptr_ptr));

  printf("\n");

  printf("&a = %d\n", &a);
  printf("ptr = %d\n", ptr);
  printf("*ptr_ptr = %d\n", *ptr_ptr);
  printf("\n");

  printf("&ptr = %d\n", &ptr);
  printf("ptr_ptr = %d\n", ptr_ptr);

}
