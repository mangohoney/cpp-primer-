#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n[10] = {};
   for (size_t i = 0; i != 10; ++i)
   {
       *(n + i) = 0;
       cout << *(n + i) << ' ';
   }
   cout << endl;
   return 0;
}
