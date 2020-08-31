// 배열 포인터: 배열을 가리키는 포인터
// 포인터 배열: 포인터들이 배열을 이룸.
// 포인터: 변수의 주소를 저장하는 변수

// 포인터배열
#include <stdio.h>
int main(){

  int arr[4] = {1,2,3,4};
  int *ptr[4];

  for (int i=0; i<4; i++){
    ptr[i] = &arr[i];
  }

  for (int i=0; i<4; i++){
    printf("%d ", *ptr[i]);
  }

  printf("\n");

}
