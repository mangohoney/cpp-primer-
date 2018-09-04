#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string word, wordnext;
    if (cin >> word)
    {
        int cnt = 1;
        while (cin >> wordnext)
        {
            if (word == wordnext)
                ++cnt;
            else
            {
                cout << cnt << endl;
                word = wordnext;
                cnt = 1;
            }
        }
        cout << cnt << endl;
    }
    cout << endl;
    return 0;
}
