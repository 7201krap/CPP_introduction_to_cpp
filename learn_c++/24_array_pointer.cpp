/*
  1. ptr == &ptr[0]
  2 *ptr == ptr[0]
  3. ptr + 1 == ' ptr 에 sizeof(*ptr) 을 더한 값 '
*/

#include <stdio.h>

int main(){
  int arr[2][3] = { {1,2,3},
                    {4,5,6}, };

  // 3개짜리 int형 배열을 가리키는 포인터 
  int (*ptr)[3] = arr;

  printf("%d\n", arr+1);
  printf("%d\n", ptr);

  printf("%d\n", *arr);
  printf("%d\n", *ptr);

  printf("%d\n", *(*arr));
  printf("%d\n", *(*arr+1));
  printf("%d\n", *(*arr+2));

  printf("%d\n", *(arr));
  printf("%d\n", *(arr+1));
  printf("%d\n", *(arr+2));

  for (int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }


}
