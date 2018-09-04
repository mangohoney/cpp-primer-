#ifndef L7_27_h
#define L7_27_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Screen;

class Window_mgr{
public:
    using ScreenIndex = vector<Screen>::size_type;

    void clear(ScreenIndex);
    ScreenIndex addScreen(const Screen&);
private:
    vector<Screen> screens;
};



class Screen {
    friend void Window_mgr::clear(ScreenIndex);
public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { }

    Screen &set(char c);
    Screen &set(pos ht, pos wd, char c);
    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r * width + c]; }
    Screen &move(pos r, pos c);
    pos size() const;
    Screen &display(ostream &os) { do_display(os); return *this; }
    const Screen &display(ostream &os) const { do_display(os); return *this; }

private:
    void do_display(ostream &os) const { os << contents; }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

inline void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

inline Window_mgr::ScreenIndex
Window_mgr::addScreen(const Screen &s)
{
    screens.push_back(s);
    return screens.size() - 1;
}
inline Screen& Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos ht, pos wd, char c)
{
    contents[width * ht + wd] = c;
    return *this;
}

inline Screen::pos Screen::size() const
{
    return height * width;
}

#endif // 7_27_h
