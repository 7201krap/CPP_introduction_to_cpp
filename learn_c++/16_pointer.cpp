// 포인터: 변수의 주소를 저장하는 변수
#include <stdio.h>

int main(){
  int a = 20;

  int *ptr_a;
  ptr_a = &a;

  // this is same as, int *ptr_a = a

  printf("%d %d %d\n", a, &a, ptr_a);
  printf("ptr_a가 가리키는 변수의 값: %d\n", *ptr_a);
}
