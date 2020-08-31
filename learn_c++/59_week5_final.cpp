#include <stdio.h>

struct Point{
  int x,y;
};

void p_swap(Point *p){
  int tmp;

  tmp  = p->x;
  p->x = p->y;
  p->y = tmp;
}

int main(){
  Point pos = {3,4};

  p_swap(&pos);

  printf("%d %d\n", pos.x, pos.y);
}
