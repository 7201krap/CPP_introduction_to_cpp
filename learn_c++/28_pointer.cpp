#include <stdio.h>

int main(){
  char strings[3][10] = {"Hello","World","Doodle"};
  char *p_str[3];

  for(int i=0; i<3; i++){
    p_str[i] = strings[i];
  }

  for(int i=0; i< 3; i++){
    printf("%s", strings[i]);
    printf("%s", &strings[i][0]);
    printf("%s", p_str[i]);
    printf("\n");
  }

}
