#include "L12.27.h"
#include <sstream>
#include <algorithm>

using namespace std;

TextQuery::TextQuery(ifstream &ifs) : input(new vector<string>)
{
    LineNo lineno = 0;
    for (string text; getline(ifs, text); ++lineno)
    {
        input->push_back(text);
        istringstream is_line(text);
        for (string line, word; is_line >> line; word.clear())
        {
            remove_copy_if(line.begin(), line.end(), back_inserter(word), ::ispunct);
            auto &nos = result[word];
            if (!nos)
                nos.reset(new set<LineNo>);
            nos->insert(lineno);
        }
    }
}

QueryResult TextQuery::query(const string &sought) const
{
    static shared_ptr<set<LineNo>> nodata(new set<LineNo>);
    auto found = result.find(sought);
    if (found == result.end())
        return QueryResult(sought, nodata, input);
    else return QueryResult(sought, found->second, input);
}

ostream &print(ostream &os, const QueryResult &qus)
{
    os << qus.word << " occurs " << qus.nums->size() << endl;
    for (auto num : *qus.nums)
        os << "\t(line " << num + 1 << ")"
           << *(qus.input->begin() + num) << endl;
    return os;
}
