#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    list<int> l;
    deque<int> d;
    forward_list<int> f;
    copy(v.begin(), v.end(), inserter(l, l.begin()));
    copy(v.begin(), v.end(), back_inserter(d));
    copy(v.begin(), v.end(), front_inserter(f));
    for (auto &i : l)
        cout << i << " ";
    cout << endl;
    for (auto &i : d)
        cout << i << " ";
    cout << endl;
    for (auto &i : f)
        cout << i << " ";
    cout << endl;

    return 0;
}
