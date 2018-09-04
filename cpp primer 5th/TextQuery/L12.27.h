#ifndef L12_27
#define L12_27

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <memory>
using std::shared_ptr;

#include <iostream>
using std::cin;
using std::cout;

#include <fstream>
#include <map>
using std::map;

#include <set>
using std::set;

class QueryResult;
class TextQuery
{
public:
    using LineNo = vector<string>::size_type;
    TextQuery(std::ifstream &);
    QueryResult query(const string&) const;
private:
    shared_ptr<vector<string>> input;
    map<string, shared_ptr<set<LineNo>>> result;
};

class QueryResult
{
public:
    friend std::ostream& print(std::ostream &, const QueryResult &);
public:
    QueryResult(const string &s, shared_ptr<set<TextQuery::LineNo>> se, shared_ptr<vector<string>> v) :
               word(s), nums(se), input(v) { }
private:
    string word;
    shared_ptr<set<TextQuery::LineNo>> nums;
    shared_ptr<vector<string>> input;
};

std::ostream& print(std::ostream &, const QueryResult &);

#endif // L12_27
