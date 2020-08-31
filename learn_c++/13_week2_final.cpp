#include <stdio.h>

int main(){
  int a = 5;
  int l;

  for(int i=0; i<2*a; i=i+2){
    for(int j=0; j<=i; j++){
      printf("%d ", j+1);
    }
    printf("\n");
  }
}
