#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template<typename Sequence>
auto println(Sequence const& seq) -> ostream&
{
    for (auto const& elem : seq)
        cout << elem << " ";
    return cout << endl;
}

auto eliminate_duplicates(vector<string> &vs) -> vector<string>&
{
    sort(vs.begin(), vs.end());
    println(vs);

    auto new_end = unique(vs.begin(), vs.end());
    println(vs);

    vs.erase(new_end, vs.end());
    return vs;
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    vector<string> vs{ "arc", "vxcc", "acx", "scs", "vscf", "arc", "acf" };
    println(vs);
    println(eliminate_duplicates(vs));
    stable_sort(vs.begin(), vs.end(), isShorter);
    println(vs);

    return 0;
}
