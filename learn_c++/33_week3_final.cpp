/*

10*10 이하의 정수형 이차원 배열을 입력받아
그 배열의 각 행의 요소의 합을 출력하는 프로그램을 만들어 보세요

<입력>
3 4
4 2 6 3
7 9 3 4
5 1 2 1

<출력>
15
23
9

*/
#include<stdio.h>

int main(){
  int a, b;
  int arr[10][10] = {0};
  int ans[3] = {0};

  printf("Enter two number to generate a 2 by 2 matrix: ");
  scanf("%d %d", &a, &b);

  for(int i=0; i < a; i++){
    for(int j=0; j < b; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  for(int i=0; i < a; i++){
    for(int j=0; j < b; j++){
      ans[i] = ans[i] + arr[i][j];
    }
    printf("%d \n", ans[i]);
  }
  printf("\n");
}
