#include <iostream>

using namespace std;

void exchange(int *i, int *j)
{
    int tem = *i;
    *i = *j;
    *j = tem;
}

int main()
{
    int n1, n2;
    while (cin >> n1 >> n2)
    {
        exchange(&n1, &n2);
        cout << n1 << ' ' << n2 << '\n';
    }
    return 0;
}
