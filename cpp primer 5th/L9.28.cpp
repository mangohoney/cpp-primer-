#include <iostream>
#include <forward_list>

using namespace std;

void lis_se(forward_list<string> &lst, string &str1, string &str2)
{
    auto pre = lst.before_begin();
    for (auto cur = lst.begin(); cur != lst.end(); pre = cur++)
    {
        if (*cur == str1)
        {
            lst.insert_after(cur, str2);
            return;
        }
    }
    lst.insert_after(pre, str2);

}
int main()
{
    forward_list<string> ia = { "cat", "big", "cat" };
    string str1 = "bug";
    string str2 = "cat";
    lis_se(ia, str1, str2);
    for (auto i : ia)
        cout << i << " ";
    cout << endl;
    return 0;
}
