#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;
    for (decltype(str.size()) index = 0;index != str.size();++index)
        str[index] = 'X';
    cout << str << endl;
    return 0;
}
