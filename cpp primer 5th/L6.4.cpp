#include <iostream>

using namespace std;

int fact(int x)
{
    int k = 1;
    while (x > 1)
        k *= x--;
    return k;
}

int main()
{
    int i = 0, j = 0;
    while (cin >> i)
        cout << fact(i) << '\n';
    cout << endl;
    return 0;
}
