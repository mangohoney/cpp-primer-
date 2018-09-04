#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num[10];
    for (size_t x = 0; x != 10; ++x)
    {
        num[x] = x;
        cout << num[x] << " ";
    }
    cout << endl;
    int b[10];
    for (size_t j = 0; j != 10; ++j)
    {
        b[j] = num[j];
        cout << b[j] << " ";
    }
    cout << endl;
    return 0;
}
