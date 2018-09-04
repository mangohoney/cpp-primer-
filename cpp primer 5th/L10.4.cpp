#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<double> v = {1.1, 0.5, 3.3};
    cout << accumulate(v.cbegin(), v.cend(), 0) << endl;
    return 0;
}
