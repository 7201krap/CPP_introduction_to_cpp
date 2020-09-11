#include <iostream>

using namespace std;

// reference variable 은 반드시 초기값이 필요하다.

int main(){
  int value = 5;

  int *ptr = &value;

  // ref 와 value 는 같은 메모리 공간을 차지한다.
  int &ref = value;

  cout << ref << endl;

  ref = 10;

  cout << ref << endl;
  cout << value << endl;

  ref = 20;

  cout << ref << endl;
  cout << value << endl;

  cout << &ref << endl;
  cout << &value << endl;
  cout << ptr << endl;

}
