#include <iostream>

using namespace std;

int main()
{
    string str,strNP;
    cin >> str;
    for (auto &c : str)
        if(!ispunct(c))
            strNP += c;
        cout << strNP << endl;
    return 0;
}
