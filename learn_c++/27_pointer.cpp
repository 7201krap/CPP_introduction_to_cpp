#include <stdio.h>

int main(){
  char str[] = "Hello";

  printf("%s\n", &str[0]); //첫번째 시작 주소만 적어주면, 뒤에 있는것을 다 출력해준다. 
  printf("%s\n", str);
}
