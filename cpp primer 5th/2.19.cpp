#include <iostream>
using namespace std;
int main(){
  int i = 5, &r = i;
  auto a = r;
  const int ci = i, &cr = ci;
  auto b = ci;
  auto c = cr;
  auto d = &i;
  auto e = &ci;
  const auto f = ci;
  auto &g = ci;
  const auto &j = 42;
  cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << '\n' << g << '\n' << endl;
  a = 42;
  b = 42;
  cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << '\n' << g << '\n' << endl;
}
