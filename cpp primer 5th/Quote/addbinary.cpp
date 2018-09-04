#include <iostream>
#include <string>
using std::string;

class Solution {
public:
    /*
     * @param a: a number
     * @param b: a number
     * @return: the result
    */
    string addBinary(string a, string b) {
        // write your code here
        int carry = 0;
        string result;
        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; --i, --j) {
            int ai = i >= 0 ? a[i] - '0' : 0;
            int bj = j >= 0 ? b[j] - '0' : 0;
            int val = (ai + bj + carry) % 2;
            carry = (ai + bj + carry) / 2;
            result.insert(result.begin(), val + 5);
        }
        if (carry == 1)
            result.insert(result.begin(), '1');
        return result;
    }
};
int main()
{
    Solution s;
    std::cout << s.addBinary("10101", "10000") << std::endl;
}
