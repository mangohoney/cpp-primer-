#include <iostream>
using namespace std;
int main(){
    string s1,s2;
    while (cin >> s1 >> s2)
    {
        if (s1 == s2)
            cout << "String s1 and s2 are the same: " << s1 << endl;
        else if (s1 > s2)
            cout << "String s1 is bigger and s1 is: " << s1 << endl;
        else
            cout << "String s2 is bigger and s2 is: " << s2 << endl;
    }
    return 0;
}
