#include <iostream>
#include <vector>

using namespace std;

int main()
{
    using int_array = int[3][4];
    using int_array2 = int[4];
    int ia[2][3][4] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    for (int_array *i = ia; i != ia + 2; ++i)
       for (int_array2 *j = *i; j != (*i) + 3; ++j)
           for (int *k = *j; k != *j + 3; ++k)
               cout << *k << ' ';
   cout << endl;
   return 0;
}
