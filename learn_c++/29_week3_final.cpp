/*
100개 이하의 정수를 입력받아
첫 줄에 짝수 번째 숫자들을 순서대로 출력하고
다음 줄에 홀수 번째 숫자들을 순서대로 출력하는 프로그램을 만들어 보세요.
*/

#include <stdio.h>

int main(){
  int get_int;
  int arr[105];

  printf("How many numbers do you need? ");
  scanf("%d", &get_int);

  for(int i=1; i<=get_int; i++){
    scanf("%d", &arr[i]);
  }

  for(int i=1; i<=get_int; i++){
    if (i%2 == 0){
      printf("%d ", arr[i]);
    }
  }
  printf("\n");

  for(int i=1; i<=get_int; i++){
    if (i%2 == 1){
      printf("%d ", arr[i]);
    }
  }

  printf("\n");





}
