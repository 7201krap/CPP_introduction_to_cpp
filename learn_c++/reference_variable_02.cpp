#include <iostream>

using namespace std;

// 이렇게 하면 이제 arr 랑 list 는 같은 변수이다.
void print_elem(int (&list)[5]){
  for (int i=0; i < 5; i++){
    cout << list[i] << " ";
  }
  cout << endl;
}

int main(){
  const int length = 5;

  int arr[length] = {1,2,3,4,5};

  print_elem(arr);

}
