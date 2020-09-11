// static : 정적 <-> 동적
#include <iostream>

using namespace std;

class Color{
public:
  Color() : r(0), g(0), b(0), id(id_counter++){ }
  Color(float r, float g, float b) : r(r), g(g), b(b), id(id_counter++){ }

  float GetR() { return r; }
  float GetG() { return g; }
  float GetB() { return b; }
  int GetId() { return id; }

  static Color MixColors(Color a, Color b){
    return Color((a.r + b.r) / 2 , (a.g + b.g / 2) , (a.b + b.b / 2));
  }

  //이거는 새로 instance 마다 새로 생겨 나지 않고 중첩 된다.
  static int id_counter;

private:
  float r;
  float g;
  float b;
  int id;
};

int Color::id_counter = 1;

int main(){
  Color blue = Color(0,0,1);
  Color red  = Color(1,0,0);

  Color purple = Color::MixColors(blue, red);

  cout << purple.GetR()  << ", " << purple.GetG() << ", " <<purple.GetB() << endl;
  cout << blue.GetId()   << endl;
  cout << red.GetId()    << endl;
  cout << purple.GetId() << endl;
}
