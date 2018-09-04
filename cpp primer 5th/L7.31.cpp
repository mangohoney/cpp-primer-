#ifndef L7.31
#define L7.31

class Y ;

class X {
    Y *y = nullptr;
};

class Y{
    X x;
};

#endif // L7
