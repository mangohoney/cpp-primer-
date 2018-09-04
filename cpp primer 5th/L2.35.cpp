#include <iostream>

using namespace std;

int main(){
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;
    cout << i << '\n' << j << '\n' << k << '\n' << p << '\n' << j2 << '\n' << k2 << endl;
}
