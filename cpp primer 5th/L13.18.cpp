#include <iostream>
#include <string>
#include <memory>

using namespace std;

struct Employee
{
public:
    Employee(){ id = incre++;}
    Employee(const string &name_): name(name_){ id = incre++;}
private:
    string name;
    int id;
    static int incre;
};

Employee::incre = 0;
