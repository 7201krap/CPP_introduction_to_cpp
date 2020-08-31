#include <stdio.h>
#include <stdlib.h>

int p(){
  exit(0);
}

int main(){
  int sum = 0;

  for (int i = 0; i < 5; i++){
    int n;

    scanf("%d", &n);

    if (n<=0){
      printf("Input error\n");
      exit(0);
    } else {
      sum = sum + n;
    }
  }
  
  printf("%d\n", sum);
}
