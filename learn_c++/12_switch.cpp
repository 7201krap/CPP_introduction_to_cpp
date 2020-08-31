#include <stdio.h>

int main(){
  int choice;

  printf("1. New game\n2. Load\n3. Setting\n4. Credit\n");

  scanf("%d", &choice);

  switch(choice){
    case 1:
      printf("NEW GAME\n");
      break;

    case 2:
      printf("LOAD\n");
      break;

    case 3:
      printf("SETTING\n");
      break;

    case 4:
      printf("CREDIT\n");
      break;

    default: //else
      printf("WRONG NUMBER\n");
      break;
  }


}
