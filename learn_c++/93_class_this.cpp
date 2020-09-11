// 56강
// 생성자: 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자: 객체가 소멸될 때 자동으로 호출되는 함수
#include <iostream>

using namespace std;

class My_class{
public:
  My_class(){ // 생성자
    // 생성자 자동 생성
    cout << "생성자 호출" << endl;
  }
  ~My_class() { // 소멸자
    cout << "소멸자 호출" << endl;
  }
};

// My_class global_obj; // 객체 생성 - global

void test_local_obj(){
  cout << "test_local_obj 시작" << endl;
  My_class local_obj; // local
  cout << "test_local_obj 끝" << endl;
}

int main(){
  cout << "메인 함수 시작 " << endl;
  test_local_obj();
  cout << "메인 함수 끝 " << endl;
}

// gloal_obj 를 선언하고 void test_local_obj 가 없다면
// 생성자 호출
// 메인함수 시작
// 메인함수 끝
// 소멸자 호출
