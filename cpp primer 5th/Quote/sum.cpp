#include <iostream>
#include <bitset>

class Solution
{
public:
    /*
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b
     */
    void outbin(int x) { std::cout << std::bitset<sizeof(int)*8>(x) << std::endl; }   // 二进制输出
    int aplusb(int a, int b)
    {
        // write your code here
        int sta = 0;
        outbin(a);
        outbin(b);
        while (b != 0)
        {
            int carry = a & b;
            a = a ^ b;
                b = carry << 1;
                outbin(a);
            outbin(b);
        }
        return a;
    }
};

int main()
{
    Solution s;
    std::cout << s.aplusb(100, 100) << std::endl;
}
