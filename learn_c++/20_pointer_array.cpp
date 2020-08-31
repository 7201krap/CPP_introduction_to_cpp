#include <stdio.h>

int main(){

  int arr[10] = {1,2,3,4,5,6,7,8,9,10};

  printf("value of arr: %d\n", arr);
  printf("%d\n", &arr);

  for(int i=0; i<10; i++){
    printf("&arr[%d] = %d\n", i, &arr[i]);
    printf("arr + %d = %d\n", i, arr + i);
  }

  for(int i=0; i<10; i++){
    printf("%d\n", arr[i]);
    printf("%d\n", *(arr + i));
  }

  for(int *ptr = arr; ptr < arr + 10; ptr++){
    printf("--> %d\n", *ptr);
  }



}
