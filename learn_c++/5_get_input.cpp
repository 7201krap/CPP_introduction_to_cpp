#include <stdio.h>

int main(){
  int a, b;
  double c ,d;

  scanf("%d %d", &a, &b);
  scanf("%lf %lf", &c, &d);

  int int_adder = a + b;
  double double_adder = c + d;

  printf("%d + %d = %d\n", a, b, int_adder);
  printf("%lf + %lf = %f\n", c, d, double_adder);
}
