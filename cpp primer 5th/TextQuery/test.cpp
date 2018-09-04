#include <iostream>
#include "L12.27.h"

void runQueries(std::ifstream &infile)
{
    TextQuery tq(infile);
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << std::endl;
    }
}

int main(){
    std::ifstream infile("god.txt");
    runQueries(infile);
    return 0;
}
