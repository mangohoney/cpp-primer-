#include <vector>
#include <string>

using std::string;
using std::vector;

vector<vector<string>> res;
vector<string> tem;
string str;
void dfs(const string &, int);
vector<vector<string>> splitString(string& s)
{
    // write your code here
    if (s.size() == 1)
    {
        tem.push_back(s);
        res.push_back(tem);
        return res;
    }
    dfs(s, 0);
    return res;
}
void dfs (const string &s, int start)
{
    int len = static_cast<int>(s.size());
    if (start > len)
    {
        return;
    }
    else if (start == len)
    {
        res.push_back(tem);
        return;
    }
    for (int i = 1; i <= 2; ++i)
    {
        if (start + i <= len)
        {
            auto ptr = tem.end();
            tem.push_back(s.substr(start, i));
            dfs(s, start + i);
            tem.erase(ptr, tem.end());
            ptr = nullptr;
        }
        else
        {
            return;
        }
    }

}
};
