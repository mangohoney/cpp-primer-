#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int i;
    while (cin >> i)
        v.push_back(i);
    cout << count(v.begin(), v.end(), 10);
    cout << endl;
    return 0;
}
