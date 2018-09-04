#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <numeric>

#include "L10.32\Sale_data.h"

using namespace std;

int main()
{
    istream_iterator<Sales_data> iis(cin), iisof;
    vector<Sales_data> vs(iis, iisof);
    sort(vs.begin(), vs.end(), compareIsbn);
    for (auto beg = vs.cbegin(), end = beg; beg != vs.cend(); beg = end)
    {
        end = find_if(beg, vs.cend(), [beg] (const Sales_data &item)
                     { return item.isbn() != beg -> isbn(); });
        cout << accumulate(beg, end, Sales_data(beg -> isbn())) << endl;
    }

    return 0;
}
