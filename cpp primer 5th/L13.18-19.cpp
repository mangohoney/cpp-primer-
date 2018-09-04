#include <iostream>
#include <string>
using std::string;

class HasPtr
{
public:
    HasPtr(const string &s = string():
    ps(new string(s)), i(0) { }
    HasPtr(const HasPtr &p):
    ps(new string(*p.ps)), i(p.i) { }
    HasPtr& operator=(const HasPtr &);
    ~HasPtr()
    {
        delete ps;
    }
    private:
    string *ps;
    int i;
};
