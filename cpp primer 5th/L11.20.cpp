#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main()
{
    ifstream ifs("god.txt");
    map<string, size_t> word_count;
    string word;
    while (ifs >> word)
    {
        auto ret = word_count.insert({word, 1});
        if (!ret.second)
            ++ret.first->second;
    }
    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << "\n";
    cout << endl;

    return 0;
}
