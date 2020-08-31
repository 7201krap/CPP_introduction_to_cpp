#include <stdio.h>
int main(){
  int math = 90;
  int korean = 95;
  int english = 96;

  int sum = math + korean + english;

  // 여기서 순간적으로 sum 은 실수가 된다. 
  double avg = (double)sum / 3;

  printf("%f\n", avg);
}
