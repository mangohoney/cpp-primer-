#include <iostream>
#include <list>
#include <deque>

using namespace std;

void copy_o_e(list<int> li, deque<int> de_o, deque<int> de_e)
{
    for (auto i : li)
        (i % 2 ? de_o : de_e).push_back(i);
    for (auto i : de_o)
        cout << i << " ";
    cout << endl;
    for (auto i : de_e)
        cout << i << " ";
    cout << endl;
}

int main()
{
    list<int> li = {0, 1, 2, 3, 4, 5};
    deque<int> odd;
    deque<int> even;
    copy_o_e(li, odd, even);
    return 0;
}
