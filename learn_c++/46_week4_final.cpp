#include <stdio.h>

int main(){
  int arr[3] = {1,2,3};

  printf("%d\n", arr);
  printf("%d\n", &arr + 1);
  printf("%d\n", arr + 1);
  printf("%d\n", &arr[0] + 1);

}
