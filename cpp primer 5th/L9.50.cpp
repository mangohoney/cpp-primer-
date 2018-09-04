#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> v = {"10", "100", "999", "-1546"};
    int sum = 0;
    for(auto &i : v)
        sum += stoi(i);
    cout << sum << endl;

    return 0;
}
