#include <stdio.h>

int main(){
  char str[] = "450";
  int n;

  sscanf(str, "%d", &n);
  printf("%d\n", n);

  int na = 500;
  char stra[100];

  sprintf(stra, "%d", na);
  printf("%s\n", stra);
}
