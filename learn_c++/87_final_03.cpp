// arr  == &arr[0]
// *arr == arr[0]
// ptr + 1 == ptr에 sizeof(*ptr)를 더한 값

#include <iostream>

int main(){

  int arr[2][3] = {{1,2,3},{4,5,6}};

  // 3개짜리 일차원 배열을 가르키는 포인터
  int(*ptr)[3] = &arr[0]; // arr == &arr[0]

  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      printf("%d ", ptr[i][j]);
    }
  }
  printf("\n");
}
