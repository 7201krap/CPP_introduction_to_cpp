#include <stdio.h>

int main(){
  // Q1
  // Get two numbers and add them
  printf("=====QUESTION 1=====\n");

  int a, b;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  printf("%d + %d = %d\n", a, b, a + b);

  // Q2
  // Find height and weight. Calculate BMI
  printf("=====QUESTION 2=====\n");

  double height, weight;

  printf("Enther you height(m) and weight(kg)\n");
  printf("Height : ");
  scanf("%lf", &height);
  printf("Weight : ");
  scanf("%lf", &weight);

  printf("%lf\n", weight/(height*height));

  // Q3
  // Get an alphabet and print the next alphabet
  printf("=====QUESTION 3=====\n");

  char p;

  printf("Input alphabet: ");
  scanf("%c", &p);

  char next_p = p + 1;
  printf("%c", next_p);

  // next_p = (int)p + 1;
  //
  // printf("The next alphabet is: %c", next_p);
}
