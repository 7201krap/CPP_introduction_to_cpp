#include <stdio.h>

struct Product_info {
  int num;
  char name[100];
  int cost;
};

int main(){
  Product_info my_product = {8432153, "Tangerine", 10000};

  printf("%d, %s, %d\n", my_product.num, my_product.name, my_product.cost);

  printf("%d %d, %d, %d\n", &my_product, &my_product.num, my_product.name, &my_product.cost);
}
