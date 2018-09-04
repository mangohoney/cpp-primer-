#include <iostream>

using namespace std;

int compare (const int &i , const int *j)
{
    return (i > *j) ? i : *j;
}

int main()
{
    int n1, n2;
    while (cin >> n1 >> n2)
    cout << compare (n1, &n2) << '\n';
    cout << endl;
    return 0;
}
