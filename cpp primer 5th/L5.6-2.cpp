#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int grade;
    const vector<string> gradeLevel = {"F","D","C","B","A","S"};
    while (cin >> grade)
    {
        string gradeLevFin = grade < 0 || grade > 100 ? "DateRrror!"
                                 : grade < 60 ? gradeLevel[0]
                                     : grade % 10 >= 5 ? (gradeLevel[(grade - 50) / 10] + '+')
                                         : gradeLevel[(grade - 50) / 10];
        cout << gradeLevFin << ' ';
    }
    cout << endl;
    return 0;
}
