#include <stdio.h>
#include <string.h>

void print_noSpace(char str[]){
  int len = strlen(str);

// This is also possible
// for(int i=0; str[i] != '\0'; i++){
  for(int i=0; i < len; i++){
    if(str[i] != ' '){
      printf("%c", str[i]);
    }
  }
}

int main(){
  print_noSpace("Hello, World!\n");
  print_noSpace("My name is Jaxon!\n");
}
