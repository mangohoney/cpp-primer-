#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vi{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    //10.34
    for (auto ri = vi.crbegin(); ri != vi.crend(); ++ri)
        cout << *ri << " ";
    cout << endl;
    //10.35
    for (auto i = prev(vi.cend()); true; --i)
    {
        cout << *i << " ";
        if (i == vi.cbegin())
            break;
    }
    cout << endl;
    //10.36
    list<int> li = { 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6 };
    auto li_i = find(li.crbegin(), li.crend(), 0);
    cout << *li_i << endl;
    //10.37
    list<int> li2(5);
    copy(vi.cbegin() + 2, vi.cbegin() + 8, li2.rbegin());
    for (auto i : li2)
        cout << i << " ";
    cout << endl;

    return 0;
}
