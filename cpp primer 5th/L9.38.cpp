#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> v;
    cout << " v: size " << v.size() << " capacity: " << v.capacity() << endl;
    for (vector<int>::size_type ix = 0; ix != 24; ++ix)
        v.push_back(ix);
    cout << " v: size " << v.size() << " capacity: " << v.capacity() << endl;
    v.reserve(50);
    cout << " v: size " << v.size() << " capacity: " << v.capacity() << endl;
    while (v.size() != v.capacity())
        v.push_back(0);
    cout << " v: size " << v.size() << " capacity: " << v.capacity() << endl;
    v.push_back(42);
    cout << " v: size " << v.size() << " capacity: " << v.capacity() << endl;
    v.shrink_to_fit();
    cout << " v: size " << v.size() << " capacity: " << v.capacity() << endl;
    return 0;
}
