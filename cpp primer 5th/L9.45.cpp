#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string &add_pr_and_suf(string &n, string const& pre, string const& suf)
{
    n.insert(n.begin(), pre.begin(), pre.end());
    return n.append(suf);
}

int main()
{
    string n{"Jin"};
    cout << add_pr_and_suf(n, "Ma.", "Ey.") << endl;
    return 0;
}
