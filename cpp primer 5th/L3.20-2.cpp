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
    for (decltype(vec1.size()) i = 0;i < vec1.size()/2;++i)
        cout << vec1[i]+vec1[vec1.size()-i-1] << endl;
    return 0;
}
