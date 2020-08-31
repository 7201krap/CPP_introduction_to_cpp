#include <iostream>

using namespace std;

void swap(int &a, int &b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

int main(){
  int p = 5, q = 7;

  swap(p,q);

  cout << p << endl;
  cout << q << endl;


}
