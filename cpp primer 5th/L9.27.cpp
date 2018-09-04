#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> ia = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    auto pre = ia.before_begin();
    auto cur = ia.begin();
    while (cur != ia.end())
    {
        if (*cur & 0x1)
            cur = ia.erase_after(pre);
        else
        {
            pre = cur;
            ++cur;
        }
    }
    for (auto i : ia)
        cout << i << " ";
    cout << endl;
    return 0;
}
