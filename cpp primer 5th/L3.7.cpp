#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;
    for (char &c : str)
        if (isalnum(c))
        c = 'X';
    cout << str << endl;
    return 0;
}
