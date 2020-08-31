/*
  1. ptr == &ptr[0]
  2 *ptr == ptr[0]
  3. ptr + 1 == ' ptr 에 sizeof(*ptr) 을 더한 값 '
*/

#include <stdio.h>

int main(){
  int arr[2][3] = { {1,2,3},
                    {4,5,6}, };

  printf("--> %d %d %d %d %d\n", arr, &arr, &arr+1, &arr[0]+1, &arr[0][0]+1);


  for (int(*row)[3] = arr; row < arr+2; row++){
    for(int *col = *row; col < *row + 3; col++){
      printf("%d ", *col);
    }
    printf("\n");
  }
}
