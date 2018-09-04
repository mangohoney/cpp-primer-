#include <iostream>

using namespace std;

int fact(int x)
{
    int k = 1;
    while (x > 1)
        k *= x--;
    return k;
}

int abs(int y)
{
    if (y < 0)
        return (-y);
    else
        return y;
}

int main()
{
    int i = 0;
    while (cin >> i)
        cout << abs(i) << '\n';
    cout << endl;
    return 0;
}
