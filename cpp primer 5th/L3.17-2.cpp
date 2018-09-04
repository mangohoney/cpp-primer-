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
        for (auto &c : words[i])
        {
            c = toupper(c);
        }
    cout << words[i] << endl;
    }
    return 0;
}
