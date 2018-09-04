#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num = {1,2,3,4,5,6,9,12,15,27};
    for (auto i = num.begin(); i != num.end(); ++i)
        {
            cout << *i*2 << endl;
        }
    return 0;
}
