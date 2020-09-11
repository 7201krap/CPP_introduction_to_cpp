#include <iostream>
#include <string>

using namespace std;

int main(){
  string name;
  int score;

  cout << "What is your name? ";
  cin >> name;

  cout << "What is his/her score? ";
  cin >> score;

  cout << name << " 님의 점수는 " << score << "점 입니다." << endl;

}
