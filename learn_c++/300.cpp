#include <iostream>

using namespace std;

// 부모 클래스
class Weapon{
public:
  Weapon(int power) : power(power){
    cout << "Weapon(int power)" << endl;
  }
  virtual void Use(){ // 가상함수 : 이 함수가 호출이 될수도 있고, 안 될수도 있다.
    cout << "Weapon::Use()" << endl;
  }
protected:
  int power;
};

// 자식 클래스
class Sword : public Weapon{
public:
  Sword(int power) : Weapon(power){
    cout << "Sword(int)" << endl;
  }

  void Use(){
    cout << "Sword::Use()" << endl;
    Swing();
  }

private:
  void Swing(){
    cout << "Swing sword" << endl;
  }
};

// 자식 클래스  
class Magic : public Weapon{
public:
  Magic(int power, int manaCost) : Weapon(power), manaCost(manaCost){
    cout << "Magic(int, int)" << endl;
  }

  void Use(){
    cout << "Magic::Use()" << endl;
    Cast();
  }
private:
  int manaCost;
  void Cast(){
    cout << "Cast magic" << endl;
  }
};

int main(){
  Sword mySword(10);
  Magic myMagic(15,7);

  mySword.Use();
  myMagic.Use();

  Weapon *currentWeapon;  // 포인터 변수에는 객체의 주소가 들어가야 한다.
  currentWeapon = &mySword;
  currentWeapon->Use();
  currentWeapon = &myMagic;
  currentWeapon->Use();
}
