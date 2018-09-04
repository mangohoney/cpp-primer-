#include <iostream>
using namespace std;
int main(){
    string s1,s2;
    if (cin >> s1)
    {
        int cnt = 1;
        while (cin >> s2)
        {
            s1 += ' ' + s2;
            ++cnt;
        }
        cout << s1 << " " << cnt << endl;
    }
    return 0;
}
