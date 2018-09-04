#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;
    for (auto &c : str)
        if (isalnum(c))
        c = 'X';
    cout << str << endl;
    return 0;
}
