  #include <iostream>

using namespace std;

int main(){

  int arr[10] = {3,1,4,2,4,9,2,6,5,3};

  for (int &n : arr){
    // 예를 들어서 6번째 n 이라면, int &n = arr[6]
    cout << n << ' ';
    n++;
  }
  cout << endl;

  for (int n : arr){
    cout << n << ' ';
  }
  cout << endl;

}
