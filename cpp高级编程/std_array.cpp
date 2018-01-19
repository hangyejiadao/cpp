#include <array>
#include <iostream>

using namespace std;
int addNumbers(int number1, int number2) {
  std::cout << "Entering function " << __func__ << std::endl;
  int reuslt = number1 + number2;
  return reuslt;
}

int main() {
  // array<int,3>arr={9,8,7};
  // cout<<"Array szie="<<arr.size()<<endl;
  // for(auto i:arr){
  //     cout<<i<<endl;
  // }
  cout << "Result=" << addNumbers(1, 2) << endl;
  ;
  return 0;
}