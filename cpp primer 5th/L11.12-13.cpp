#include <iostream>
#include <string>
#include <utility>
#include <vector>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::pair;
using std::endl;

int main()
{
    vector<pair<string, int>> vep;
    string str;
    int i;
    while (cin >> str >> i)
    // vep.push_back({ str, i });
    // vep.push_back(pair<string, int>(str, i));
    vep.push_back(make_pair(str, i));
    for (auto &p : vep)
        cout << p.first << " " << p.second << '\n';
    cout << endl;
    return 0;
}
