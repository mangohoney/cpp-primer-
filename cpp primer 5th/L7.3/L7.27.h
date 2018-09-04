#include <iostream>
#include <string>

using namespace std;

class Screen {
public:
    using pos = string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { }

    Screen &set(char c);
    Screen &set(pos ht, pos wd, char c);
    char get() const { return contents[cursor]; }
    char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    Screen &display(ostream &os) { do_display(os); return *this; }
    const Screen &display(ostream &os) const { do_display(os); return *this; }

private:
    void do_display(ostream &os) const { os << contents; }
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

inline Screen &move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen &set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &set(pos ht, pos wd, char c)
{
    contens[width * ht + wd] = c;
    return *this;
}

inline char get(pos ht, pos wd) const
{
    pos row = r * width;
    return contents[row + c];
}

