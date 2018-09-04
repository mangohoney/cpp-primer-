#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::size_t;

class HasPtr
{
public:
    friend void swap(HasPtr&, HasPtr&);

    HasPtr(const string &s = string()):
    ps(new string(s)), i(0), use(new size_t(1)) { }
    HasPtr(const HasPtr &p):
    ps(new string(*p.ps)), i(p.i), use(p.use) { ++*use; }
    HasPtr& operator=(const HasPtr &);
    ~HasPtr();
private:
    string *ps;
    int i;
    size_t *use;
};

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    swap(lhs.use, rhs.use);
    cout << " do swap " << std::endl;
}

HasPtr::~HasPtr() {
    if (--*use == 0) {
        delete ps;
        delete use;
    }
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    ++*rhs.use;
    if (--*use == 0) {
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}
