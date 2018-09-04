#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool if_s(const string &s)
{
    return s.size() >= 5;
}

int main()
{
    vector<string> vs{ "arfsafc", "vxcc", "acsasfx", "scs", "vscf", "aracasc", "acf" };
    for (auto i = vs.begin(); i != partition(vs.begin(), vs.end(), if_s); ++i)
        cout << *i << '\n';
    cout << endl;

    return 0;
}
