#include <iostream>
#include <vector>

using namespace std;

auto contains(vector<int>::const_iterator first, vector<int>::const_iterator last, int value)
{
    for (; first != last; ++first)
        if (*first == value)
        return true;
    return false;
}
