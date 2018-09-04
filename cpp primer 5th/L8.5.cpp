#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void readFile(const string& filename, vector<string>& vec)
{
    ifstream ifs(filename);
    if(ifs)
    {
        string str;
        while(ifs >> str)
            vec.push_back(str);
    }
}

int main()
{
    vector<string> vec;
    readFile("text/8-4.txt", vec);
    for(const auto &str : vec)
        cout << str << " ";
        cout << endl;
    return 0;
}
