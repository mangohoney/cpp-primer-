#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int grade;
    while (cin >> grade)
    {
            string gradeClass = (grade > 100) ? "DateError!"
                                    : (grade > 90) ? "high pass"
                                    : (grade > 75) ? "pass"
                                    : (grade < 60) ? "fail"
                                    : (grade > 0) ? " low pass" :"DateError!";
            cout << gradeClass << ' ';
    }
    cout << endl;
    return 0;
}
