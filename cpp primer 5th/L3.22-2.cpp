#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string temp;
    vector<string> words;
    while (cin >> temp)
    {
        words.push_back(temp);
    }
    for (auto it = words.begin(); it != words.end() && !it->empty(); ++it)
    {
        for (auto &c : *it)
        {
        c = toupper(c);
        }
        cout << *it << endl;
    }
    return 0;
}
