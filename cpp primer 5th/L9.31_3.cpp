#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;

void redo(list<int> &vi)
{
    for (auto cur = vi.begin(); cur != vi.end();)

        if (*cur & 0x1)
            cur = vi.insert(cur, *cur), advance(cur, 2);
        else
            cur = vi.erase(cur);

}

int main()
{
    list<int> ia { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    redo(ia);
    for (auto i : ia)
        cout << i << " ";
    cout << endl;
    return 0;
}
