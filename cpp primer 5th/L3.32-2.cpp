#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> s1;
    for (int i = 0; i != 10; ++i)
        s1.push_back(i);
    vector<int> s2;
    for (auto j = s1.begin(); j != s1.end(); ++j)
    {
        s2.push_back(*j);
        cout << *j << ' ';
    }
    cout << endl;
    for (auto k = s2.begin(); k != s2.end(); ++k)
        cout << *k << ' ';
    cout << endl;
    return 0;
}
