#include <iostream>
#include <string>
#include <memory>

using namespace std;

void allocato_and_delete(int n)
{
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    auto q = p;
    string str;
    while(q != p + n && cin >> str)
        alloc.construct(q++, str);
    while(q != p)
    {
        cout << *--q << " ";
        alloc.destroy(q);
    }
    cout << endl;
    alloc.deallocate(p, n);
}

int main()
{
    int n;
    if (cin >> n)
        allocato_and_delete(n);
    return 0;
}
