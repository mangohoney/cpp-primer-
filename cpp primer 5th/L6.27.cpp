#include <iostream>

using namespace std;

int sum (initializer_list<int> i)
{
    int sum = 0;
    for (auto beg = i.begin(); beg != i.end(); ++beg)
        sum += *beg;
    return sum;
}

int main ()
{
    auto i1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << sum (i1) << endl;
    return 0;
}
