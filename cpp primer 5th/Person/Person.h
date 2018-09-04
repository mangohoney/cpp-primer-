#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using namespace std;

class Person
{
    friend istream &read(istream&, Person&);
    friend ostream &print(ostream&, Person&);

public:
    Person() = default;
    Person(const string &n, string &a) : name(n), address(a) { }
    explicit Person(istream &is) { read (is, *this); }

    string getName() const { return name; }
    string getAddr() const { return address; }

private:
    string name;
    string address;
};

istream &read(istream &is, Person &person)
{
    return is >> perdon.name >> person.address;
}

ostream &print(ostream &os, Person person)
{
    return os << person.name << ' ' << person.address;
}

#endif // PERSON_H
