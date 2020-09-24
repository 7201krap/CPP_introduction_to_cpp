#include <iostream>

using namespace std;

int main(){
  int a = 10, b = 20, c = 30;
  int *p = &a;
  int &r = b;
  int **pp = &p;

  // 자신(&rp)가 가르키고 있는 타입이 int* 이다. 왜냐하면 p 는 포인터 변수 이니까.
  // rp == p 라고 생각해야 한다.
  int* (&rp) = p;

  r = c / *p;   // r == 3
  rp = &c;      // p == rp 인데 이제 rp or p 는 c 를 가르킨다.
  **pp = 40;    // c == 40
  *p = 50;      // c == 50
  *pp = &a;     // p == rp 인데 이제 rp or p 는 a 를 가르킨다.
  *rp = 60;     // a == 60

  cout << a << endl;  // 60
  cout << b << endl;  // 3
  cout << c << endl;  // 50
  cout << *p << endl; // 60
  cout << r << endl;  // 3
  cout << **pp << endl; // 60
  cout << *rp << endl;  // 60
}
