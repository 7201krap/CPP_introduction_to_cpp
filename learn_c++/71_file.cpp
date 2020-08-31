#include <stdio.h>

int main(){
  FILE *in;

  in = fopen("70_file.cpp", "r");
  char ch;

  while(fscanf(in, "%c", &ch) != EOF){ // fscanf(in, "%c", &ch): 파일끝에 도달하게 되면 EOF 를 반환 
    printf("%c", ch);
  }

  fclose(in);
}
