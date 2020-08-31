#include <stdio.h>

int main(){
  FILE *in, *out; // in 은 파일을 가리키는 포인터이다. stream

  int n;

  in = fopen("input.txt", "r"); // 파일을 가리키는 포인터를 반환
  out = fopen("output.txt", "w"); // 파일을 가리키는 포인터를 반환

  if (in != NULL) {
    fscanf(in, "%d", &n);
    fprintf(out, "%d\n", n);
    fclose(in);
    fclose(out);
  }

}
