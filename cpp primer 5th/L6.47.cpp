#include <iostream>
#include <vector>

using namespace std;

#define NDEBUG

void printVec(vector<int> &vec)
{
#ifdef NDEBUG
    cout << "vector size: " << vec.size() << endl;
#endif
    static auto i = vec.begin();
    if (i != vec.end())
    {
        cout << *(i++) << " ";
        printVec(vec);
    }
}

int main()
{
    vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    printVec(vec);
    cout << endl;

    return 0;
}
