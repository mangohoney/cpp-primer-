#include <iostream>
#include <vector>

using namespace std;

string (&up(string str))[10];

using arrS = string[10];
arrS& up(string str);

auto up(string str) -> string(&)[10];

string odd[] = {};
decltype(odd) &up(string str)
