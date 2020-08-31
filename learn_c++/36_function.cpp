#include <stdio.h>

int item_cnt = 0;
int money = 100;

void buy_item(int cost, int cnt){
  item_cnt += cnt;
  money -= cost;
  printf("You have got an item.\n");
  printf("Number of items: %d\n", item_cnt);
  printf("Balance: %d\n", money);
}

int main(){

  buy_item(30, 5);

  buy_item(20, 7);
}
