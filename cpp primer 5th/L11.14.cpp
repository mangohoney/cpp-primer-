#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
using Families = map<string, vector<pair<string, string>>>;


Families make_families(istream &is, Families &families)
{
    for (string ln; is >> ln && ln != "@q";)
        for (string cn, br; is >> cn >> br && cn != "@q";)
            families[ln].push_back(make_pair(cn, br));
    return families;
}

void print(Families const& families)
{
    for (auto const& family : families)
    {
        cout << family.first << ":\n";
        for (auto const& child : family.second)
            cout << child.first << " " << child.second << "   ";
        cout << "\n";
    }
}

int main()
{
    Families families;
    ifstream ifs("L11.14.txt");
    print(make_families(ifs, families));
    return 0;
}
