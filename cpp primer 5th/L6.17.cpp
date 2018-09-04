#include <iostream>

using namespace std;

bool has_upper(const string &i)
{
    int sta = 0;
    for (auto c : i)
        if (isupper(c))
    {
        sta = 1;
        break;
    }
    return sta;
}

string word_upper(string &i)
{
    for (auto &c : i)
        c = tolower(c);
        return i;
}

int main()
{
    string str;
    while (cin >> str)
        cout << word_upper(str) << '\n';
    cout << endl;
    return 0;
}
