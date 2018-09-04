#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while (cin >> ch)
    {
        if (ch == 'a')
            ++aCnt;
        if (ch == 'e')
            ++eCnt;
        if (ch == 'i')
            ++iCnt;
        if (ch == 'o')
            ++oCnt;
        if (ch == 'u')
            ++uCnt;
    }
    cout << "Number of vowel a : " << aCnt << '\n'
         << "Number of vowel e : " << eCnt << '\n'
         << "Number of vowel i : " << iCnt << '\n'
         << "Number of vowel o : " << oCnt << '\n'
         << "Number of vowel u : " << uCnt << '\n';
    cout << endl;
    return 0;
}
