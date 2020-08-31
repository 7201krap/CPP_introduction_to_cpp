#include <stdio.h>

// 3개짜리 int형 배열을 가리키는 포인터
// <This is also possible>
// void print_arr(int list[2][3]){
void print_arr(int (*list)[3]){
  for(int i=0; i < 2; i++){
    for(int j=0; j < 3; j++){
      printf("%d\n", list[i][j]);
    }
  }
}

int main(){
  int arr[2][3] = {{1,2,3},{4,5,6}};
  print_arr(arr);
}
