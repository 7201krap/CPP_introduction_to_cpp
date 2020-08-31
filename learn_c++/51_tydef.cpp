// type define
// 형을 정의한다
#include <stdio.h>

int main(){

  typedef char *String;

  String name = "Doodle"; // char *name = "Doodle";

  printf("Name: %s\n", name);
}
