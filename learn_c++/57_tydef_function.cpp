#include <stdio.h>

struct Point{
  int x,y;

  void move_right() { x++; }
  void move_left()  { x--; }
  void move_up()    { y++; }
  void move_down()  { y--; }

};

int main(){
  Point p = {2, 5};

  p.move_right();
  p.move_down();

  printf("(%d, %d)\n", p.x, p.y);

}
