#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int grade;
    while (cin >> grade)
    {
        if (grade <= 100 && grade >= 0)
        {
            if (grade > 90)
                cout << "high pass" << " ";
            else if (grade > 75)
                cout << "pass" << " ";
            else if (grade > 60)
                cout << "low pass" << " ";
            else
                cout << "fail" << " ";
        }
        else
            cout << "DateError!" << ' ';
    }
    cout << endl;
    return 0;
}
