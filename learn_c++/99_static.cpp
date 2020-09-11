// 매개변수의 상수화 (모든 함수)
// 메서드의 상수화 (맴버 메서드)

#include <iostream>

using namespace std;

class Account{
public:
  Account() : money(0){

  }
  Account(int money) : money(money){

  }

  void Deposit(const int d){
    money = money + d;
    cout << d << " 예금 완료 " << endl;
  }

  void Withdraw(const int w){
    if (money >= w){
      money = money - w;
      cout << w << " 인출 완료 " << endl;
    }
    cout << w << " 그만큼의 돈이 없습니다. " << endl;
  }

  int balance() const { // const: 이렇게 하면 변수(money)를 바꿀수 없다
    return money;
  }

private:
  int money;

};

int main(){
  Account doodle = Account(100);

  doodle.Deposit(100);
  doodle.Withdraw(20);

  cout << doodle.balance() << endl;

}
