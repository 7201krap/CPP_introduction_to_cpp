#include <stdio.h>

void rec(int n){
  if(n == 0) return;
  printf("%d ", n);
  rec(n-1);
  printf("%d ", n);
}

int main(){
  rec(5);
}
