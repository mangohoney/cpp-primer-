#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> vs{ "arc", "vxcc", "acx", "scs", "vscf", "arc", "acf" };
    cout << count_if(vs.begin(), vs.end(), [](const string &s) { return s.size() > 3;});
    cout << endl;
    return 0;
}
