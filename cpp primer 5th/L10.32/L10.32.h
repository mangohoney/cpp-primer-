#include <string>
#include <iostream>

using namespace std;

class Sales_data
{
    friend istream &read(istream&, Sales_data&);
    friend ostream &print(ostream&, const Sales_data&);
    friend Sales_data add(Sales_data&, Sales_data&);
    friend istream& operator>>(istream&, Sales_data&);
    friend ostream& operator<<(ostream&, const Sales_data&);
    friend bool operator<(const Sales_data&, const Sales_data&);
    friend bool operator==(const Sales_data&, const Sales_data&);
    friend bool compareIsbn(const Sales_data &sd1, const Sales_data &sd2);

public:
    Sales_data(const string &s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(n * p) { }
    Sales_data(): Sales_data(" ", 0, 0) {}
    Sales_data(const string &s): Sales_data(s, 0, 0) {}
    Sales_data(istream &is): Sales_data() { read(is, *this); }

    string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);
    Sales_data& operator+=(const Sales_data&);

private:
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}

inline bool
operator==(const Sales_data &lhs, const Sales_data &rhs)
{
    // must be made a friend of Sales_item
    return lhs.units_sold == rhs.units_sold &&
           lhs.revenue == rhs.revenue &&
           lhs.isbn() == rhs.isbn();
}

inline bool
operator!=(const Sales_data &lhs, const Sales_data &rhs)
{
    return !(lhs == rhs); // != defined in terms of operator==
}

ostream&
operator<<(ostream& out, const Sales_data& s)
{
    out << s.isbn() << " " << s.units_sold << " "
        << s.revenue << " " << s.avg_price();
    return out;
}

istream&
operator>>(istream& in, Sales_data& s)
{
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    // check that the inputs succeeded
    if (in)
        s.revenue = s.units_sold * price;
    else
        s = Sales_data();  // input failed: reset object to default state
    return in;
}

Sales_data operator+(const Sales_data&, const Sales_data&);

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.units_sold;
    return *this;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data
operator+(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data ret(lhs);  // copy (|lhs|) into a local object that we'll return
    ret += rhs;           // add in the contents of (|rhs|)
    return ret;           // return (|ret|) by value
}

istream &read(istream &is, Sales_data &item)
{
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold << " " << item.revenue << endl;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

bool compareIsbn(const Sales_data &sd1, const Sales_data &sd2)
{
    return sd1.isbn().size() < sd2.isbn().size();
}
