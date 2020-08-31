// 포인터: 변수의 주소를 저장하는 변수
#include <stdio.h>

int main(){
  int a = 10;

  int *ptr;

  ptr = &a;

  printf("value of a: \n", a);

  *ptr = 20;

  printf("value of a: \n", a);

}
