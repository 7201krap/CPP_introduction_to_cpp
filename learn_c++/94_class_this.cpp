#include <iostream>

using namespace std;

// 생성자 : 맴버 변수 초기화
// 소멸자 : 메모리 해제

class Complex{
public:

  Complex(){
    real = 0;
    imag = 0;
  }
  Complex(double real_, double imag_){
    real = real_;
    imag = imag_;
  }

  double get_real(){
    return real;
  }
  void set_real(double real_){
    real = real_;
  }

  double get_imag(){
    return imag;
  }
  void set_imag(double imag_){
    imag = imag_;
  }


private:
  double real;
  double imag;

};

int main(){
  Complex c1;
  Complex c2 = Complex(2, 10);
  Complex c3(2,10);
  Complex c4 = {2,3};
  Complex c5 = Complex{2,3};
  Complex c6{2,3};

  cout << c1.get_real() << ", " << c1.get_imag() << endl;
  cout << c2.get_real() << ", " << c2.get_imag() << endl;
  cout << c3.get_real() << ", " << c3.get_imag() << endl;
  cout << c4.get_real() << ", " << c4.get_imag() << endl;
  cout << c5.get_real() << ", " << c5.get_imag() << endl;
  cout << c6.get_real() << ", " << c6.get_imag() << endl;
}
