#include <stdio.h>

typedef int Point[2];
typedef Point *PointPtr;

int main(){
  Point p = {3,4};
  PointPtr pp = &p;

  printf("%d %d %d %d %d %d\n", **pp, (*pp)[0], (*pp)[1], p[0], *p);
}
