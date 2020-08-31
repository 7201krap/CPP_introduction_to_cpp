#include <iostream>

using namespace std;

int inventory[64] = {0};
int score = 0;

void get_item(int item_id, int cnt = 1, int sc = 0){
  inventory[item_id] += cnt;
  score += sc;
}

int main(){
  get_item(6,5);
  get_item(3,2);
  get_item(3);
  get_item(11,34,7000);

  for (int i=0; i < 16; i++){
    cout << inventory[i] << ' ';
  }
  cout << endl;

  cout << score << endl;
}
