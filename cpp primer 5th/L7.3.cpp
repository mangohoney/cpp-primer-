#include <iostream>
#include <string>

using namespace std;

class Screen {
public:
    using pos = string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(c) { }

    char get() const { return contents(cursor) }
    inline char get (pos ht, pos wd) const;
    Screen &move(pos r, pos c);

private:
    pos cursor = 0;
    pso height = 0, width = 0;
    string contents;
};

Screen &move(pos r, pos c)
{

}
