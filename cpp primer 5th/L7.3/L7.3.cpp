#include <iostream>
#include "Sales_data.h"

using namespace std;

int main ()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data tem;
        while (cin >> tem.bookNo >> tem.units_sold >> tem.revenue)
        {
            if (tem.bookNo == total.bookNo)
                total.combine(tem);
            else
            {
                cout << total.bookNo << total.units_sold << total.revenue << endl;
                total = tem;
            }
        }
        cout << total.bookNo << total.units_sold << total.revenue << endl;
    }
    else
        cout << "NoData" << endl;
    return 0;
}
