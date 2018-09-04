#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned scores;
    vector<unsigned> scoresTotal;
    while (cin >> scores)
    {
        if (scores <= 100)
        scoresTotal.push_back(scores);
    }
    vector<unsigned> grade(11,0);
    for (auto i = scoresTotal.begin(); i != scoresTotal.end(); ++i)
    {
        ++*(grade.begin() + (*i)/10);
    }
    for (auto j = grade.begin(); j != grade.end(); ++j)
    {
        cout << *j << endl;
    }
    return 0;
}
