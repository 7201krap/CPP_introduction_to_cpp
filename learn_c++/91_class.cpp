// 클래스 == 구조체? struct and class?
// 클래스 == 자료 저장 + 자료 처리 == 변수 + 함수
// 특정한 용도를 수행하기 위한 변수와 함수를 모아둔 틀
// 객체(오브젝트) : 틀을 이용하여 찍어낸 개체
#include <iostream>

using namespace std;

// private, public, protected

class TV {
// private is default in class
// These three values are private
  bool power_on;
  int channel;
  int volume;

// These functions are public. Need to specify 'public'
public:
  void on(){
    power_on = true;
    cout << "Turned on TV" << endl;
  }

  void off(){
    power_on = false;
    cout << "Turned off TV" << endl;
  }

  void set_volume(int vol){
    if( vol >= 0 && vol <= 100 ){
      volume = vol;
      cout << "Volume: " << volume << endl;
    }

  }

  void set_channel(int cnl){
    if( cnl >= 1 && cnl <= 999 ){
      channel = cnl;
      cout << "Channel: " << channel << endl;
    }
  }
};

int main(){

  TV lg;
  lg.on();

  lg.set_channel(10);
  lg.set_volume(50);
  lg.set_channel(-1);

}
