#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>

using std::placeholders::_1;
using namespace std;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() <= sz;
}

int main()
{
    vector<string> vs{ "arc", "vxcc", "acx", "scs", "vscf", "arc", "acf" };
    cout << count_if(vs.begin(), vs.end(), bind(check_size, _1, 3));
    cout << endl;
    return 0;
}
