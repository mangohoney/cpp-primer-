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
    for (auto c : vec1)
        cout << c  << ' ' << endl;
    return 0;
}
