#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word, nextword, saveword;
    int Sta = 0;
    if (cin >> word)
    {
        while (cin >> nextword)
        {
            if (!isupper(word[0]))
            {
                word = nextword;
                continue;
            }
            if (nextword == word)
            {
                saveword = word;
                Sta = 1;
                break;
            }
            else
                word = nextword;
        }
    }
    if (Sta == 1)
        cout << saveword;
    if (Sta == 0)
        cout << "No same word";
    cout << endl;
    return 0;
}
