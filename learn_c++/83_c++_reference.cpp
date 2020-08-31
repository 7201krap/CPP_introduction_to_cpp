#include <iostream>

void swap(int &a, int &b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

void swap(double &a, double &b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}

void swap(int* (&x), int* (&y)){
  int *tmp;
  tmp = x;
  x = y;
  y = tmp;
}

int main(){
  int a = 20, b = 30;
  double da = 2.22, db = 3.33;

  int *pa = &a, *pb = &b;

  swap(a,b);
  swap(da, db);
  swap(pa, pb);

  std::cout << a << std::endl;
  std::cout << b << std::endl;

  std::cout << da << std::endl;
  std::cout << db << std::endl;

  std::cout << *pa << std::endl;
  std::cout << *pb << std::endl;
}
