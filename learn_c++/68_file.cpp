#include <stdio.h>

int main(){
  FILE *in, *out; // in 은 파일을 가리키는 포인터이다. stream

  int n;

  in = fopen("input.txt", "r"); // 파일을 가리키는 포인터를 반환 // in 은 주소를 가지고 있다. 
  out = fopen("output.txt", "w");
  // out = fopen("output.txt", "a") // If you want to append values

  fscanf(in, "%d", &n);
  fprintf(out, "%d\n", n);

  fclose(in);
  fclose(out);
}
