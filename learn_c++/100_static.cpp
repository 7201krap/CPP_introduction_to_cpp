// 맴버 메서드의 선언, 정의 분리하기

#include <iostream>

using namespace std;

class Vector2{
public:
  Vector2();
  Vector2(float x, float y);

  // 정적인 메서드는 객체에 소속 되어 있지 않고 클래스에 소속 되어 있다.
  static Vector2 sum(Vector2 a , Vector2 b){
    return Vector2(a.x + b.x, a.y + b.y);
  }

  // 어떠한 특정한 객체에 포함 되어 있을 수 있다.
  Vector2 add(Vector2 rhs){
    return Vector2(x + rhs.x, y + rhs.y);
  }

  // get 함수는 const 로 해주는게 좋다
  float get_x() const;
  float get_y() const;


private:
  float x;
  float y;

};

int main(){

  Vector2 v1 = Vector2(2, 3);
  Vector2 v2 = Vector2(-1,4);
  Vector2 v3 = Vector2::sum(v1, v2);
  Vector2 v4 = v1.add(v2);

  cout << v1.get_x() << ", " << v1.get_y() << endl;
  cout << v2.get_x() << ", " << v2.get_y() << endl;
  cout << v3.get_x() << ", " << v3.get_y() << endl;
  cout << v4.get_x() << ", " << v4.get_y() << endl;

}

Vector2::Vector2() : x(0), y(0) { }
Vector2::Vector2(float x, float y) : x(x), y(y) { }
float Vector2::get_x() const { return x; }
float Vector2::get_y() const { return y; }
