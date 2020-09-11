#include <iostream>

using namespace std;

class Myclass{
public:
  void print_this(){
    //자신이 소속 되어 있는 객체의 주소를 this 에 반환
    cout << "my address is " << this << endl;
  }
};

int main(){
  Myclass a, b;

  cout << "address of a " << &a << endl;
  cout << "address of b " << &b << endl;

  a.print_this();
  b.print_this();
}
