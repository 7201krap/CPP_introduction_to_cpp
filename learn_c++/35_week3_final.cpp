#include<stdio.h>

int main(){

  int arr[3][3] = { 0 };

  printf("1. %d\n", &arr[0][0]);  // 100

  printf("2. %d\n", arr[0] + 1);  // 104
  printf("1. %d\n", &arr[0][0] + 1);  // 104
  printf("3. %d\n", &arr[0] + 1);   // 112
  printf("4. %d\n", arr +  1 );  // 112
  printf("5. %d\n", *arr +  1 );  // 104

  printf("6. %d\n", &arr + 1 ); // 124

}
