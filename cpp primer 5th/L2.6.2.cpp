#include <iostream>
using namespace std;
struct Sales_data{
    string bookNo;
    unsigned units_sold = 0;
    double price = 0.0;
};
int main()
{
    Sales_data data1,data2;
    if(cin >> data1.bookNo >> data1.units_sold >> data2.price){
            int cnt = 1;
            double revenue1 = data1.units_sold * data1.price;
            if(cin >> data2.bookNo >> data2.units_sold >> data2.price){
                    while(data1.bookNo == data2.bookNo){
                        double revenue2 = data2.units_sold * data1.price;
                        revenue1 += revenue2;
                        ++cnt;
                    }
    if (data1.bookNo == data2.bookNo){
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
        if (totalCnt != 0)
            cout << totalRevenue/totalCnt << endl;
        else
            cout << "(No Sales)" << endl;
        return 0;
    }
    else {
        cerr << "Data must refer to the same ISBN"
             << endl;
        return -1;
    }
}
