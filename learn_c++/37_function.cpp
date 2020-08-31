#include <stdio.h>

int item_cnt = 0;
int money = 100;

int buy_item(int cost, int cnt){
  if (money < cost) {
    printf("잔액이 부족 합니다.\n");
    return -1;
  }

  item_cnt += cnt;
  money -= cost;
  printf("You have got an item.\n");
  printf("Number of items: %d\n", item_cnt);
  printf("Balance: %d\n", money);
  return 0;
}

int main(){

  int result;

  result = buy_item(3000, 5);
  if (result == -1){
    printf("잔액을 충전해 주세요.\n");
  }

  buy_item(20, 7);
}
