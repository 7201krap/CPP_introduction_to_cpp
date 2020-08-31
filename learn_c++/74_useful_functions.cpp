#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  // seed
  srand(time(NULL));  // 이게 선언된 다음 부터는 time(NULL) 안에 들어있는 seed 값에 따라서 난수가 발생한다. 

  for(int i=1; i<=10; i++){
    printf("%d\n", rand()%10);
  }
}
