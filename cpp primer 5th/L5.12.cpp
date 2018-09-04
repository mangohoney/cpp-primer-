#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
    string str2;
    vector<string> stvec;
    while (cin >> str2)
    {
        stvec.push_back(str2);
    }
    for (auto str2 = stvec.begin(); str2 != stvec.end(); ++str2)
    {
        int ffSta = 0, flSta = 0, fiSta = 0;
        for (auto ch = (*str2).begin(); ch != (*str2).end() - 1; ++ch)
        {
            if (*ch == 'f')
            {
                switch (*(ch+1))
                {
                case 'f':
                    ffSta = 1;
                    break;
                case 'l':
                    flSta = 1;
                    break;
                case 'i':
                    fiSta = 1;
                    break;
                default:
                    break;
                }
            }
        }
        ffCnt += ffSta;
        flCnt += flSta;
        fiCnt += fiSta;
    }
    cout << ffCnt << '\n'
         << flCnt << '\n'
         << fiCnt << '\n';
    cout << endl;
    return 0;
}
