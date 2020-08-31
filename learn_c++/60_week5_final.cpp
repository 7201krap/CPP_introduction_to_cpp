#include <stdio.h>

struct Point{
  int x,y;

  void p_swap(){
    int tmp;

    tmp  = x;
    x = y;
    y = tmp;
  }
};
 


int main(){
  Point pos = {3,4};

  pos.p_swap();

  printf("%d %d\n", pos.x, pos.y);
}
