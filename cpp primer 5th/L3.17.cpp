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
    for (auto &w : words){
        for (auto &c : w){
        c = toupper(c);
        }
    cout << w << endl;
    }
    return 0;
}
