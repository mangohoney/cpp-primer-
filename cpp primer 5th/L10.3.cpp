#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 6, 9, 9, 11};
    cout << accumulate(v.cbegin(), v.cend(), 10) << endl;
    return 0;
}
