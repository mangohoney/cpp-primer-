#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> vs{ "acf", "vxcc", "acsasfx", "scs", "vscf", "aracasc", "acf" };
    list<string> ls;
    unique_copy(vs.begin(), vs.end(), back_inserter(ls));
    for (auto &i : ls)
        cout << i << " ";
    cout << endl;

    return 0;
}
