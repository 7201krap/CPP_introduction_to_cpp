#include <iostream>

using namespace std;

int main(){

  int a(5);

  cout << &a << endl;

  int &p = a;

  cout << &a << endl;
  cout << &p << endl;

  p = 10;

  cout << p << endl;
  cout << a << endl;

}
