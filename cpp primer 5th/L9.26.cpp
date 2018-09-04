#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> v(ia, end(ia));
    list<int> l(ia, end(ia));
    for(auto it = v.begin(); it != v.end(); it = (*it % 2 ? ++it : v.erase(it)));
    for(auto it = l.begin(); it != l.end(); it = (*it % 2 ? l.erase(it) : ++it));
    for(auto j : v) cout << j << " ";
    cout << endl;
    for(auto j : l) cout << j << " ";
    cout << endl;
    return 0;
}
