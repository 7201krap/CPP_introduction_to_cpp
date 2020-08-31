#include <stdio.h>

int main(){
  FILE *in;

  in = fopen("70_file.cpp", "r");
  char ch;

  while(!feof(in)){ // feof: 파일을 끝까지 읽으면 true 를 반환, 끝까지 읽지 않았다면 false --> <파일의 끝에 도달 했을때 true 를 반환>
    fscanf(in, "%c", &ch);
    printf("%c", ch);
  }

  fclose(in);
}
