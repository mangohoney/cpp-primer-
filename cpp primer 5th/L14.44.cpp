#include <iostream>
#include <string>
#include <map>
#include <functional>

int add(int i, int j) { return i + j; }
auto mod = [](int i, int j) { return i % j; };
struct divide {
    int operator()(int denominator, int divisor) {
        return denominator / divisor;
    }
};

auto binops = std::map<std::string, std::function<int(int, int)>>
{
    { "+", add },
    { "-", std::minus<int>() },
    { "/", divide() },
    { "*", [](int i, int j) { return i * j; } },
    { "%", mod }
};

int main()
{
    int i, j;
    std::string s;
    while (std::cin >> i >> s >> j)
        std::cout << binops[s](i, j) << std::endl;
    return 0;
}
