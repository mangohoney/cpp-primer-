#include <iostream>

using namespace std;

int main(){
  int num1 = 10, num2 = 20;
  int *p = &num1;
  *p = 100;
  p = &num2;
  cout << num1 << endl;
  cout << &num1 << endl;
  cout << num2 << endl;
  cout << &num2 << endl;
  cout << *&num2 << endl;
  cout << *p << endl;
  cout << p << endl;
  cout << &p << endl;
}
