#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream ifs("god.txt");
    vector<string> vec;
    string str;
    while (getline(ifs, str))
        vec.push_back(str);
    for(auto &c: vec)
    {
        istringstream istr(c);
        string str2;
        while (istr >> str2)
        cout << str2 << endl;
    }
    return 0;
}
