#include <stdio.h>
#include <string.h>

int main(){

  char str1[] = "hello";
  char str2[] = "";
  char str3[] = "Jaxon";
  char str4[] = "Jason";

  strcpy(str2, str1);

  printf("%d\n", strlen(str1));
  printf("%s\n", str2);

  strcat(str2," world!");
  printf("After contatenation: %s\n", str2);

  // 사전순으로 str3 가 str4 보다 앞쪽에 있다면, (-)값. 같다면 0, 뒤쪽에 있다면 (+) 값.
  int cmp = strcmp(str3, str4);
  printf("%d\n", cmp);

  return 0;
}
