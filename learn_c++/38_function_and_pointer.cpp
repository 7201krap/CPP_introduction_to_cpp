#include <stdio.h>

void top_up_100(int *cost, int x){
  *cost += x;
}

int main(){

  int a = 10;

  top_up_100(&a, 100);

  printf("%d\n", a);

}
