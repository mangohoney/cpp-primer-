#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    do
    {
        string str1, str2;
        cout << "Please enter two numbers" << '\n';
        cin >> str1 >> str2;
        if (str1.size() > str2.size())
            cout << str1 << '\n';
        else
            cout << str2 << '\n';
        cout << "More? Enter yes or no" << '\n';
        cin >> str;
    }
    while (!str.empty() && str[0] != 'n');
    cout << endl;
    return 0;
}
