#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    ifstream
    istream_iterator<int> ii(cin), eof;
    vector<int> v(ii, eof);
    sort(v.begin(), v.end());
    ostream_iterator<int> oi(cout, " ");
    unique_copy(v.begin(), v.end(), oi);

    return 0;
}
