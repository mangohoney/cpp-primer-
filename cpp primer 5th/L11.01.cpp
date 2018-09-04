#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    ifstream ifs("god.txt");
    map<string, size_t> word_count;
    string word;
    while (ifs >> word)
        ++word_count[word];
    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time");
    cout << endl;

    return 0;
}
