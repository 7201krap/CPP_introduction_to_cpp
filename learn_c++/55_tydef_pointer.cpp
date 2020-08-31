// 구조체 포인터

#include <stdio.h>

struct Product_info {
  int num;
  char name[100];
  int cost;
};

void swap(Product_info *p1, Product_info *p2){
  Product_info tmp;

  tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;

}

int main(){
  Product_info my_product1 = {8432153, "Tangerine", 20000};
  Product_info my_product2 = {2684565, "Apple",     10000};

  swap(&my_product1, &my_product2);

  printf("%d, %s, %d\n", my_product1.num, my_product1.name, my_product1.cost);
  printf("%d, %s, %d\n", my_product2.num, my_product2.name, my_product2.cost);


}
