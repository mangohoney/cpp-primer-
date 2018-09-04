#include <iostream>

using namespace std;

int main(){
    string str;
    decltype(str.size()) index = 0;
    while (cin >> str)
    {
        while (index < str.size())
        {
            str[index] = 'X';
            index++;
        }
    }
    cout << str << endl;
    return 0;
}
