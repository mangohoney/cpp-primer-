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
    for (auto i = vec1.begin();i != vec1.end()-1;++i)
        cout << *i+*(i+1) << endl;
    return 0;
}
