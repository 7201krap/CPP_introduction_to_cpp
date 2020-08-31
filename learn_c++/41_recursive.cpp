// 재귀 함수
#include<stdio.h>

void rec(int n){
  if (n > 5) return;
  printf("n = %d\n", n);
  rec(n + 1);
}

int main(){
  rec(1);
}
