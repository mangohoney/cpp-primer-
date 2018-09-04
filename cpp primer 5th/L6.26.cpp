#include <iostream>
#include <string>

using namespace std;

int main (int i, char **j)
{
    string str;
    for (int c = 1; c != i; ++c)
        str += j[c];// str += string(j[c]) + " " //str += j[c] + ' '
    cout << str << endl;
    return 0;
}
