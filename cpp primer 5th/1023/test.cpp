#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream ifs("god.txt");
    string str;
    while (getline(ifs, str))
        cout << str << "\n\n";
    return 0;
}
