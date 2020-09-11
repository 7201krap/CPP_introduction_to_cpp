// 맴버 메서드의 선언, 정의 분리하기

#include <iostream>

using namespace std;

class Vector2{
public:
  Vector2();
  Vector2(float x, float y);

  // 정적인 메서드는 객체에 소속 되어 있지 않고 클래스에 소속 되어 있다.

  // 밑에는 맴버 메서드들

  // 어떠한 특정한 객체에 포함 되어 있을 수 있다.
  Vector2 operator+(const Vector2 rhs) const;
  Vector2 operator-(const Vector2 rhs) const;
  Vector2 operator*(const float   rhs) const;
  Vector2 operator/(const float   rhs) const;
  float   operator*(const Vector2 rhs) const;

  // get 함수는 const 로 해주는게 좋다
  float get_x() const;
  float get_y() const;

private:
  // 맴버 변수
  float x;
  float y;

};

Vector2 operator*(const float a , const Vector2 b) {
  return Vector2(a*b.get_x(), a*b.get_y());
}

int main(){

  Vector2 v1 = Vector2(2, 3);
  Vector2 v2 = Vector2(-1,4);
  Vector2 v3 = operator*(100, v1);
  Vector2 v10 = 100 * v1;
  Vector2 v4 = v1.operator+(v2);

  Vector2 v5 = v1 + v2;
  Vector2 v6 = v1 - v2;
  Vector2 v7 = v1 * 1.6;
  Vector2 v8 = v1 / 2;
  float   v9 = v1 * v2;

  cout << v1.get_x() << ", " << v1.get_y() << endl;
  cout << v2.get_x() << ", " << v2.get_y() << endl;
  cout << v3.get_x() << ", " << v3.get_y() << endl;
  cout << v4.get_x() << ", " << v4.get_y() << endl;
  cout << "사칙 연산"  << endl;
  cout << v5.get_x() << ", " << v5.get_y() << endl;
  cout << v6.get_x() << ", " << v6.get_y() << endl;
  cout << v7.get_x() << ", " << v7.get_y() << endl;
  cout << v8.get_x() << ", " << v8.get_y() << endl;
  cout << v9 << endl;
  cout << v10.get_x() << ", " << v10.get_y() << endl;

}

Vector2::Vector2() : x(0), y(0) { }
Vector2::Vector2(float x, float y) : x(x), y(y) { }

// 반환타입 무슨클래스인지::메서드이름
float Vector2::get_x() const { return x; }
float Vector2::get_y() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const
{
  return Vector2(x + rhs.x, y + rhs.y);
}
Vector2 Vector2::operator-(const Vector2 rhs) const
{
  return Vector2(x - rhs.x, y - rhs.y);
}
Vector2 Vector2::operator*(const float rhs) const
{
  return Vector2(x * rhs, y * rhs);
}
Vector2 Vector2::operator/(const float rhs) const
{
  return Vector2(x / rhs, y / rhs);
}
float Vector2::operator*(const Vector2 rhs) const
{
  return x * rhs.x + y * rhs.y;
}
