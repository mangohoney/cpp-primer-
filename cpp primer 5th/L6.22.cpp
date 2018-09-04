#include <iostream>

using namespace std;

int exchange (const int *i , const int *j)
{
    int *k;
    k = i;
    i = j;
    j = k;
}

int main()
{
    int n1, n2;
    while (cin >> n1 >> n2)
    cout << compare (n1, &n2) << '\n';
    cout << endl;
    return 0;
}
