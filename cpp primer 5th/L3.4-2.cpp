#include <iostream>
using namespace std;
int main(){
    string s1,s2;
    while (cin >> s1 >> s2)
    {
        auto len1 = s1.size();
        auto len2 = s2.size();
        if (len1 == len2)
            cout << "String s1 and s2 have the same length and the size is " << len1 << endl;
        else if (len1 > len2)
            cout << "String s1 is longer and s1 is: " << s1 << endl;
        else
            cout << "String s2 is longer and s2 is: " << s2 << endl;
    }
    return 0;
}
