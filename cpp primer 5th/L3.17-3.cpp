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
    for (decltype(words.size()) i = 0;i != words.size();++i)
        {
        for (decltype(words.size()) j = 0;j != words[i].size();++j)
        {
            words[i][j] = toupper(words[i][j]);
        }
        }
    for (auto c : words)
    cout << c << endl;
    return 0;
}
