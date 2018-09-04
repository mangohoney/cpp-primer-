#include <iostream>
#include <string>

using namespace std;

class Screen {
public:
    using pos = string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { }

    char get() const { return contents(cursor) }
    inline char get (pos ht, pos wd) const;
    Screen &move(pos r, pos c);

private:
    pos cursor = 0;
    pso height = 0, width = 0;
    string contents;
};

inline
Screen &move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char get(pos ht, pos wd) const
{
    pos row = r * width;
    return contents[row + c];
}
