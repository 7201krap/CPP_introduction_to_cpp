#include <iostream>

using namespace std;

class A{  // 추상 클래스
public:
  virtual void f() = 0; // 순수 가상 함수
};

class B : public A {
public:
  void f() {
    cout << "B::f()" << endl;
  }
};

int main(){
  A *a = new B; // this is possible. 부모 포인터 변수는 자식 객체를 가리킬수 있다.
  // A *a = new A; // 순수 가상 함수를 하나라도 가지고 있는 클래스는 그 타입을 가진 객체를 만들수 없다.

  a->f();

  delete a;
}
