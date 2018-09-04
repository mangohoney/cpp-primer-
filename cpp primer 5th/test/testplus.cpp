#include <iostream>

bool checkSumOfSquareNumbers(int num) {
        // write your code here
        if (num < 0) {
            return false;
        }
        for (int i = 0; i * i <= (num + 1) / 2; ++i) {
            for (int j = 0; j * j <= num - i * i; ++j) {
                if (j * j + i * i == num) {
                    return true;
                }
            }
        }
        return false;
    }

int main()
{
    std::cout << checkSumOfSquareNumbers(5) << std::endl;
    return 0;
}
