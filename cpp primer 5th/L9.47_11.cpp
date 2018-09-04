#include <iostream>
#include <string>

using namespace std;

int main()
{
    string::size_type pos = 0;
    string num{"123456789"};
    string str{"ab2c3d7R4E6"};
    string alp{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    while((pos = str.find_first_of(num, pos))!= string::npos)
    {
        cout << " index: " << pos << " element " << str[pos] << '\n';
        ++pos;
    }
    cout << endl;
    pos = 0;
    while((pos = str.find_first_of(alp, pos))!= string::npos)
    {
        cout << " index: " << pos << " element " << str[pos] << '\n';
        ++pos;
    }
    cout << endl;
    return 0;
}
