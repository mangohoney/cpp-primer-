#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int grade;
    const vector<string> gradeLevel = {"F","D","C","B","A","S"};
    while (cin >> grade)
    {
        if (grade <= 100 && grade >= 0)
        {
            string gradeLevFin;
            if (grade < 60)
                gradeLevFin = gradeLevel[0];
            else
            {
                gradeLevFin = gradeLevel[(grade-50)/10];
                if (grade % 10 >= 5)
                gradeLevFin += '+';
            }
            cout << gradeLevFin << ' ';
        }
        else
            cout << "DateError!" << ' ';
    }
    cout << endl;
    return 0;
}
