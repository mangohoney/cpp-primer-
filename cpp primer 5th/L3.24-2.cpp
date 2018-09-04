#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int v1;
    vector<int> vec1;
    while (cin >> v1)
    {
        vec1.push_back(v1);
    }
    auto i = vec1.begin();
    auto j = vec1.end() -1;
    auto mid = i + (j - i)/2;
    while (i != mid + 1 && j != mid - 1)
    {
        cout << *i + *j << endl;
        ++i;
        --j;
    }
    return 0;
}
