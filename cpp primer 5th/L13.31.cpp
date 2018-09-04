#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::size_t;

#include <vector>
#include <numeric>

class HasPtr
{
public:
    friend void swap(HasPtr&, HasPtr&);
    friend bool operator<(const HasPtr&, const HasPtr&);

    HasPtr(const string &s = string()):
    ps(new string(s)), i(0), use(new size_t(1)) { }
    HasPtr(const HasPtr &p):
    ps(new string(*p.ps)), i(p.i), use(p.use) { ++*use; }
    HasPtr& operator=(HasPtr);
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

HasPtr& HasPtr::operator=(HasPtr rhs)
{
    ++*rhs.use;
    swap(*this,rhs);
    return *this;
}

bool operator<(const HasPtr &lhs, const HasPtr &rhs)
{
    return *lhs.ps < *rhs.ps;
}

int main() {
    std::vector<HasPtr> vhs{"i", "have", "a", "dream", "i"};
    sort(vhs.begin(), vhs.end());
    return 0;
}
