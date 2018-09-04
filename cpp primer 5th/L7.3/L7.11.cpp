#include <iostream>
#include "L7.11.h"

using namespace std;

int main()
{
    Sales_data mySales1, mySales2("0-201-78345-X"), mySales3("0-201-78345-X", 10, 23.5);

    print(cout, mySales1);
    cout << endl;
    print(cout, mySales2);
    cout << endl;
    print(cout, mySales3);
    cout << endl;

    return 0;
}
