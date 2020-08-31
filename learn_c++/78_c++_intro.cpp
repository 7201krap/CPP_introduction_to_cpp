#include <iostream>
#include <string>

using namespace std;

int main(){
  string name;

  cout << "Name: ";
  cin >> name;

  string message = "Hello, " + name + " Sir";

  cout << message << endl;

}
