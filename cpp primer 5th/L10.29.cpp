#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main()
{
    ifstream ifs("god.txt");
    istream_iterator<string> ii(ifs), eof;
    vector<string> v(ii, eof);
    for (auto &i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}
