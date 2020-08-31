// 구조체 포인터

#include <stdio.h>

struct Product_info {
  int num;
  char name[100];
  int cost;
};

void discount(Product_info *p, int percent){
  p->cost -= p->cost * percent/100;
}

int main(){
  Product_info my_product = {8432153, "Tangerine", 10000};

  // ptr_product 는 &my_product, my_product 의 주소를 담고있다.

  discount(&my_product, 10);

  printf("%d, %s, %d\n", my_product.num, my_product.name, my_product.cost);

  printf("%d, %s, %d\n", (&my_product)->num, (&my_product)->name, (&my_product)->cost);

}
