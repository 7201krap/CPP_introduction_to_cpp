// type define
// 형을 정의한다
#include <stdio.h>

int main(){
  typedef int Pair[2];  // Pair 라는 애를 이미 2개짜리 int 형 배열로 선언했다. 

  Pair point = { 3, 4 }; // int point[2] = {3,4};

  printf("(%d, %d)\n", point[0], point[1]);
}
