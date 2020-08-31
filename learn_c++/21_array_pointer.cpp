// 포인터: 변수의 주소를 저장하는 변수
#include <stdio.h>

int main(){
  int arr[3] = {1,2,3};
  int *ptr = arr;

  for(int i=0; i<3; i++){
    printf("%d ", *(ptr+i));
  }
  printf("\n");

  for(int i=0; i<3; i++){
    printf("%d ", ptr[i]);
  }
  printf("\n");

  // arr[ i ] == *(arr + i) == *(ptr + i) == *(i + ptr) == i[ptr]
  // a[b] == *(a + b)
  for(int i=0; i<3; i++){
    printf("%d ", i[ptr]);
  }
  printf("\n");
  
}
