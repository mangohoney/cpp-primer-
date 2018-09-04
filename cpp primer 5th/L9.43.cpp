#include <iterator>
#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

string::iterator replace_with(string &s, string & oldVal, string & newVal)
{
    auto cur = s.begin();
    while (cur != s.end() - oldVal.size())
    {
        if (string{cur, cur + oldVal.size() } == oldVal)
            {
                cur = s.erase(cur, cur + oldVal.size());
                cur = s.insert(cur, newVal.begin(), newVal.end());
                cur += newVal.size();
            }
            else
                ++cur;
    }
    return cur;
}

int main()
{
    string s{ "To drive straight thru is a foolish, tho courageous act." };
    replace_with(s, "tho", "though");
    replace_with(s, "thru", "through");
    cout << s << endl;

    return 0;
}
