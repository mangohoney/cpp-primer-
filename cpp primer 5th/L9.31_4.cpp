#include <iostream>
#include <forward_list>

using namespace std;

void redo(forward_list<int> &vi)
{
    for (auto cur = vi.begin(), pre = vi.before_begin(); cur != vi.end();)

        if (*cur & 0x1)
            cur = vi.insert_after(pre, *cur),
            advance(cur, 2),
            advance(pre, 2);
        else
            cur = vi.erase_after(pre);

}

int main()
{
    forward_list<int> ia { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    redo(ia);
    for (auto i : ia)
        cout << i << " ";
    cout << endl;
    return 0;
}
