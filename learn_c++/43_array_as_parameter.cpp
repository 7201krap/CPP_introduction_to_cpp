#include<stdio.h>

// This is also possible
// void print_arr(int list[4]){
void print_arr(int *list){
  for(int i=0; i<4; i++){
    list[i] *= 2;
  }
}

int main(){
  int arr[4] = {1,2,3,4};

  print_arr(arr);

  for(int i=0; i<4; i++){
    printf("%d ", arr[i]);
  }
}
