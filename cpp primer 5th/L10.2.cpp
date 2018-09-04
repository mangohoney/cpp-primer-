#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    list<string> v;
    string str;
    while (cin >> str)
        v.push_back(str);
    cout << count(v.cbegin(), v.cend(), "man") << endl;
    return 0;
}
