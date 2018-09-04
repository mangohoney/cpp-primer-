#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
using Families = map<string, vector<string>>;


Families make_families(istream &is, Families &families)
{
    for (string ln; is >> ln && ln != "@q";)
        for (string cn; is >> cn && cn != "@q";)
            families[ln].push_back(cn);
    return families;
}

void print(Families const& families)
{
    for (auto const& family : families)
    {
        cout << family.first << ":\n";
        for (auto const& child : family.second)
            cout << child << " ";
        cout << "\n";
    }
}

int main()
{
    Families families;
    ifstream ifs("L11.7.txt");
    print(make_families(ifs, families));
    return 0;
}
